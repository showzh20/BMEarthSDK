//
//  BMEarhtDrawManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/6.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthDrawElementFinished.h"
#import "BMEarthInfoListener.h"
#import "BMEarthElementModel.h"
#import <BMEarth/BMEarthPublicDefine.h>
NS_ASSUME_NONNULL_BEGIN
@class BMEarthLayerModel;
@class BMEarthElementModel;
@interface BMEarthDrawManager : NSObject

/// 开始绘制元素
/// @param drawType 元素类型 0 点 1线 2矩形 3圆形 4面
/// @param parentLayerID 父图层id
+ (void)startDrawElementWithDrawType:(int)drawType parentLayerID:(long)parentLayerID;

/// 取消绘制
+ (void)cancelDrawElement;

/// 清空绘制
+ (void)clearDrawElement;

/// 撤销上一步
+ (void)revokeDrawElement;

/// 结束绘制状态
+ (void)finishDrawElement;

/// 结束当前绘制多边形
+ (void)finishCurrentElement;

/// 获取默认根图层
+ (BMEarthLayerModel *)getDefaultRootLayer;

/// 新建图层
/// @param parentLayerID 新建图层的父级ID
/// @param name 图层名称
+ (BMEarthLayerModel *)createNewLayerWithParentID:(long)parentLayerID layerName:(NSString *)name;

/// 更改图层名称
/// @param layerID 图层ID
/// @param name 新的图层名称
+ (void)changeLayerNameWithLayerID:(long)layerID name:(NSString *)name;

/// 切换测量单位
/// @param measureUnit 0.米 1.公里
+ (void)swithMeasureUnit:(NSInteger)measureUnit;

/// 单个绘制标会将要完成监听
/// @param willFinishedBlock 监听事件
+ (void)setDrawElementWillFinishedBlock:(BMEarthDrawElementFinishedBlock)willFinishedBlock;

/// 单个绘制已经结束监听
/// @param didFinishedBlock 监听事件
+ (void)setDrawElementDidFinishedBlock:(BMEarthInfoListenerReceivedInfo)didFinishedBlock;

/// 元素进入编辑状态
/// @param elementID 元素ID
+ (BOOL)editModelWithElementID:(long)elementID;

/// 元素取消编辑状态
+ (void)cancelEditState;

/// 元素完成编辑
+ (void)completeEditState;

/// 长按地图元素返回元素模型
/// @param point 屏幕位置
+ (BMEarthElementModel *_Nullable)longTapEarthInScreen:(CGPoint)point;
@end

NS_ASSUME_NONNULL_END
