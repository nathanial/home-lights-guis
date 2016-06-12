CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(homelightswidgetsplugin)
TEMPLATE    = lib

HEADERS     = lightgroupcontrolplugin.h inlinecolorpickerplugin.h homelightswidgets.h
SOURCES     = lightgroupcontrolplugin.cpp inlinecolorpickerplugin.cpp homelightswidgets.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(inlinecolorpicker.pri)
include(lightgroupcontrol.pri)
