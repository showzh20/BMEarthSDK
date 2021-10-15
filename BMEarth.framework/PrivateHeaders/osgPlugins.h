#pragma once 

//This file is used to force the linking of the osg plugins
//as we our doing a static build we can't depend on the loading of the
//dynamic libs to add the plugins to the registries

#include <osgViewer/GraphicsWindow>
#include <osgDB/Registry>
#include <osgEarth/ColorFilter>
#include <osgEarthFeatures/Filter>
#include <osgEarthSymbology/Symbol>
#include <osgEarthAnnotation/AnnotationRegistry>

//windowing system
#ifndef ANDROID
USE_GRAPICSWINDOW_IMPLEMENTATION(IOS)
#endif

USE_OSGPLUGIN(osg2)
USE_OSGPLUGIN(osg)
USE_OSGPLUGIN(curl)
USE_OSGPLUGIN(imageio)
USE_OSGPLUGIN(zip)
USE_OSGPLUGIN(freetype)
USE_OSGPLUGIN(osgearth_model_feature_geom)
USE_OSGPLUGIN(osgearth_engine_mp)
USE_OSGPLUGIN(osgearth_engine_rex)
USE_OSGPLUGIN(osgearth_cache_rocksdb)
USE_OSGPLUGIN(osgearth_sky_simple)
USE_SERIALIZER_WRAPPER_LIBRARY(osg)
