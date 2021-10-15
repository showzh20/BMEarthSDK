//
//  BmEvent.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/12.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmEvent_hpp
#define BmEvent_hpp

#import "BMEarthInfoListener.h"
#import "BMEarthPublicDefine.h"

class BmEvent
{
public:
    
    /// 长按事件
    /// @param x 屏幕坐标x
    /// @param y 屏幕坐标y
    static BMEarthElementModel * longClick(double x,double y);
    
    
    /// 拖动遥感
    /// @param directionIndex 方向索引
    /// @param level 与控制器的距离比例
    static void dragrocker(int directionIndex,double level);
    
    
    /// 复位
    static void resetRocker();
    
    
    /// 开始自动漫游
    /// @param type 当前漫游方向
    static int autoViewer(int type);

    /// 停止自动漫游
    static void stopViewer();
};


#endif /* BmEvent_hpp */
