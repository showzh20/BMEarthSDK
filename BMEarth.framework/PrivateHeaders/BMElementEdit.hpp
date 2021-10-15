//
//  BMElementEdit.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/8/17.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BMElementEdit_hpp
#define BMElementEdit_hpp

#include <BmEarth/Features/bmabstractfeature.h>
#include <BmEarth/Features/Action/featureactionhelper.h>

using namespace BmApp;

class BMElementEdit {
public:

    static BMElementEdit* getDefault();

    bool tostartEdit(unsigned long long  id);

    void cancelEdit();

    void completeEdit();
    
protected:
    void setCurrentAdapter(FeatureActionHelper* action);


private:

    BMElementEdit();

    BmAbstractFeature* m_pFeature;
    osgEarth::Symbology::Geometry m_geometry;

    static BMElementEdit* m_pElementEdit;
};


#endif /* BMElementEdit_hpp */
