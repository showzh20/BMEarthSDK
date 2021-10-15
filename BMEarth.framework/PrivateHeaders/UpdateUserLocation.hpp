//
//  updateUserLocation.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/14.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef updateUserLocation_hpp
#define updateUserLocation_hpp

#include <string>
#include <osgEarthAnnotation/PlaceNode>
#import "CustomEvent.h"

class userLocation {
public:
    static void setuerLoaction(double latitude,double longitude,int accuracy,float heading);

    static void setNodeMask(bool isShow);

    static osgEarth::GeoPoint getcurrentPt();
    
    static void setCompassNodeMask(bool isShow);

    static void setCrossNodeMask(bool isShow);
    
private:
    static void updateHeading();

private:
    static float m_heading;
    static osgEarth::GeoPoint m_CurrentGeoPt;//记录轨迹的当前值
    friend  class CustomEvent;
    friend  class TrachThread;
    userLocation();

    static  osgEarth::Annotation::PlaceNode * m_compass;//指北针
    static  osgEarth::Annotation::PlaceNode * m_cross;//地球方向

};

#endif /* updateUserLocation_hpp */
