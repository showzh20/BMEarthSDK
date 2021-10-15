//
//  BmReadBMV.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/9/14.
//  Copyright © 2020 赵洪. All rights reserved.
//
#pragma once
#include <string>
#include "sqlite3.h"
#include <BmEarth/MapData/mapshape.h>
#include <BmEarth/Features/bmabstractfeature.h>

using namespace::BmApp;


struct featuresRelation
{
    int _version;
    std::string _property;
    std::string _otherData;
    std::string _attrTable;
    BmAbstractFeature* _parent;
    BmAbstractFeature* _child;
};


class BmReadBMV {
public:
    static BmReadBMV* getDefault();

    BmReadBMV();

    virtual bool read(std::string sFilePath,uint64_t layerId);

protected:

    //解压后的字符串解析(序列化)
    void serializationTogeomtry( std::string& strGeomtry,MapShape* aShape);

    //递归遍历
    void showMapShapeAndFeature(sqlite3*db,int id,BmAbstractFeature* parentFeature,int version);

    void createFeature(int shapeType,std::string data,BmAbstractFeature* parent,BmAbstractFeature*& currentFeature);

    //解析style
    void parserproperty(const std::string& proDataStr,BmAbstractFeature* feature);

    //loadotherdata
    void loadOtherData(const std::string& strOtherdata,BmAbstractFeature* feature);

    //解析属性表
    void parseAttrTable(const std::string& proDataStr,BmAbstractFeature* feature);


    //得到文件的文件名
    std::string getFileName(std::string& strfilename);


   void jumpToBmvArea(const std::vector<osg::Vec3d>& points);

private:
    //设置默认图标
    void setBmIcon(BmAbstractFeature* feature);

    //path:存如iamge的文件夹 ,bmv文件夹
    void makdirAndWriteImage(const std::string& path);

    //将bmv中的附件data与resouce表中的数据对应
    void AnnexDataToImage(BmAbstractFeature* feature,const std::string& imageIndex);

    //回调解析是否完成
    void callBackCompleteParsing(bool isScuess);

    void callBackBMVCount(int counts);
    
    void callBackLoading();

private:
    friend class BmReadThread;
    std::string m_filePath;
    std::vector<osg::Vec3d> m_Points;
    std::string m_BmvReSourceFile;
    std::vector<featuresRelation> _featureLists;
    uint64_t _rootKey;//当前创建的根的id 回调上层 不然上层遍历整个图层
    static BmReadBMV* m_ReadWrite;
};



