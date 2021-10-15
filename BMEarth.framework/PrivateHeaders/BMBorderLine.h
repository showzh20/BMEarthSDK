//
//  BMBorderLine.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2021/1/18.
//  Copyright © 2021 赵洪. All rights reserved.
//

#include <vector>
#include "BmBorderMgr.hpp"

class BMBorderLine {
public:
    /// 得到当前根
    static  std::vector<BorderData> getRootBorder();
    
    /// 获取子列表或者显示当前选中
    /// @param parentID  父id
    /// @param isrequstDada true表示绘制当前选中false表示拉去当前的子列表
    static  std::vector<BorderData> getChildBorder(std::string parentID,bool isrequstDada=false);

    
    /// 删除当前地图上的行政区域
    static void removeBorder();
};
