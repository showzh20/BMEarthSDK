//
//  BMEarthManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2021/9/1.
//  Copyright © 2021 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BMEarth/BMEarthMapModel.h>
#import <BMEarth/BMEarthGestureListener.h>
#import <BMEarth/BMEarthLocationListener.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <BMEarth/BMEarthPublicDefine.h>
/*
 BMEarthFramework接口类
 */
@class BMEarthElementModel;
@class BMEarthElementCoordModel;
@interface BMEarthManager : NSObject

+ (instancetype _Nonnull )defaultManager;

/// 新建地球界面
/// @param vc 地球控制器
/// @param view 地球界面父级
/// @param locationIconPath 自定义指针文件夹路径（文件夹内必须包含cross.png、zhizhen.png分别代表东南西北的圆环和指向方向的指针 可空）
- (void)createEarthViewInViewController:(UIViewController *_Nonnull)vc inView:(UIView *_Nonnull)view withCustomLocationIconPath:(NSString * _Nullable )locationIconPath;

/// 设置地图源
/// @param mapPath 地图源路径
/// @param mapIcon 地图图标路径 可空
/// @param mapName 地图名称 可空
- (BOOL)setMapSource:(NSString *__nonnull)mapPath withMapIcon:(NSString * __nullable)mapIcon mapName:(NSString *__nullable)mapName;

/// 获取已载入地图源列表
- (NSArray<BMEarthMapModel *> *_Nonnull)getMapSourceInfo;

/// 更改显示地图源
/// @param model 地图源模型
- (void)changeMapSourceWithMapModel:(BMEarthMapModel *__nonnull)model;

/// 更改当前地图源比例尺
/// @param index 比例尺编号
- (void)setMapSubIndex:(int)index;

/// 更改当前地图组类型
/// @param groupType 组类型
- (void)changeMapGroupWithGroupType:(BMEarthMapTypeGroup)groupType;

/// 更改当前地图图层类型
/// @param mapType 图层类型
- (void)changeMapTypeWithMapType:(BMEarthMapType)mapType;


/// 添加离线地图至图源列表
/// @param mapPath 离线地图路径
/// @param mapName 地图名称
/// @param mapIcon 地图图标
- (void)loadOffLineMapWithMapPath:(NSString *__nonnull)mapPath mapName:(NSString *__nonnull)mapName mapIcon:(NSString *__nullable)mapIcon;

/// 删除已添加到地图源列表的离线地图
/// @param mapID 离线地图ID
- (void)removeOffLineMapWithMapID:(NSString *__nonnull)mapID;

/// 放大地球
- (void)zoomInEarth;

/// 缩小地球
- (void)zoomOutEarth;

/// 跳转至指定位置
/// @param lat 纬度
/// @param lon 经度
/// @param alt 相机高度
/// @param time 跳转动画时长
/// @param angle 相机俯仰角度 0-90
- (void)jumptoLocationWithLat:(double)lat lon:(double)lon alt:(int)alt animateTime:(CGFloat)time angle:(CGFloat)angle;

/// 跳转至指定位置
/// @param location 位置类
/// @param time 跳转动画时长
- (void)jumpToLocationWithLocation:(BMEarthElementCoordModel *_Nonnull)location animateTime:(CGFloat)time;

/// 跳转至指定区域
/// @param bounds 矩形框四点经纬度
- (void)jumpToLocationWithBounds:(CGRect)bounds;

/// 跳转至离线地图
- (void)jumpToOffLineMap;

/// 固定相机Y轴
/// @param isFix 是否固定
- (void)setFixRotateY:(BOOL)isFix;

/// 固定相机X轴
/// @param isFix 是否固定
- (void)setFixRotateX:(BOOL)isFix;

/// 是否显示建筑物轮廓
/// @param isShow 是否显示
- (void)setBuildingDisplay:(BOOL)isShow;

/// 控制相机视角
/// @param angle 旋转角度0-360
/// @param scale 距离比例0-2
- (void)controlEarthCameraWithAngle:(double)angle distanceScale:(double)scale;

/// 重置相机视角
- (void)resetCamera;

/// 视角移动
/// @param orientation 方向
- (int)startMoveCameraWithOrientation:(NSInteger)orientation;

/// 视角移动停止
- (void)stopMoveCamera;

/// 地球旋转监听
/// @param block 监听事件
- (void)earthDidRotateBlock:(BMEarthGestureListenerRotation _Nonnull)block;

/// 屏幕中心位置更新
/// @param locationBlock 更新回调
- (void)centerScreenLocationChangedWithBlock:(BMEarthLocationListenerCenterCoord _Nonnull )locationBlock;

/// 定位指针方位更新
/// @param lat 纬度
/// @param lon 经度
/// @param heading 朝向
- (void)locationChangeWithlat:(double)lat lon:(double)lon heading:(float)heading;
@end

