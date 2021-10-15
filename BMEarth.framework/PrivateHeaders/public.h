//
//  public.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/7/30.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef public_h
#define public_h

#include <stdio.h>
#include <string>
#include <osgViewer/api/IOS/GraphicsWindowIOS>

struct BmInitParam{
     int width;
     int height;
     std::string mapId;
     float winScale;
     int winDPI;
     float topLayerAlpha;
     float initPosLatitude;
     float initPosLongitude;
     std::string fontPath;
     std::string cachePath1;
     std::string cachePath2;
     std::string cachePath3;
     std::string cachePath4;
     std::string cachePath5;
     bool isEnableEle;
     UIView* window_or_view ;
     UIViewController* parentController;
     std::string defaultIconPath;
     std::string customIconPath;
     std::string defaultKey;//默认图标名
     std::string loctionIconPath;//全路径
};

struct MapTypeGroup{
    int iSupportMapTypeGroup;
    int iCurrentMapTypeGroup;
    int iSupportMapTypes;
    int iScurrentmapTypes;
    int iCurrentSunIndex;
};

struct Providers
{
    std::string provideID;
    std::string mapName;
    int provideType; //是否有子图层 0表示无 1表示有
    std::string provideIconName;
    std::vector<std::string> subList;
};

#endif /* public_h */
