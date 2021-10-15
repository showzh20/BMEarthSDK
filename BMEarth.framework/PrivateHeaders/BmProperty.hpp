//
//  BmProperty.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/12/30.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmProperty_hpp
#define BmProperty_hpp

#include <string>

class BmProperty
{
public:
    /// 自定义元素属性(如果有相同的属性名将会覆盖上一次的属性)
    /// @param id 元素id
    /// @param proName 属性名
    /// @param proValue 属性值
    static  void setProperty(uint64_t id,std::string proName,std::string proValue);
    
    /// 获取自定义属性
    /// @param id 元素id
    /// @param proName 属性名
    static std::string  getProperty(uint64_t id,std::string proName);
    
    /// 查询是否有此属性
    /// @param id 元素id
    /// @param proName 属性名
    static bool  hasProperty(uint64_t id,std::string proName);
    
    /// 删除属性
    /// @param id 元素id
    /// @param proName 属性名
    static void removeProperty(uint64_t id,std::string proName);


    /// 清空当前元素属性
    /// @param id 元素id
    static void clearProperty(uint64_t  id);
};

#endif /* BmProperty_hpp */
