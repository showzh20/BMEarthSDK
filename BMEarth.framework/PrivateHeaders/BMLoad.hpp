//
//  BMLoad.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/7/29.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BMLoad_hpp
#define BMLoad_hpp


#include "public.h"
#include <string>
#include <BmEarth/MapProvider/abstractprovider.h>


struct OffLineRequest
{
    std::string bmUrl;
    std::map<std::string,std::string> bmHeader;
};


using namespace BmApp;

class BMLoad {
public:
    
    
    /// 创建地球
    /// @param earthconfig 初始化地球参数结构
    static void createOsgEarth(BmInitParam earthconfig);
    
    
    /// 刷新
    static void frame();
    
    /// 改变窗口大小
    /// @param width 窗口宽度
    /// @param height 窗口高度
    static void changeWindowSize(float width,float height);
    
    
    /// 放大
    static void zoomIn();
    
    
    /// 缩小
    static void zoomOut();
    
    
    /// 跳转到指定位置
    /// @param latitude 纬度
    /// @param longitude 经度
    /// @param viewPointAltitude 视点高度
    /// @param time 动画时间
    /// @param pitch 倾斜角度
    static void jumptoLocation(double latitude,double longitude,int viewPointAltitude,double time=2.5,double pitch=-90);
    
    
    
    /// 跳转到指定区域
    /// @param lat_north  北纬
    /// @param lon_west 西经
    /// @param lat_south 南纬
    /// @param lon_east 东经
    static void jumptoArea(double lat_north,double lon_west,double lat_south,double lon_east,double time=2.5, double pitch = -90);
    
    
    /// 更改地图类型标注层
    /// @param type 路网信息
    static void changeMapType(int type);
    
    
    /// 更改地图类型
    /// @param mapTypeGroup 地图类型(电子、卫星、地形)
    static MapTypeGroup changMapTypeGroup(int mapTypeGroup);
    
    
    /// 切换图源
    /// @param mapSource 图源
    /// @return 返回当前的图源和支持的图源
    static MapTypeGroup changeMapSouce(std::string mapSource);
    
    /// 设置当前图源比列
    /// @param icurrentSubIndex 比例索引
    static void setsubIndex(int icurrentSubIndex);
    
    
    /// 返回图源信息
    static void getproviders(std::vector<Providers>&);
    
    
    /// 设置历史影像
    /// @param date 时间(int)
    static void setCurrentDate(int date);
    
    
    /// 将时间转换成年月日
    /// @param date 整型时间
    static std::string getDateToYMD(int date);
    
    /// 设置是否显示建筑物轮廓
    static void setBuildEnable(bool isEnable);
    
    /// 跳转动画
    /// @param lon
    /// @param lat
    /// @param height
    /// @param time
    static void animateTo(double lon, double lat, double height, double time);
    
    /// 固定正南北
    /// @param isFixeX isFixeX description
    static void setFixedRotateX(bool isFixeX);
    
    /// 固定俯仰角
    /// @param isFixeY isFixeY description
    static void setFixeRotateY(bool isFixeY);
    
    /// 请求瓦片的链接
    /// @param mapType 地图类型
    /// @param x x
    /// @param y y
    /// @param z z
    /// @return 返回当前的url和header的对象
    static OffLineRequest downloadTilesUrl(unsigned int mapType,long x,long y,long z);
    
    /// 离线地图加载
    /// @param map 地图地址
    /// @param mapName 自定义地图名
    /// @param strMapIcon 地图图标
    static void loadOffLineMap(const std::vector<std::string>& map,const std::string& mapName,const std::string& strMapIcon);
    
    /// 跳转到离线地图位置
    static void jumpMapLoction();
    
    /// 移除当前的图层
    /// @param providerId 图层id
    static void removeProvider(std::string providerId);
    
    /// 添加在线地图
    /// @param url 有效的在线链接
    /// @return 成功返回0 -1 表示无法访问的地址 -2表示没有找到合适的在线地图
    static int  addOnlieProvider(std::string& url,const std::string & name,const std::string & imagePath);
    
    /// 经纬度纠偏
    /// @param lon 需要纠偏的经度
    /// @param lat 需要纠偏的纬度
    /// @param retlon 结果经度
    /// @param retlat 结果纬度
    static void gps84ToGcj02(double lon,double lat, double& retlon,double& retlat);
    
    /// 经纬度加偏
    /// @param lon 需要加偏的经度
    /// @param lat 需要加偏的纬度
    /// @param retlon 结果经度
    /// @param retlat 结果纬度
    static void gcj02ToGps84(double lon,double lat, double& retlon,double& retlat);

public:
    static AbstractProvider* g_provider;//拼接瓦片下载地址的provider
    static std::string  g_defaultIconPath;
    static std::string  g_customIconPath;
    static std::string  g_defalitKey;
    static std::string  g_userLocationPath;
    static std::string  g_BroderFilepath;
    
    
};

#endif /* BMLoad_hpp */
