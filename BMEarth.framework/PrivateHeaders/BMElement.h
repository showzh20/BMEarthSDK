//
//  BMElement.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/11.
//  Copyright © 2020 赵洪. All rights reserved.
//
#import "BMEarthElementModel.h"
#include <BmEarth/Features/bmabstractfeature.h>
using namespace BmApp;

class BMElement
{
public:
    
    /// 设置当前绘图的父id
    static void setElementParentLayer(uint64_t id);
    
    
    /// 改变当前元素的父id
    /// @param parent_id id
    /// @param parent_id 父id
    /// @param index 当前元素索引
    static void changeElementTreeLayer(uint64_t id,uint64_t parent_id,int index);
    
    /// 通过id获取属性
    static BMEarthElementModel* getElementAttribute(uint64_t id);
    
    ///设置属性
    static void setElementAttribute(BMEarthElementModel* model);
    
    ///删除元素或图层
    static void removeElement(uint64_t id);
    
    /// 获取当前对象坐标点数组
    static NSMutableArray<BMEarthElementCoordModel *>* getElementGPS(uint64_t id);
    
    /// 绘制点、线、面(通过制定位置绘制)，返回id
    /// @param model 当前对象绘制参数
    /// @param isdeclutter 是否被聚合
    static uint64_t drawElement(BMEarthElementModel* model,bool isdeclutter=true);
    
    /// 线转化成面
    static BMEarthElementModel* lineToPlan(uint64_t id);
    
    /// 返回当前节点的子节点
    /// @param parentID 当前节点id
    static NSMutableArray<BMEarthElementModel *>* getElementChildren(uint64_t parentID);
    
    /// 设置元素是否可见
    /// @param isShow  状态
    static void setElementVisble(uint64_t id,bool isShow);
    
    
    /// 设置元素位置属性
    /// @param strLoc 位置
    static void setElementLocation(uint64_t id,NSString* strLoc);
    
    
    /// 获取元素属性的位置
    static NSString* getElementLocation(uint64_t id);
    
    static std::vector<uint64_t> drawElements(std::vector<BMEarthElementModel*> Vmodel);
    
    
  
private:
    static void getPublicAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void getPointAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void getLineAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void getpolygonAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    
private:
    static void setPublicAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void setPointAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void setLineAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    static void setPolygonAttribute(BMEarthElementModel* model,BmAbstractFeature * feature);
    
    
private:
    friend class RecoverEvent;
    
    static void setElementData(BMEarthElementModel* model,BmAbstractFeature * feature);
    
};
