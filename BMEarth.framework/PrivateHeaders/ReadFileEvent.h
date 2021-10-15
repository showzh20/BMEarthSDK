//
//  ReadFileEvent.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/8/18.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef ReadFileEvent_hpp
#define ReadFileEvent_hpp

#include "BaseData.hpp"
#include "BmReadBMV.h"


class ReadFileEvent :public BaseData{
public:
    ReadFileEvent(const std::vector<featuresRelation> & featureList,uint64_t rootkey);

    virtual bool exec(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);

    bool checkMemoryIsEnough();
private:
    std::vector<featuresRelation> _FeatureList;
    uint64_t _rootKey;

};

#endif /* ReadFileEvent_hpp */
