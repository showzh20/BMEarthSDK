//
//  BMUtility.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/9/29.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BMUtility_hpp
#define BMUtility_hpp


#include <string>

class BMUtility {
public:
    /// 数据加密
    static std::string encryption(std::string data);
    
    ///数据解密
    static std::string decryption(std::string data);
};


#endif /* BMUtility_hpp */
