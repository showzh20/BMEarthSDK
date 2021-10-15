//
//  RecoverEvent.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/4/28.
//  Copyright © 2021 赵洪. All rights reserved.
//

#include "BaseData.hpp"
#import "BMElement.h"
#import "BMEarthElementModel.h"


#include <BmEarth/Features/bmabstractfeature.h>

using namespace BmApp;


class RecoverEvent : public BaseData{
public:
    RecoverEvent(std::vector<BMEarthElementModel *>& vector);


    virtual bool exec(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &aa);

private:


    std::vector<BMEarthElementModel *> m_vecelm;

    std::vector<BmAbstractFeature* > m_vecFeature;

   
};
