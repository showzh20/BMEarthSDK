//
//  BmReadThread.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/8/17.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef BmReadThread_hpp
#define BmReadThread_hpp

#include <OpenThreads/Thread>
#include "BmReadBMV.h"

using namespace BmApp;
class BmReadThread:public OpenThreads::Thread
{
public:

    BmReadThread(const std::vector<featuresRelation> & featureList);

    virtual void run();


private:

    std::vector<featuresRelation> _FeatureList;
};

#endif /* BmReadThread_hpp */
