//
//  BMEarthElementIconStyleModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BMEarthElementIconAlign) {
    BMEarthElementIconAlignLeftTop,//左上
    BMEarthElementIconAlignLeftCenter,//左中
    BMEarthElementIconAlignLeftBottom,//左下
    BMEarthElementIconAlignCenterTop,//中上
    BMEarthElementIconAlignCenterCenter,//中心
    BMEarthElementIconAlignCenterBottom,//中下
    BMEarthElementIconAlignRightTop,//右上
    BMEarthElementIconAlignRgihtCenter,//右中
    BMEarthElementIconAlignRightBottom,//右下
};

typedef NS_ENUM(NSUInteger, BMEarthElementIconType) {
    BMEarthElementIconTypeLocal,//本地图标
    BMEarthElementIconTypeDIY//自定义图标
};
@interface BMEarthElementIconStyleModel : NSObject<NSSecureCoding>
/// 是否显示
@property (nonatomic, assign) BOOL shown;
/// 对齐方式
@property (nonatomic, assign) BMEarthElementIconAlign align;
/// 图标大小
@property (nonatomic, assign) float size;
/// 图标旋转
@property (nonatomic, assign) float heading;
/// 图标类型
@property (nonatomic, assign) BMEarthElementIconType iconType;
/// 图标文件路径
@property (nonatomic, strong) NSString * iconPath;
/// 图标名字
@property (nonatomic, strong) NSString * iconName;

/// 图标内容
@property (nonatomic) NSData * iconContent;

@end

NS_ASSUME_NONNULL_END
