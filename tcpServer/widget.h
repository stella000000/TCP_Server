#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>

namespace Ui {
    class Widget;
}


class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;    //add object:tcpServer
private slots:
    void sendMessage();    //add private slot.
};

#endif // WIDGET_H
