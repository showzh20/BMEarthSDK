//
//  BmParseKml.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/1/27.
//  Copyright © 2021 赵洪. All rights reserved.
//

#include <string>

#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_ext.hpp"

#include <BmEarth/Features/bmabstractfeature.h>

using namespace BmApp;
using namespace rapidxml;

class BmParseKml {
public:
    static BmParseKml* getDefault();

    BmParseKml();

    bool parsekml(std::string filepath,uint64_t pid);

private:
    BmAbstractFeature* createFolder(BmAbstractFeature * parent,std::string folderName);

    void parseFolder(xml_node<>* floder_node,BmAbstractFeature * parent);

    void parsePlacemark(xml_node<>* pm_node,BmAbstractFeature * parent);

    void parseCoods(xml_node<>* node,osgEarth::Symbology::Geometry * geom);

    //!解析样式表
    void parseStyle(xml_node<>* style_node, osgEarth::Symbology::Style& style,MapShape::ShapeType type);

    //!解析styleurl
    void parseStyUrl(xml_node<>* node);

    //！是否有足够的内存
    bool hasEnoughMemry();
    
    double getMemory();
    
    double getUseMemory();

private:
    void parsePoint(xml_node<>* p_node,xml_node<>* geomTry_node,BmAbstractFeature * parent,const std::string & description,const std::string& name);

    void parseLine(xml_node<>* p_node,xml_node<>* geomTry_node,BmAbstractFeature * parent,const std::string & description,const std::string& name);

    void parsePolygon(xml_node<>* p_node,xml_node<>* geomTry_node,BmAbstractFeature * parent,const std::string & description,const std::string& name);

private:
    std::vector<osg::Vec3d> _points;
    std::string _filePath;
    double _totalMemory;
    std::map<std::string ,osgEarth::Symbology::Style > m_stylemap;
    static BmParseKml* m_ReadWrite;
};
