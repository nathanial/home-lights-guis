#include "lightgroupcontrol.h"
#include "lightgroupcontrolplugin.h"

#include <QtPlugin>

LightGroupControlPlugin::LightGroupControlPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void LightGroupControlPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool LightGroupControlPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *LightGroupControlPlugin::createWidget(QWidget *parent)
{
    return new LightGroupControl(parent);
}

QString LightGroupControlPlugin::name() const
{
    return QLatin1String("LightGroupControl");
}

QString LightGroupControlPlugin::group() const
{
    return QLatin1String("");
}

QIcon LightGroupControlPlugin::icon() const
{
    return QIcon();
}

QString LightGroupControlPlugin::toolTip() const
{
    return QLatin1String("");
}

QString LightGroupControlPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool LightGroupControlPlugin::isContainer() const
{
    return false;
}

QString LightGroupControlPlugin::domXml() const
{
    return QLatin1String("<widget class=\"LightGroupControl\" name=\"lightGroupControl\">\n</widget>\n");
}

QString LightGroupControlPlugin::includeFile() const
{
    return QLatin1String("lightgroupcontrol.h");
}

