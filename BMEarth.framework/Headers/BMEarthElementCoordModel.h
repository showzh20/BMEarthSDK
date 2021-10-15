//
//  BMEarthElementCoordModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/11.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BMEarthElementCoordModel : NSObject<NSSecureCoding>
@property (nonatomic)double latitude;
@property (nonatomic)double longitude;
@property (nonatomic)double altitude;

/// 初始化
/// @param latitude 纬度
/// @param longitude 经度
+ (instancetype)modelWithLatitude:(double)latitude Longitude:(double)longitude;
/// 初始化
/// @param latitude 纬度
/// @param longitude 经度
/// @param altitude 高程
+ (instancetype)modelWithLatitude:(double)latitude Longitude:(double)longitude Altitude:(double)altitude;
@end

NS_ASSUME_NONNULL_END
