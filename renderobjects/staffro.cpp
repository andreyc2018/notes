#include "staffro.h"

#include <QPainter>

StaffRO::StaffRO(const std::shared_ptr<Clef>& aClef)
    : RenderObject(aClef)
{
}

void StaffRO::Render(QPaintDevice *aPaintDevice)
{
    QPainterPath path;
    path.moveTo(20, 80);
    path.lineTo(20, 30);
    path.cubicTo(80, 0, 50, 50, 80, 80);

    QPainter painter(aPaintDevice);
    painter.setPen(mPen);
    painter.setBrush(mBrush);
    painter.setRenderHint(QPainter::Antialiasing, true);

    for (int x = 0; x < aPaintDevice->width(); x += 100) {
        for (int y = 0; y < aPaintDevice->height(); y += 100) {
            painter.save();
            painter.translate(x, y);
            painter.restore();
        }
    }

    painter.setRenderHint(QPainter::Antialiasing, false);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
}
