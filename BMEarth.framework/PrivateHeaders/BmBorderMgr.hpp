//
//  BmBorderMgr.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/1/18.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef BmBorderMgr_hpp
#define BmBorderMgr_hpp

#include <string>
#include <vector>
#include "document.h"
#include "sqlite3.h"
#include <BmEarth/Features/bmpolylinenode.h>
#include <BmEarth/MapData/mapshape.h>

#define ASIA            "100000000000000"
#define EUROPE          "200000000000000"
#define NORTHAMERICA    "300000000000000"
#define SOUTHAMERICA    "400000000000000"
#define AFRICA          "500000000000000"
#define OCEANIA         "600000000000000"


#define BIGEMAP_MAP_SERVER              "http://tile.bigemap.com"
#define BIGEMAP_MAP_SERVER_PORT_VF      ":4382"
#define TYPE_POLYGON                    "Polygon"
#define TYPE_MULTIPOLYGON               "MultiPolygon"


using namespace BmApp;
using namespace rapidjson;

class BorderData
{
public:
    BorderData(std::string id,std::string parentid,std::string name):
            m_id(id),
            m_parentid(parentid),
            m_name(name)
    {

    }

    std::string m_id;
    std::string m_parentid;
    std::string m_name;
};

class BmBorderMgr {
public:
    BmBorderMgr();

    static BmBorderMgr* getDefault();

    //缓存目录
    void setDBFilePath(std::string filepath){m_dbFilePath=filepath;}

    //得到当前根
    std::vector<BorderData>  getRoot();

    //得到请求子的数据
    std::vector<BorderData> getChild(){return m_childData;}

    //读取缓存数据
    bool useCacheBorder(std::string ParentID, std::vector<BorderData>&  childData,bool needData);

    //网络请求数据
    void requestData(std::string ParentID,bool isdata=false);

    //removefeature
    void removeBorder();
private:


    void updataCacheData(std::string id,std::string data);


    //添加数据到Mapshape  needdata是否需要数据
    void JsonAddMapShape(std::string strJson,bool needdata=false);

    //
    void pushChildData(const Value& Val);

    //drawPolygon
    void drawPolygon(const Value& Val,osgEarth::Symbology::MultiGeometry* multiGeometry);
private:
    std::string m_dbFilePath;

    BmPolylineNode* m_polygon;

    std::vector<osg::Vec3d> _point;//计算跳转区域的

    std::vector<BorderData> m_childData;

    static BmBorderMgr* m_Border;
};

#endif /* BmBorderMgr_hpp */
