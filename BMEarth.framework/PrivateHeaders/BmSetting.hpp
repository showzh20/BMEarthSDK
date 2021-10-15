//
//  BmSetting.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/3/10.
//  Copyright © 2021 赵洪. All rights reserved.
//

#ifndef BmSetting_hpp
#define BmSetting_hpp

#include <string>
#include <BmEarth/Features/bmabstractfeature.h>
using namespace BmApp;

class BmSetting {
public:
    static BmSetting* getDefault();
    BmSetting();
    
    //!底层调用
    void setSetting(BmAbstractFeature* feature);
    

public:
    //!point
    std::string pointTextFillColor;
    std::string pointTextHaloColor;
    int TextAlign;
    float TextSize;
    bool isShowText;
    std::string IconPath;
    std::string image;//二进制文件
    int iconAlign;
    float  iconScale;
    bool isShowIcon;
    bool isCustomPath;

    //!line
    std::string lineColor;
    float lineWidth;

    //!pen
    std::string penColor;
    float penWidth;


    //!measuring
    std::string measurColor;
    float measurWidth;


    //!ploygon
    std::string polygonLineColor;
    std::string polygonFillColor;
    float polygonWidth;

    //!sector
    std::string sectorLineColor;
    std::string sectorFillColor;
    float sectorWidth;

    //!rect
    std::string rectLineColor;
    std::string rectFillColor;
    float rectwidth;

    //! ellipse
    std::string ellipseLineColor;
    std::string ellipseFillColor;
    float ellipseWidth;

    //! circle
    std::string circleLineColor;
    std::string circleFillColor;
    float circleWidth;
    
    //!Area
    std::string areaLineColor;
    std::string areaFillColor;
    float areaWidth;
    
    //!track
    std::string trackColor;
    float trackWidth;



private:
    static BmSetting* _setting;

};

#endif /* BmSetting_hpp */
