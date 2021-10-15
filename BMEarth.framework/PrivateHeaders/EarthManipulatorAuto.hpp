//
//  EarthManipulatorAuto.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/10/9.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef EarthManipulatorAuto_hpp
#define EarthManipulatorAuto_hpp

#include <osgGA/CameraManipulator>
#include <osgEarth/MapNode>
#include <osgEarth/Viewpoint>
#include <osgEarth/GeoData>

class EarthManipulatorAuto: public osgGA::GUIEventHandler {
public:

    EarthManipulatorAuto(int type );

    virtual bool handle(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);

    void setLevel(int iLevel);

    void setType(int iType);

protected:

    void autoViewr(int type);

private:
    int m_level;
    int m_type;
};


#endif /* EarthManipulatorAuto_hpp */
