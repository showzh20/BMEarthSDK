//
//  BmTrack.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/13.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTrack_hpp
#define BmTrack_hpp

#include "BmTimer.hpp"
#include "BmTrackIconNode.hpp"

#include <BmFeature/BmTrackNode.h>

using namespace BmApp;

class BmTrack {
public:
    static BmTrack* getDefault();

    BmTrack();

    void startrecordTrack();

    void addpointTrack(uint64_t time,double x, double y, double  z);

    BmTrackNode* stopreCorkTrack();

    void dirtyLine();

    void addEvent(osgEarth::GeoPoint tmpGeoPoint);

protected:
    void updateTmpLine(osgEarth::GeoPoint tmpGeoPoint);

    void computeHeding(osg::Vec3d pt);

private:

    double m_dHeading;        //当前方向

    osg::Vec3d m_currentPt;      //当前点

    BmTimer m_timer;

    BmTrackNode* m_tmpLine;

    BmTrackNode* m_returnLine;

    BmTrackIconNode* m_TrackNode;

    static BmTrack* m_OnBmTrack;

};


#endif /* BmTrack_hpp */
