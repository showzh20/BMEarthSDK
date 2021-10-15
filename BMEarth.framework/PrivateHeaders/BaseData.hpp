//
//  BaseData.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/4.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BaseData_hpp
#define BaseData_hpp

#include <osgGA/Event>
#include <osgGA/GUIEventHandler>
#include <osgGA/GUIEventAdapter>
#include <osg/Referenced>


class BaseData : public osg::Referenced
{
public:
    static void requestDraw(BaseData* base);
public:
    virtual bool exec(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);
    virtual  bool exeFrame(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);
};


#endif /* BaseData_hpp */
