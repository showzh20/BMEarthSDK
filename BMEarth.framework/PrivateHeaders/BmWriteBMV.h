//
//  BmWriteBMV.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/9/16.
//  Copyright © 2020 赵洪. All rights reserved.
//

#include <BmEarth/MapData/mapshape.h>
#include <BmEarth/Features/bmabstractfeature.h>
#include <sqlite3.h>

using namespace BmApp;

class BmWriteBMV {
public:
    static BmWriteBMV* getDefault();

    BmWriteBMV();

    virtual void write(std::string sFilePath,uint64_t layerId);

protected:
    //递归得到childMapShape
    void recursionMapShape(BmAbstractFeature *parentFeature,int id,int parentid,sqlite3 *db);

    //保存数据到db中 返回异常索引
    int  saveDataInDB(BmAbstractFeature *parentFeature,int id,int parentid,sqlite3 *db);

    //保存属性到db中
    std::string SavePropertyData(BmAbstractFeature *parentFeature);

    //保存二进制数据
    std::string SaveCompressData(osg::ref_ptr<MapShape> parentMapShape);

    //保存图片流
    std::string SaveImageStream(BmAbstractFeature *feature);

    //保存Resource到文件中
    void SaveResourceData(BmAbstractFeature *feature,sqlite3 *db);

    //BMV和RESOURCE数据库关联
    std::string findResource(BmAbstractFeature *feature,sqlite3 *db);
    
    
    //保存属性表数据
    std::string SaveAttributesTable(BmAbstractFeature *feature);
private:
    //文件转换流
    std::string filesTostream(std::string path);


private:
    int m_id;
    int m_assid;//附件id
    static BmWriteBMV* m_Wirte;
};
