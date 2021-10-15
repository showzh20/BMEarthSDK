//
//  BMEarthMaptypeModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/7/31.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(int, BMEarthMapType) {
    MapTypeDefault = 0,
    MapTypeMap = 1 << 0, //电子地图
    MapTypeLabel = 1 << 1, //电子地图的标注层
    MapTypeSatellite = 1 << 2, //卫图
    MapTypeStreet = 1 << 3, //卫图的街道层
    MapTypeTerrain = 1 << 4, //地形图
    MapTypeTStreet = 1 << 5, //地形图的标注层
    MapTypeElevation = 1 << 6, //高程
};


NS_ASSUME_NONNULL_BEGIN

@interface BMEarthMapTypeModel : NSObject
/// 地图图层类型
@property (nonatomic) BMEarthMapType mapType;
/// 地图图层名称
@property (nonatomic,readonly) NSString *mapTypeName;

/// 是否选择该图层
@property (nonatomic) BOOL selected;
@end

NS_ASSUME_NONNULL_END
