//
//  BmTool.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/12/30.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmTool_hpp
#define BmTool_hpp

#include <string>
#include <vector>
#include <osgEarthSymbology/Color>
class BmTool {
public:
    BmTool();

    static std::vector<std::string> Bmsplite(const std::string & str,const std::string & delim);

    //移位
    static std::string intToByte(int i);

    static int bytetoInt(const char* bytes);

    static double bytetoDouble(const char* bytes);

    static std::string doubleToByte(double);

    static osgEarth::Symbology::Color BmcolorToRGBA(std::string colorstr);

    static std::string RGBAToBmColor(osgEarth::Symbology::Color osgColor);
    
    //通过经纬度获取真实高程
    static double getHeight(osg::Vec3d vec);
    
    //用zlib解压数据
     static std::string unCompress(std::string strCompress);
    
    //数据加压
    static std::string Comptrss(std::string strUnCompress);

     static void jumpToBmvArea(std::vector<osg::Vec3d> points);
};

#endif /* BmTool_hpp */
