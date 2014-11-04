#ifndef POOLBROWSER_H
#define POOLBROWSER_H

#include "clientmodel.h"

#include <QtGui>
#include <QtNetwork>
#include <QWidget>
#include <QObject>
#include <QtNetwork/QtNetwork>


namespace Ui {
class PoolBrowser;
}


class PoolBrowser : public QWidget
{
    Q_OBJECT

public:
    explicit PoolBrowser(QWidget *parent = 0);
    ~PoolBrowser();
    
    void setModel(ClientModel *model);


public slots:

    void bittrex();
    void swisscex();

private:
    Ui::PoolBrowser *ui;
    ClientModel *model;

};

#endif // POOLBROWSER_H
