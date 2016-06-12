#ifndef INLINECOLORPICKER_H
#define INLINECOLORPICKER_H

#include <QWidget>
#include <QColor>

namespace Ui {
class InlineColorPicker;
}

class InlineColorPicker : public QWidget
{
    Q_OBJECT

public:
    explicit InlineColorPicker(QWidget *parent = 0);
    ~InlineColorPicker();

protected:
    void paintEvent(QPaintEvent *e);


private:
    int x = 0;
    int y = 0;
    Ui::InlineColorPicker *ui;
};

#endif // INLINECOLORPICKER_H
