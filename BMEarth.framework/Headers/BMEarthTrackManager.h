//
//  BMEarthTrackManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/9.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthTrackRecordListener.h"
#import <BMEarth/BMEarthPublicDefine.h>
@class BMEarthElementModel;
@interface BMEarthTrackManager : NSObject
/// 开始记录轨迹
+ (void)startRecordTrack;

/// 添加轨迹坐标
/// @param location 定位点
+ (void)addLocationToTrack:(CLLocation *)location;

/// 结束记录轨迹
/// @param layerID 保存至图层ID
/// @param isSave 是否保存
+ (BMEarthElementModel *)finishRecordTrackWithLayerID:(long)layerID isSave:(bool)isSave;

/// 轨迹记录回调
/// @param block 回调
+ (void)trackRecordDidRecordPointBlock:(BMEarthTrackRecordListenerRecordLocation)block;

@end

