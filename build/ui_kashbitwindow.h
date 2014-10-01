/********************************************************************************
** Form generated from reading UI file 'kashbitwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KASHBITWINDOW_H
#define UI_KASHBITWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_KashbitWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLabel *hide2;
    QWebView *webView;

    void setupUi(QWidget *KashbitWindowClass)
    {
        if (KashbitWindowClass->objectName().isEmpty())
            KashbitWindowClass->setObjectName(QString::fromUtf8("KashbitWindowClass"));
        KashbitWindowClass->resize(670, 440);
        KashbitWindowClass->setMaximumSize(QSize(670, 440));
        actionQuit = new QAction(KashbitWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(KashbitWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        verticalLayout = new QVBoxLayout(KashbitWindowClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 56, 0, 0);
        label_9 = new QLabel(KashbitWindowClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        hide2 = new QLabel(KashbitWindowClass);
        hide2->setObjectName(QString::fromUtf8("hide2"));
        sizePolicy.setHeightForWidth(hide2->sizePolicy().hasHeightForWidth());
        hide2->setSizePolicy(sizePolicy);
        hide2->setMaximumSize(QSize(670, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        hide2->setFont(font1);
        hide2->setTextFormat(Qt::AutoText);
        hide2->setWordWrap(true);
        hide2->setIndent(-1);
        hide2->setOpenExternalLinks(true);

        verticalLayout->addWidget(hide2);

        webView = new QWebView(KashbitWindowClass);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setMaximumSize(QSize(670, 248));
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setUrl(QUrl(QString::fromUtf8("http://kashmircoin.byethost12.com/kb.html")));
        webView->setZoomFactor(1);

        verticalLayout->addWidget(webView);


        retranslateUi(KashbitWindowClass);

        QMetaObject::connectSlotsByName(KashbitWindowClass);
    } // setupUi

    void retranslateUi(QWidget *KashbitWindowClass)
    {
        actionQuit->setText(QApplication::translate("KashbitWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("KashbitWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("KashbitWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("KashbitWindowClass", "<html><head/><body><p align=\"center\"><img src=\":/icons/res/icons/kashbitt.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        hide2->setText(QApplication::translate("KashbitWindowClass", "<html><head/><body><p><span style=\" font-size:10pt;\">KashBit is a service which accepts Kashmircoin payment for Bitcoin transactions. Allowing you to pay any companies that accept Bitcoin quickly using your Kashmircoins. Remember to include the 0.0002 mining fee required when sending bitcoins to the expected total.</span></p><p><span style=\" font-size:10pt;\">Kashbit is in beta and currently only allows bitcoin transfers up to 1 bitcoin, with a small 0.45 percent fee that covers the trade costs. After submitting the destination bitcoin address and the desired amount to send, you have 3 minutes to complete the transaction.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(KashbitWindowClass);
    } // retranslateUi

};

namespace Ui {
    class KashbitWindowClass: public Ui_KashbitWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KASHBITWINDOW_H
