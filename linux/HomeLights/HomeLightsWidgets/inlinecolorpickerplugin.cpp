#include "inlinecolorpicker.h"
#include "inlinecolorpickerplugin.h"

#include <QtPlugin>

InlineColorPickerPlugin::InlineColorPickerPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void InlineColorPickerPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool InlineColorPickerPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *InlineColorPickerPlugin::createWidget(QWidget *parent)
{
    return new InlineColorPicker(parent);
}

QString InlineColorPickerPlugin::name() const
{
    return QLatin1String("InlineColorPicker");
}

QString InlineColorPickerPlugin::group() const
{
    return QLatin1String("");
}

QIcon InlineColorPickerPlugin::icon() const
{
    return QIcon();
}

QString InlineColorPickerPlugin::toolTip() const
{
    return QLatin1String("");
}

QString InlineColorPickerPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool InlineColorPickerPlugin::isContainer() const
{
    return false;
}

QString InlineColorPickerPlugin::domXml() const
{
    return QLatin1String("<widget class=\"InlineColorPicker\" name=\"inlineColorPicker\">\n</widget>\n");
}

QString InlineColorPickerPlugin::includeFile() const
{
    return QLatin1String("inlinecolorpicker.h");
}

