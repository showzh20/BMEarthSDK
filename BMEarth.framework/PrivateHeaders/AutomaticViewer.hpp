//
//  AutomaticViewer.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/10/9.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef AutomaticViewer_hpp
#define AutomaticViewer_hpp

#include "EarthManipulatorAuto.hpp"

class AutomaticViewer {
public:

    static AutomaticViewer* getDefault();

    AutomaticViewer();

    int startViewer(int currentType);

    void stopViewer();

private:
    int m_type;

    int m_level;

    osg::observer_ptr<EarthManipulatorAuto>  m_earthmanipulator;

    static AutomaticViewer* m_AutoViewer;
};

#endif /* AutomaticViewer_hpp */
