//
//  BmTimer.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/13.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTimer_hpp
#define BmTimer_hpp

#include<functional>
#include<chrono>
#include<thread>
#include<atomic>
#include<memory>
#include<mutex>
#include<condition_variable>


class BmTimer {
public:
    BmTimer();

    BmTimer(const BmTimer& t);

    ~BmTimer();

    void StartTimer(int interVal,std::function<void()> task);

    void Expire();

    template<typename callable, class... arguments>
    void SyncWait(int after, callable&& f, arguments&&... args) {

        std::function<typename std::result_of<callable(arguments...)>::type()> task
                (std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));
        std::this_thread::sleep_for(std::chrono::milliseconds(after));
        task();
    }
    template<typename callable, class... arguments>
    void AsyncWait(int after, callable&& f, arguments&&... args) {
        std::function<typename std::result_of<callable(arguments...)>::type()> task
                (std::bind(std::forward<callable>(f), std::forward<arguments>(args)...));

        std::thread([after, task]() {
            std::this_thread::sleep_for(std::chrono::milliseconds(after));
            task();
        }).detach();
    }

private:
    std::atomic<bool> m_expired;
    std::atomic<bool> m_try_to_expire;
    std::mutex m_mutex;
    std::condition_variable m_expired_cond;
};


#endif /* BmTimer_hpp */
