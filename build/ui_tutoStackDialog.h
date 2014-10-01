/********************************************************************************
** Form generated from reading UI file 'tutoStackDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTOSTACKDIALOG_H
#define UI_TUTOSTACKDIALOG_H

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

class Ui_tutoStackDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *tutoStackDialog)
    {
        if (tutoStackDialog->objectName().isEmpty())
            tutoStackDialog->setObjectName(QString::fromUtf8("tutoStackDialog"));
        tutoStackDialog->resize(834, 534);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tutoStackDialog->sizePolicy().hasHeightForWidth());
        tutoStackDialog->setSizePolicy(sizePolicy);
        tutoStackDialog->setMaximumSize(QSize(1740, 798));
        horizontalLayout_2 = new QHBoxLayout(tutoStackDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(tutoStackDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        horizontalLayout_2->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(tutoStackDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 267));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(frame);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        sizePolicy.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy);
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QString::fromUtf8("1.0.6.7"));
        versionLabel->setTextFormat(Qt::RichText);
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);


        verticalLayout_2->addWidget(frame);

        label_2 = new QLabel(tutoStackDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMaximumSize(QSize(16777215, 450));
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        buttonBox = new QDialogButtonBox(tutoStackDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(tutoStackDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), tutoStackDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), tutoStackDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(tutoStackDialog);
    } // setupUi

    void retranslateUi(QDialog *tutoStackDialog)
    {
        tutoStackDialog->setWindowTitle(QApplication::translate("tutoStackDialog", "How to Stake", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tutoStackDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Kashmircoin version: </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("tutoStackDialog", "<html><head/><body><p>As you may already know, Kashmircoin are generated via two different ways. One of them is mining with a computer or a machine generating <span style=\" text-decoration: underline;\">Proof Of Work</span> blocks, and the other one is staking : generating <span style=\" text-decoration: underline;\">Proof Of Stake</span> blocks with your coins.</p><p>Let me explain Proof Of Stake more in details..</p><p>Your coins have what we call <span style=\" font-style:italic;\">coin-age </span>they start gaining age if they stay still during <span style=\" font-weight:600;\">12 hours</span> in your wallet, your <span style=\" font-style:italic;\">stake weight</span> is the cumulated coin age you have. Before those 12 hours, coins don't get old so you won't be able to hit a Stake Block.</p><p>Your coins always gain coin-age even if your wallet is closed. But to hit a Stake Block you need to have your wallet open.</p><p>To see how much time is needed to hit a stake block just hover the lightning icon in "
                        "the wallet it will tell you the expected time. But beware, like POW blocks, POS blocks are a bit random so expected time may be lower or higher.</p><p>This is when your coin-age is important. The more cumulated coin-age you got, the more chances you have of hitting a stake block. Once you hit this block and gain interest, coins which have been used have their coin-age reset, are moved to stake and blocked for 350 blocks.</p><p>Interest is fixed at 2% per year, but since coin start gaining age 12 hours after with compound interest this percentage is much higher.</p><p><span style=\" text-decoration: underline;\">Some options available to handle day to day staking :</span></p><p>In <span style=\" font-style:italic;\">settings-&gt;options</span> you can set Reservebalance (it's the amount you don't want to stack)<br/>In <span style=\" font-style:italic;\">settings-&gt;options-&gt;display</span> you can tick coin control, so you can control what coin you send (don't send old coins)<br/>In <span style=\" font-style"
                        ":italic;\">settings</span> you can unlock wallet for staking only if you encrypted it.</p><p><br/></p><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tutoStackDialog: public Ui_tutoStackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTOSTACKDIALOG_H
