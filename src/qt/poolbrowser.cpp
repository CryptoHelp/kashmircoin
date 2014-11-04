#include "poolbrowser.h"
#include "ui_poolbrowser.h"


PoolBrowser::PoolBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PoolBrowser)
{
    ui->setupUi(this);
    setFixedSize(660, 430);




connect(ui->bittrex, SIGNAL(pressed()), this, SLOT( bittrex()));
connect(ui->swisscex, SIGNAL(pressed()), this, SLOT( swisscex()));

}

void PoolBrowser::bittrex()
{
    QDesktopServices::openUrl(QUrl("https://cryptocointalk.com/topic/15234-kashmircoin-a-kind-of-bittrex-giveaway/"));
}

void PoolBrowser::swisscex()
{
    QDesktopServices::openUrl(QUrl("https://swisscex.com/market/KSC_BTC"));
}



void PoolBrowser::setModel(ClientModel *model)
{
    this->model = model;
}

PoolBrowser::~PoolBrowser()
{
    delete ui;
}
