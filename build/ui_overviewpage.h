/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QFrame *frame_4;
    QListView *listTransactions;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_3;
    QWidget *gridLayoutWidget;
    QGridLayout *ohno;
    QLabel *labelBalance;
    QLabel *labelStake;
    QLabel *labelImmature;
    QLabel *labelTotal;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QLabel *labelWalletStatus;
    QLabel *labelUnconfirmed;
    QLabel *labelNumTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(670, 502);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setMaximumSize(QSize(670, 540));
        OverviewPage->setFocusPolicy(Qt::StrongFocus);
        OverviewPage->setStyleSheet(QString::fromUtf8("color:#505050;\n"
"font-family:'Proxima Nova Rg';font-size:13px"));
        frame_4 = new QFrame(OverviewPage);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 66, 657, 201));
        frame_4->setMinimumSize(QSize(657, 201));
        frame_4->setMaximumSize(QSize(657, 201));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame { font-size:12px;padding:0px;background-image:url(:/icons/res/icons/recent.png);padding-top:18px; }"));
        listTransactions = new QListView(frame_4);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setGeometry(QRect(10, 27, 600, 125));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy1);
        listTransactions->setMinimumSize(QSize(600, 125));
        listTransactions->setMaximumSize(QSize(600, 125));
        listTransactions->setStyleSheet(QString::fromUtf8("background:transparent;color:#a0a7b6;"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        listTransactions->setSpacing(1);
        layoutWidget = new QWidget(OverviewPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 270, 277, 176));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(275, 168));
        frame->setMaximumSize(QSize(275, 168));
        frame->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/res/icons/balance.png);"));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(12, 12, -1, -1);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("background:transparent;color:#afa6cd;"));
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 241, 111));
        ohno = new QGridLayout(gridLayoutWidget);
        ohno->setSpacing(0);
        ohno->setObjectName(QString::fromUtf8("ohno"));
        ohno->setContentsMargins(0, 5, 0, 0);
        labelBalance = new QLabel(gridLayoutWidget);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setLayoutDirection(Qt::LeftToRight);
        labelBalance->setStyleSheet(QString::fromUtf8("color:green;"));
        labelBalance->setText(QString::fromUtf8("<html><head/><body><p><span style=\" font-size:8pt;\">0 KSC</span></p></body></html>"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelBalance, 0, 0, 1, 1);

        labelStake = new QLabel(gridLayoutWidget);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setStyleSheet(QString::fromUtf8("color:green;"));
        labelStake->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 KSC</span></p></body></html>"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelStake, 1, 0, 1, 1);

        labelImmature = new QLabel(gridLayoutWidget);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setStyleSheet(QString::fromUtf8("color:green;"));
        labelImmature->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 KSC</span></p></body></html>"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        ohno->addWidget(labelImmature, 2, 0, 1, 1);

        labelTotal = new QLabel(gridLayoutWidget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setStyleSheet(QString::fromUtf8("color:green;"));
        labelTotal->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 KSC</span></p></body></html>"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        ohno->addWidget(labelTotal, 4, 0, 1, 1);


        verticalLayout_4->addWidget(frame_3);


        verticalLayout_2->addWidget(frame);

        layoutWidget1 = new QWidget(OverviewPage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(340, 270, 281, 174));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 5, 0, 0);
        frame_5 = new QFrame(layoutWidget1);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setEnabled(true);
        frame_5->setMaximumSize(QSize(275, 168));
        frame_5->setLayoutDirection(Qt::RightToLeft);
        frame_5->setStyleSheet(QString::fromUtf8("background-image:url(:/icons/res/icons/detail.png);"));
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setMinimumSize(QSize(251, 145));
        frame_2->setMaximumSize(QSize(251, 144));
        frame_2->setLayoutDirection(Qt::RightToLeft);
        frame_2->setStyleSheet(QString::fromUtf8("background:transparent;color:#508f6f;"));
        labelWalletStatus = new QLabel(frame_2);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setGeometry(QRect(1, 80, 241, 31));
        sizePolicy3.setHeightForWidth(labelWalletStatus->sizePolicy().hasHeightForWidth());
        labelWalletStatus->setSizePolicy(sizePolicy3);
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red;} "));
        labelWalletStatus->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" color:#d31360;\">Out of sync</span></p></body></html>"));
        labelWalletStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed = new QLabel(frame_2);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setGeometry(QRect(1, 33, 241, 16));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0 KSC</span></p></body></html>"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelNumTransactions = new QLabel(frame_2);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));
        labelNumTransactions->setGeometry(QRect(1, 59, 241, 16));
        labelNumTransactions->setText(QString::fromUtf8("<html><head/><body><p align=\"right\"><span style=\" font-size:8pt;\">0</span></p></body></html>"));
        labelNumTransactions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(frame_2);


        verticalLayout_3->addWidget(frame_5);

        layoutWidget->raise();
        layoutWidget->raise();
        frame_4->raise();

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Kashmircoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelNumTransactions->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
