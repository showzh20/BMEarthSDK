//
//  BmHistoryListener.h
//  BigeEarth
//
//  Created by HerryBabaer on 2020/9/22.
//  Copyright © 2020 赵洪. All rights reserved.
//

#include <BmEarth/Core/gehistoryhelper.h>

using namespace BmApp;
class BmHistoryListener :public GeHistoryDatesListener{
public:

    virtual void currentDatesOnChanged(const std::vector<unsigned short> & dates);

};

