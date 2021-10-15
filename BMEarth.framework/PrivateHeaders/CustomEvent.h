//
//  CustomEvent.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/17.
//  Copyright © 2020 赵洪. All rights reserved.
//

#include <osgGA/Event>
#include <osgGA/GUIEventHandler>
#include <osgGA/GUIEventAdapter>
#include <osg/Referenced>
#include <osgEarthUtil/EarthManipulator>
class CustomEvent :public osgGA::GUIEventHandler
{
public:
    CustomEvent();
    
    virtual bool handle(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);
    
private:
    osgEarth::GeoPoint m_geopoint;
    float m_earthheading;
};
