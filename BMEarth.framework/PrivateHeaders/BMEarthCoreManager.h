//
//  BMEarthCoreManager.h
//  BigeEarth
//
//  Created by 赵洪 on 2020/7/28.
//  Copyright © 2020 赵洪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "BMEarthMapModel.h"
#import "BMEarthLayerModel.h"
#import "BMEarthInfoListener.h"
#import "BMEarthLocationListener.h"
#import "BMEarthMapHistoryListener.h"
#import "BMEarthLoadFileListener.h"
#import "BMEarthDrawingStateListener.h"
#import "BMEarthTrackRecordListener.h"
#import "BMEarthDrawElementFinished.h"
#import "BMEarthRegion.h"
#import "BMEarthGestureListener.h"
#import "BMEarthMapDownloadInfo.h"
#import "BMEarthLoadProgressListener.h"
NS_ASSUME_NONNULL_BEGIN

@interface BMEarthCoreManager : NSObject

+ (instancetype)defaultManager;

/// 新建地球界面
/// @param vc 地球控制器
/// @param view 地球界面父级
- (void)createEarthViewInViewController:(UIViewController *)vc inView:(UIView *)view;

/// 放大地球
- (void)zoomInEarth;

/// 缩小地球
- (void)zoomOutEarth;

/// 获取支持地图列表
- (NSArray<BMEarthMapModel *> *)getMapSourceInfo;

/// 获取默认（已选择）地图信息
- (BMEarthMapModel *)defaultMapSourceInfo;

/// 获取系统根图层
- (BMEarthLayerModel *)defaultRootLayer;

/// 获取当前地图图层
- (BMEarthLayerModel *)defaultMapLayer;

/// 获取我的搜索图层
- (BMEarthLayerModel *)searchMapLayer;

/// 获取自定义跟图层
- (BMEarthLayerModel *)customRootLayer;

/// 新建默认layer层
/// @param layer 图层
- (void)setDefaultMapLayer:(BMEarthLayerModel *)layer;

/// 新建图层
/// @param parentID 父图层
/// @param name 图层名
- (BMEarthLayerModel *)createNewLayerWithParentID:(long)parentID layerName:(NSString *)name;

/// 新建ROOT图层
/// @param name 图层名
- (BMEarthLayerModel *)createNewRootLayerWithLayerName:(NSString *)name;

/// 修改图层名称
/// @param layerID layerID
- (void)changeLayerNameWithLayerID:(long)layerID name:(NSString *)name;

/// 删除图层
/// @param layerID 图层ID
- (void)removeCreatedLayerWithLayerID:(long)layerID;

/// 更改地图源
/// @param model 地图源模型
- (void)changeMapSourceWithMapModel:(BMEarthMapModel *)model;

/// 更改地图源比例尺
/// @param index 比例尺编号
- (void)setMapSubIndex:(int)index;

/// 更改地图组类型
/// @param groupType 组类型
- (void)changeMapGroupWithGroupType:(BMEarthMapTypeGroup)groupType;

/// 更改地图图层类型
/// @param mapType 图层类型
- (void)changeMapTypeWithMapType:(BMEarthMapType)mapType;

/// 开始绘制元素
/// @param drawType 元素类型 0 点 1线 2矩形 3圆形 4面
/// @param parentID 父图层id
- (void)startDrawElementWithDrawType:(int)drawType parentLayerID:(long)parentID;

/// 取消绘制
- (void)cancelDrawElement;

/// 清空绘制
- (void)clearDrawElement;

/// 撤销上一步
- (void)revokeDrawElement;

/// 完成绘制
- (void)finishDrawElement;

/// 注册通信 当有新内容时通过通信返回内容
/// @param key 标识符
/// @param info 通信通道
- (void)registerElementInfoWithKey:(NSString *)key received:(BMEarthInfoListenerReceivedInfo)info;

/// 获取所有根图层
- (NSArray<BMEarthElementModel *> *)getAllRootLayers;

/// 跳转至指定经纬度
/// @param lat 纬度
/// @param lon 经度
/// @param alt 视觉高度
/// @Param time 动画时间
/// @param angle 俯仰角度
- (void)jumptoLocationWithLat:(double)lat lon:(double)lon alt:(int)alt animateTime:(CGFloat)time angle:(CGFloat)angle;
- (void)jumptoLocationWithLat:(double)lat lon:(double)lon alt:(int)alt animateTime:(CGFloat)time;

- (void)jumpToLocationWithLocation:(BMEarthElementCoordModel *)location animateTime:(CGFloat)time;

