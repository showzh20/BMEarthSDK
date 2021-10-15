//
//  BMEarthMapTypeGroupModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/7/31.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(int, BMEarthMapTypeGroup) {
    MapTypeGroupDefault = 0,
    MapTypeGroupMap = 1<<0, //电子地图
    MapTypeGroupSatellite = 1<<1, //卫星影像
    MapTypeGroupTerrain = 1<<2 //地形
};
NS_ASSUME_NONNULL_BEGIN

@interface BMEarthMapTypeGroupModel : NSObject
/// 地图类型
@property (nonatomic) BMEarthMapTypeGroup mapTypeGroup;
/// 地图类型名称
@property (nonatomic,readonly) NSString *mapTypeGroupName;
@end

NS_ASSUME_NONNULL_END
