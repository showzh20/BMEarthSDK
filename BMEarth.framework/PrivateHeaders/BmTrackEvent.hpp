//
//  BmTrackEvent.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/13.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTrackEvent_hpp
#define BmTrackEvent_hpp

#include "BmTrack.hpp"
#include "BaseData.hpp"

class BmTrackEvent:public BaseData{
public:
    BmTrackEvent(BmTrack * theTrck,bool isDirtyLine);
    virtual bool exec(const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter&aa);

    void setGeoPoint(osgEarth::GeoPoint geopoint);
    osgEarth::GeoPoint getGeoPoint();
private:
    bool m_isDirtyLine;
    BmTrack * m_track;
    osgEarth::GeoPoint m_getPoint;
};

#endif /* BmTrackEvent_hpp */
