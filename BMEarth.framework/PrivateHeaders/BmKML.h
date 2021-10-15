//
//  BmKML.h
//  BigeEarth
//
//  Created by HerryBabaer on 2021/1/22.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef BIGEMAP_BMKML_H
#define BIGEMAP_BMKML_H

#include <string>
#include <BmEarth/MapData/mapshape.h>
#include <BmEarth/Features/bmabstractfeature.h>

using namespace BmApp;

class OGRGeometry;
class OGRFeature;
class OGRDataSource;
class BmKML {
public:
    static BmKML* getDefault();

    BmKML();

    bool read(std::string sFilePath,uint64_t layerId);

private:
    void OGRPointToBm(OGRGeometry* poGeometry,BmAbstractFeature* feature);

    void OGRLineStringToBm(OGRGeometry* poGeometry,BmAbstractFeature* feature);

    void OGRPolyGonToBm(OGRGeometry* poGeometry,BmAbstractFeature* feature);

    void OGRMutiGolyGonToBm(OGRGeometry* poGeometry,BmAbstractFeature* feature);



    void OGRStyleToBm(OGRDataSource  *poDS,OGRFeature *poFeature,BmAbstractFeature* feature);

private:

    std::vector<osg::Vec3d> _points;

    static BmKML* m_ReadWrite;
};


#endif //BIGEMAP_BMKML_H

