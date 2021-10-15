//
//  BMEarthMapModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/7/31.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BMEarth/BMEarthMapTypeGroupModel.h>
#import <BMEarth/BMEarthMaptypeModel.h>
NS_ASSUME_NONNULL_BEGIN



@interface BMEarthMapModel : NSObject
/// 唯一标识符
@property (nonatomic) NSString *provideID;
/// 地图名字
@property (nonatomic) NSString *mapName;
/// 地图图标
@property (nonatomic) NSString *provideIconName;
/// 是否有子图层 0表示无 1表示有
@property (nonatomic) int currentProvideType;
/// 子地图集合
@property (nonatomic) NSArray *subList;
/// 可支持地图类型集合
@property (nonatomic) NSArray <BMEarthMapTypeGroupModel* > *contentMapTypeGroups;
/// 当前选择地图类型集合
@property (nonatomic) BMEarthMapTypeGroup currentMapTypeGroup;
/// 可支持地图图层集合
@property (nonatomic) NSArray <BMEarthMapTypeModel* > *contentMapTypes;
/// 当前选择地图图层(可多选)
@property (nonatomic) BMEarthMapType currentMapType;
/// 当前选择比例尺
@property (nonatomic) int currentSelectSubIndex;
//权重因子
@property (nonatomic) int weightFactor;
@end

NS_ASSUME_NONNULL_END
