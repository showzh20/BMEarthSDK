//
//  BmIconManager.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/5.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BmIconManager_hpp
#define BmIconManager_hpp

#include <osg/Image>

class BmIconManager {
public:
    static BmIconManager* getDefault();
    osg::ref_ptr<osg::Image> getImage(std::string key,bool isCustom);

    bool  getIsCustom();

    std::string getIconKey(osg::ref_ptr<osg::Image> image,bool iscustom);
private:
    BmIconManager();
    void setIsCustom(bool iscustom);


    std::map<std::string,osg::ref_ptr<osg::Image>> m_mapdefaultImage;
    std::map<std::string,osg::ref_ptr<osg::Image>> m_mapCustomImage;
    std::string m_Iconpath;
    bool m_isCustompath;
    static BmIconManager* m_pBmIconMgr;
};

#endif /* BmIconManager_hpp */
