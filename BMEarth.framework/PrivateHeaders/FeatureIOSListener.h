//
//  FeatureIOSListener.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/7/30.
//  Copyright © 2020 赵洪. All rights reserved.
//


#include <BmEarth/Features/Action/featureactionlistener.h>

using namespace BmApp;


class FeatureIOSListener :public FeatureActionListener
{
public:
    virtual void featureInited(BmAbstractFeature *);
    virtual void featureCreated(BmAbstractFeature *);
    virtual void featureEditing(BmAbstractFeature *);
    virtual void featureDrawing(BmAbstractFeature *);
};
