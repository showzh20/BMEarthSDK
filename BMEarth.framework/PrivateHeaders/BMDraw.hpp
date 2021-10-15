//
//  BMDraw.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/7/31.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BMDraw_hpp
#define BMDraw_hpp
#include <string>
class BMDraw{
public:
    
    /// 开始标绘
    /// @param drawType 标绘类型(点、线、面)
    /// @param parentID  当前对象父节点
    static void startDrawElement(int drawType,uint64_t parentID);
    
    
    /// 取消标绘
    static void cancelDrawElement();
    
    
    ///清空标绘
    static void clearDrawElement();
    
    
    /// 撤销
    static void revokeDrawElement();
    
    
    /// 完成标绘
    static void stopDrawElement();
    
    ///完成当前标绘(点击确定后调用的接口表示进入只可编辑状态)
    static void finshCurrent();
    
    
    /// 返回根的图层id
    /// @param name 设置根图层name可设置可不设置
    static uint64_t getRootLayerID(std::string name);
    
    
    /// 创建图层返回id
    /// @param parentID 父ID
    /// @param layerName 图层名
    static uint64_t createrlayer(uint64_t parentID,std::string layerName);
    
    
    /// 修改图层名
    /// @param id id 图层id
    /// @param name name 图层名
    static void changeNameOfLayer(uint64_t id,std::string name);
    
    
    //!当改变设置的时候,默认feature已经创建通过adpter重新设置一次当前new的对象
    //!否则当先设置环境对其无效
    static void startingSetting();
};

#endif /* BMDraw_hpp */
