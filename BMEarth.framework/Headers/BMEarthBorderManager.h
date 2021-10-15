//
//  BMEarthBorderManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/9.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BMEarth/BMEarthPublicDefine.h>
@class BMEarthRegion;
@interface BMEarthBorderManager : NSObject
/// 获取边界根图层
+ (NSArray<BMEarthRegion *> *)getBorderRoot;

/// 获取边界
/// @param parentID 上级边界ID
/// @param isShow 是否显示边界
+ (NSArray<BMEarthRegion *> *)getBorderChildWithParentID:(NSString *)parentID isShow:(BOOL)isShow;

/// 移除当前显示边界
+ (void)removeDisplayBorder;
@end

