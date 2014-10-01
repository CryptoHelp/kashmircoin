/********************************************************************************
** Form generated from reading UI file 'tutoWriteDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTOWRITEDIALOG_H
#define UI_TUTOWRITEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tutoWriteDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tutoWriteDialog)
    {
        if (tutoWriteDialog->objectName().isEmpty())
            tutoWriteDialog->setObjectName(QString::fromUtf8("tutoWriteDialog"));
        tutoWriteDialog->resize(868, 601);
        horizontalLayout_2 = new QHBoxLayout(tutoWriteDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(tutoWriteDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        horizontalLayout_2->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(tutoWriteDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 267));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(frame);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        sizePolicy1.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy1);
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QString::fromUtf8("1.0.6.7"));
        versionLabel->setTextFormat(Qt::RichText);
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);


        verticalLayout_2->addWidget(frame);

        label_3 = new QLabel(tutoWriteDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(tutoWriteDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        label_7 = new QLabel(tutoWriteDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(tutoWriteDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(label_8);

        label_5 = new QLabel(tutoWriteDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(tutoWriteDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        buttonBox = new QDialogButtonBox(tutoWriteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(tutoWriteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), tutoWriteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), tutoWriteDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(tutoWriteDialog);
    } // setupUi

    void retranslateUi(QDialog *tutoWriteDialog)
    {
        tutoWriteDialog->setWindowTitle(QApplication::translate("tutoWriteDialog", "How to mine FoxCoin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tutoWriteDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Kashmircoin version </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("tutoWriteDialog", "<html><head/><body><p><span style=\" font-weight:600;\">How to solo dig:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tutoWriteDialog", "With CPU:\n"
"\n"
"Go to the dig site in the FoxCoin-qt, a menu should appear with a lot of options. The options you want to select are:\n"
"[Solo Dig], [Minerd [CPU]], [CPU Cores * 4], [90]] - Next line - [127.0.0.1], [9919], [RPC Username], [RPC Password]\n"
"\n"
"With GPU:\n"
"\n"
"nVIDIA GPU:\n"
"\n"
"Go to the dig site page, and enter in the following options:\n"
"[Solo Dig], [CUDAMiner [nVIDIA GPU]], [N/A], [90] - Next Line - [127.0.0.1], [9919], [RPC Username], [RPC Password] \n"
"\n"
"AMD:\n"
"\n"
"Go to the dig site page, and enter in the following options:\n"
"[Solo Dig], [CGMiner [AMD GPU]], [GPUs], [90] - Next Line - [127.0.0.1], [9919], [RPC Username], [RPC Password]", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("tutoWriteDialog", "<html><head/><body><p><span style=\" font-weight:600;\">How to dig in a herd:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("tutoWriteDialog", "Requirements:\n"
"-Knowledge of a p2pool, such as fox.doxmon.com\n"
"\n"
"Follow the instructions above for solo digging, but switch dig type to Herd Dig, set the URL to the p2pool of your choice, and\n"
"set your username to your FoxCoin address, and your password to anything. This type of minining is perferred and will\n"
"automatically send you your coins.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("tutoWriteDialog", "<html><head/><body><p><span style=\" font-weight:600;\">How to dig in a pond:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("tutoWriteDialog", "Requirements:\n"
"-A registered pond worker (can be made via fox.luckyminers.com, for example)\n"
"\n"
"Follow the instructions above for solo digging, but switch digging mode to pond dig, enter in your pool URL (stratum+tcp:// \n"
"NOT required) and Port, enter in your Username.Worker and your Worker password.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tutoWriteDialog: public Ui_tutoWriteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTOWRITEDIALOG_H