- (void)jumpToLocationWithBounds:(CGRect)bounds;

/// 获取元素样式属性
/// @param elementID 元素id
- (BMEarthElementModel *)getElementAttributeWithID:(long)elementID;

/// 获取元素坐标
/// @param elementID 元素ID
- (NSMutableArray<BMEarthElementCoordModel *> *)getCoordsWithElementID:(long)elementID;

/// 设置元素样式属性
/// @param model 元素模型
- (void)setElementStyleWithElememtModel:(BMEarthElementModel *)model;

/// 删除元素
/// @param elementID 元素ID
- (void)removeElementWithElementId:(long)elementID;

/// 控制相机视角
/// @param angle 旋转角度
/// @param scale 距离比例
- (void)controlEarthCameraWithAngle:(double)angle distanceScale:(double)scale;

/// 重置相机视角
- (void)resetCamera;

/// 定位指针方位更新
/// @param lat 纬度
/// @param lon 经度
/// @param heading 朝向
- (void)locationChangeWithlat:(double)lat lon:(double)lon heading:(float)heading;

/// 屏幕中心位置更新
/// @param locationBlock 更新回调
- (void)centerScreenLocationChangedWithBlock:(BMEarthLocationListenerCenterCoord)locationBlock;

/// 元素进入编辑状态
/// @param elementID 元素ID
- (BOOL)editModelWithElementID:(long)elementID;

/// 元素取消编辑状态
- (void)cancelEditState;

/// 元素完成编辑
- (void)completeEditState;

/// 线转面
/// @param elementID 元素ID
- (BMEarthElementModel *)transformLineToPolygonWithElementID:(long)elementID;

/// 通过模型绘制元素
/// @param model 模型
- (void)drawElementWithModel:(BMEarthElementModel *)model;

- (void)drawElementsWithModels:(NSMutableArray <BMEarthElementModel *>*)models complete:(void (^ __nullable)(void))complete;

/// 长按地图元素返回元素模型
/// @param point 屏幕位置
- (BMEarthElementModel *)longTapEarthInScreen:(CGPoint)point;

/// 设置绘制状态下的parentid
/// @param parentID 图层id
- (void)setElementParentLayerInDrawState:(long)parentID;

/// 移动元素至新的图层
/// @param elemntID 元素ID
/// @param parentID 父ID
/// @param index 索引
- (void)moveElement:(long)elemntID toNewParent:(long)parentID index:(NSInteger)index;

/// 开始记录轨迹
- (void)startRecordTrack;

/// 添加轨迹坐标
/// @param location 定位点
- (void)addLocationToTrack:(CLLocation *)location;
/// 结束记录轨迹
/// @param layerID 保存至图层ID
/// @param isSave 是否保存
- (BMEarthElementModel *)finishRecordTrackWithLayerID:(long)layerID isSave:(bool)isSave;

/// 加载BMV文件
/// @param path 文件路径
/// @param layerID 图层ID
- (BOOL)loadBMVFileAtPath:(NSString *)path inLayer:(long)layerID;

/// 加载文件成功回调
/// @param loadBlock 回调
- (void)setInputFileBlock:(BMEarthLoadFileListenerLoadedSuccess)loadBlock;

- (void)setInputFileCountBlock:(BMEarthLoadProgressListenerReceiveContentCount)countBlock;
- (void)setInputFileLoadingBlock:(BMEarthLoadProgressListenerDidLoadContent)loadBlock;
- (void)setInputFileEndBlock:(BMEarthLoadProgressListenerEndLoading)endBlock;
- (BMEarthElementModel *)getInputFileRootModel;
/// 获取父节点下所有子节点
/// @param parentID 父节点ID
- (NSMutableArray<BMEarthElementModel *> *)getSubContentsWithParentID:(long)parentID;

/// 保存元素至本地
/// @param keyID 元素ID
/// @param path 本地路径
- (void)saveContentWithKeyID:(long)keyID savePath:(NSString *)path;

/// 历史影像更新回调
/// @param block 回调
- (void)updateMapHistoryContentWithBlock:(BMEarthMapHistoryListenerLoadedSuccess)block;

/// 获取历史影像对应的时间
/// @param interval 时间戳
- (NSString *)getHistoryMapTimeWithInterval:(int)interval;

/// 更改历史影像
/// @param interval 时间戳
- (void)changeHistoryMapWithInterval:(int)interval;

/// 绘制回调
/// @param drawingBlock 回调
- (void)drawingPointBlock:(BMEarthDrawingStateListenerAddNewPoint)drawingBlock;

