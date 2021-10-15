//
//  BMEarthElementStyleModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementFontStyleModel.h"
#import "BMEarthElementIconStyleModel.h"
#import "BMEarthElementAccessoryStyleModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface BMEarthElementStyleModel : NSObject<NSSecureCoding>
/// 描述
@property (nonatomic, strong) NSString * dES;
/// 轮廓线宽
@property (nonatomic, assign) NSInteger outlineWidth;
/// 轮廓颜色
@property (nonatomic, strong) NSString * outlineColor;
/// 填充颜色
@property (nonatomic, strong) NSString * fillColor;
/// 交汇处样式
@property (nonatomic, assign) NSInteger joinStyle;
/// 线样式
@property (nonatomic, assign) NSInteger lineStyle;
/// 字体样式
@property (nonatomic, strong) BMEarthElementFontStyleModel * font;
/// 图标样式
@property (nonatomic, strong) BMEarthElementIconStyleModel * icon;
/// 附件
@property (nonatomic, strong) BMEarthElementAccessoryStyleModel * accessory;

/// 贴地高度
@property (nonatomic)float groundHeight;

/// 是否贴地
@property (nonatomic)bool groundHeightIsOn;
@end

NS_ASSUME_NONNULL_END
