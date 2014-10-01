/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QWebView *webView;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(670, 440);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        verticalLayout = new QVBoxLayout(ChatWindowClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 66, 0, 0);
        label_9 = new QLabel(ChatWindowClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        webView = new QWebView(ChatWindowClass);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("http://kashmircoin.byethost12.com/mac.html")));
        webView->setZoomFactor(0.7);

        verticalLayout->addWidget(webView);


        retranslateUi(ChatWindowClass);

        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><img src=\":/icons/res/icons/socialt.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
