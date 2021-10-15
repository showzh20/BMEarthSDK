//
//  BmTrackIconNode.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/11/6.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTrackIconNode_hpp
#define BmTrackIconNode_hpp

#include <osgEarthAnnotation/PlaceNode>

 using namespace osgEarth::Annotation;
class BmTrackIconNode :public PlaceNode{
public:
    BmTrackIconNode();

    BmTrackIconNode(const GeoPoint&    position,
                    const std::string& text,
                    const osgEarth::Symbology::Style& style ,
                    osg::Image*  image );

    void updateLoc( GeoPoint  position);


};

#endif /* BmTrackIconNode_hpp */