/// 视角移动
/// @param orientation 方向
- (int)startMoveCameraWithOrientation:(NSInteger)orientation;

/// 视角移动停止
- (void)stopMoveCamera;

/// 设置元素可视性
/// @param elementID 元素ID
/// @param visible 可见性
- (void)setElementVisibleWithElementID:(long)elementID visibility:(BOOL)visible;

/// 设置元素地理位置
/// @param elementID 元素ID
/// @param location 地理位置
- (void)setElementLocationWithElementID:(long)elementID locationStr:(NSString *)location;

/// 获取元素地理位置
/// @param elementID 元素ID
- (NSString *)getElementLocationWithElementID:(long)elementID;

/// 设置建筑物轮廓可视性
/// @param isShow 可视性
- (void)setBuildingDisplay:(BOOL)isShow;

/// 设置元素属性对应的值
/// @param propertyName 属性名
/// @param value 属性值
/// @param elementID 元素ID
- (void)setElementPropertyWithPropertyName:(NSString *)propertyName propertyValue:(NSString *)value elementID:(long)elementID;
/// 清空元素属性对应的值
/// @param propertyName 属性名
/// @param elementID 元素ID
- (void)resetElementPropertyWithPropertyName:(NSString *)propertyName elementID:(long)elementID;

/// 获取元素属性对应的值
/// @param propertyName 属性名
/// @param elementID 元素ID
- (NSString *)getElementPropertyStringWithPropertyName:(NSString *)propertyName elementID:(long)elementID;

/// 获取边界根图层
- (NSArray<BMEarthRegion *> *)getBorderRoot;

/// 获取边界
/// @param parentID 上级边界ID
/// @param isShow 是否显示边界
- (NSArray<BMEarthRegion *> *)getBorderChildWithParentID:(NSString *)parentID isShow:(BOOL)isShow;

/// 移除当前显示边界
- (void)removeDisplayBorder;

/// 轨迹记录回调
/// @param block 回调
- (void)trackRecordBlock:(BMEarthTrackRecordListenerRecordLocation)block;

/// 地球旋转监听
/// @param block 监听事件
- (void)earthDidRotateBlock:(BMEarthGestureListenerRotation)block;

/// 切换测量单位
/// @param measureUnit 0.米 1.公里
- (void)swithMeasureUnit:(NSInteger)measureUnit;

/// 获取周长
/// @param coordList 坐标集
/// @param nodeType 标绘物类型
- (double)getPerimeterWithCoordList:(NSArray *)coordList nodeType:(BMEarthElementModelNodeType)nodeType;

/// 获取面积
/// @param coordList 坐标集
/// @param nodeType 标绘物类型
- (double)getAreaWithCoordList:(NSArray *)coordList nodeType:(BMEarthElementModelNodeType)nodeType;

/// 保存文件
/// @param models 保存内容
/// @param path 路径
- (void)saveContentsWithModels:(NSArray *)models savePath:(NSString *)path;

/// 绘制标会完成监听
/// @param finishedBlock 监听事件
- (void)setDrawElementFinishedBlock:(BMEarthDrawElementFinishedBlock)finishedBlock;

/// 设置位置罗盘是否显示
/// @param isShow 是否显示
- (void)setCompassShow:(BOOL)isShow;

/// 获取是否正在编辑状态
- (bool)getEdittingState;

/// 暂停刷帧
- (void)pauseUpdate;
/// 继续刷帧
- (void)continueUpdate;

/// 固定俯仰
/// @param isFix 是否固定
- (void)setFixRotateY:(BOOL)isFix;

/// 固定旋转
/// @param isFix 是否旋转
- (void)setFixRotateX:(BOOL)isFix;

- (BMEarthMapDownloadInfo *)getMapDowloadInfoWithX:(double)X Y:(double)Y Z:(double)Z mapType:(BMEarthMapType)mapType;

- (void)loadOffLineMapWithMapPath:(NSString *)mapPath mapName:(NSString *)mapName mapIcon:(NSString *)mapIcon;

- (void)removeMapWithMapID:(NSString *)mapID;

- (void)jumpToOffLineMap;

- (void)finishCurrentElement;

//成功返回0 -1 表示无法访问的地址 -2表示没有找到合适的在线地图
-(int)setMapSource:(NSString *)mapPath mapName:(NSString *__nullable)mapName mapIcon:(NSString *__nullable)mapIcon;
@end

NS_ASSUME_NONNULL_END
