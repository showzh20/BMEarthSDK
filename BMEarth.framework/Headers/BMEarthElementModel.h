//
//  BMEarthElementModel.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementStyleModel.h"
#import "BMEarthElementCoordModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(int, BMEarthElementModelNodeType) {
    BMEarthElementModelNodeTypeFolder,//自定义图层
    BMEarthElementModelNodeTypePoint,//点元素
    BMEarthElementModelNodeTypeLine,//线元素
    BMEarthElementModelNodeTypePolygon,//面元素
    BMEarthElementModelNodeTypeRect,//矩形元素
    BMEarthElementModelNodeTypeCycle,//圆形元素
    BMEarthElementModelNodeTypeEllipse,//椭圆元素
    BMEarthElementModelNodeTypeSector,//扇形元素
    BMEarthElementModelNodeTypeMultiGeometry,//多图形叠加元素
    BMEarthElementModelNodeTypeTrack = 1003,//轨迹元素
    BMEarthElementModelNodeTypeUserPen = 1000,//手绘元素
    BMEarthElementModelNodeTypeMeasureArea = 1001,//测量面积
    BMEarthElementModelNodeTypeMeasureDistance = 1002,//测量距离
};

//typedef NS_ENUM(NSUInteger, BMEarthGroundHeightType) {
//    BMEarthGroundHeightTypeDefault = 0,//默认 贴地
//    BMEarthGroundHeightTypeAbsolute,//绝对高度
//    BMEarthGroundHeightTypeRelative,//相对高度
//};

@interface BMEarthElementModel : NSObject
/// 唯一标识ID
@property (nonatomic)long keyID;
/// 父ID
@property (nonatomic)long parentID;
/// 名字
@property (nonatomic)NSString *name;

/// 节点类型
@property (nonatomic)BMEarthElementModelNodeType nodeType;

/// 坐标集合
@property (nonatomic)NSMutableArray<BMEarthElementCoordModel *> *coordsList;

/// 样式
@property (nonatomic)BMEarthElementStyleModel *style;

/// 是否显示
@property (nonatomic)BOOL isHidden;

/// 表单属性
@property (nonatomic)NSString *formPropertyString;

@end

NS_ASSUME_NONNULL_END
