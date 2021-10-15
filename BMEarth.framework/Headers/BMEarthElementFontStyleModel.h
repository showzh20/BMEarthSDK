//
//  BMEarthElementFontStyleModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BMEarthElementTextAlign) {
    BMEarthElementTextAlignLeftTop,//左上
    BMEarthElementTextAlignLeftCenter,//左中
    BMEarthElementTextAlignLeftBottom,//左下
    BMEarthElementTextAlignCenterTop,//中上
    BMEarthElementTextAlignCenterCenter,//中心
    BMEarthElementTextAlignCenterBottom,//中下
    BMEarthElementTextAlignRightTop,//右上
    BMEarthElementTextAlignRightCenter,//右中
    BMEarthElementTextAlignRightBottom,//右下
};

@interface BMEarthElementFontStyleModel : NSObject<NSSecureCoding>
/// 是否显示
@property (nonatomic, assign) BOOL shown;
/// 对齐方式
@property (nonatomic, assign) BMEarthElementTextAlign align;
/// 字体大小
@property (nonatomic, assign) NSUInteger size;
/// 字体旋转角度
@property (nonatomic, assign) float heading;
/// 是否是粗体
@property (nonatomic, assign) BOOL bold;
/// 是否倾斜
@property (nonatomic, assign) BOOL italic;
/// 描边颜色
@property (nonatomic, strong) NSString * penColor;
/// 填充颜色
@property (nonatomic, strong) NSString * fillColor;
@end

NS_ASSUME_NONNULL_END
