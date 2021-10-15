//
//  BMTrack.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/26.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import "BMEarthElementCoordModel.h"
#import "BMEarthElementModel.h"
#import <CoreLocation/CoreLocation.h>
class BMTrack {
public:
    
    /// 开始绘制轨迹
    static void startTrack();
    
    /// 添加轨迹点
    /// @param point 当前导航点
    /// @param time 当前点的时间(暂时没用)
    static void  addPointToTrack(CLLocation *point);
    
    /// 终止轨迹
    /// @param layer_id 轨迹所在的图层id
    /// @param isSave 是否保存轨迹
    static BMEarthElementModel* stopTrack(uint64_t layer_id,bool isSave);
    
    static time_t trackSpacingTime;//轨迹与上一次的时间间隔

};

