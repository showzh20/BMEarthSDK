//
//  BmTrakManager.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/13.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTrakManager_hpp
#define BmTrakManager_hpp

#include <queue>
#include <BmEarth/Features/bmpolylinenode.h>

class BmTrakManager{
public:
    static BmTrakManager* getDefault();

    BmTrakManager();

    bool isVoildPoint(osg::Vec3d currentPt,uint64_t time,double speed,double accuracy);

    //!距离大大大于之前的表示可能偏移
    bool DistansTooBig(osg::Vec3d currentPt,double dst);
private:
    uint64_t  m_time;

    std::queue<osg::Vec3d> m_VecData;

    static BmTrakManager* m_trackManager;
};

#endif /* BmTrakManager_hpp */
