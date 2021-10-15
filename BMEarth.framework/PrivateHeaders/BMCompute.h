//
//  BMCompute.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/2/22.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef BMCompute_hpp
#define BMCompute_hpp

#include <BmEarth/Features/bmabstractfeature.h>
#include <osgEarthSymbology/Geometry>
@class BMEarthElementCoordModel;
using namespace osgEarth::Symbology;
class BMCompute {
public:
    static double getArea(NSMutableArray<BMEarthElementCoordModel *>* coordlist,int type);

    static double getPerimeter(NSMutableArray<BMEarthElementCoordModel *>* coordlist,int type);
private:
    static double computeArea(Geometry * points);

    static double computePerimeter(Geometry * points);
};


#endif /* BMCompute_hpp */
