//
//  BMEarthElementManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/9.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMEarthElementModel.h"
#import "BMEarthLoadProgressListener.h"
#import "BMEarthLoadFileListener.h"
#import <BMEarth/BMEarthPublicDefine.h>
@interface BMEarthElementManager : NSObject

/// 加载文件 目前仅支持.bmv .kml .kmz
/// @param path 文件路径
/// @param layerID 图层ID
+ (BOOL)loadElementFileAtPath:(NSString *)path inLayer:(long)layerID;

/// KML加载文件成功回调
/// @param loadBlock 回调
+ (void)setKMLFinishedInputFileBlock:(BMEarthLoadFileListenerLoadedSuccess)loadBlock;

/// bmv文件加载回调
/// @param countBlock bmv文件元素个数回调
+ (void)setBMVInputFileCountBlock:(BMEarthLoadProgressListenerReceiveContentCount)countBlock;

/// bmv文件加载中回调
/// @param loadBlock bmv内元素加载成功回调
+ (void)setBMVInputFileLoadingBlock:(BMEarthLoadProgressListenerDidLoadContent)loadBlock;

/// bmv文件加载完成回到
/// @param endBlock bmv内元素全部加载完成回调
+ (void)setBMVInputFileEndBlock:(BMEarthLoadProgressListenerEndLoading)endBlock;

/// 获取载入bmv文件对应的根模型
+ (BMEarthElementModel *)getInputBMVFileRootModel;

/// 保存文件
/// @param models 保存内容
/// @param path 路径
+ (BOOL)saveContentsWithModels:(NSArray<BMEarthElementModel *> *)models savePath:(NSString *)path;

/// 设置元素属性对应的值
/// @param propertyName 属性名
/// @param value 属性值
/// @param elementID 元素ID
+ (void)setElementPropertyWithPropertyName:(NSString *)propertyName propertyValue:(NSString *)value elementID:(long)elementID;

/// 清空元素属性对应的值
/// @param propertyName 属性名
/// @param elementID 元素ID
+ (void)resetElementPropertyWithPropertyName:(NSString *)propertyName elementID:(long)elementID;

/// 获取元素属性对应的值
/// @param propertyName 属性名
/// @param elementID 元素ID
+ (NSString *)getElementPropertyStringWithPropertyName:(NSString *)propertyName elementID:(long)elementID;

/// 获取元素样式属性
/// @param elementID 元素id
+ (BMEarthElementModel *)getElementAttributeWithID:(long)elementID;

/// 获取元素坐标
/// @param elementID 元素ID
+ (NSMutableArray<BMEarthElementCoordModel *> *)getCoordsWithElementID:(long)elementID;

/// 设置元素样式属性
/// @param model 元素模型
+ (void)setElementStyleWithElememtModel:(BMEarthElementModel *)model;

/// 删除元素
/// @param elementID 元素ID
+ (void)removeElementWithElementId:(long)elementID;

/// 获取父节点下所有子节点
/// @param parentID 父节点ID
+ (NSMutableArray<BMEarthElementModel *> *)getSubContentsWithParentID:(long)parentID;

/// 获取周长
/// @param coordList 坐标集
/// @param nodeType 标绘物类型
+ (double)getPerimeterWithCoordList:(NSArray *)coordList nodeType:(BMEarthElementModelNodeType)nodeType;

/// 获取面积
/// @param coordList 坐标集
/// @param nodeType 标绘物类型
+ (double)getAreaWithCoordList:(NSArray *)coordList nodeType:(BMEarthElementModelNodeType)nodeType;

@end

