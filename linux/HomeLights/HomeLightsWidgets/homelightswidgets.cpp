#include "lightgroupcontrolplugin.h"
#include "inlinecolorpickerplugin.h"
#include "homelightswidgets.h"

HomeLightsWidgets::HomeLightsWidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new LightGroupControlPlugin(this));
    m_widgets.append(new InlineColorPickerPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> HomeLightsWidgets::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(homelightswidgetsplugin, HomeLightsWidgets)
#endif // QT_VERSION < 0x050000
