/********************************************************************************
** Form generated from reading UI file 'blockbrowser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKBROWSER_H
#define UI_BLOCKBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockBrowser
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QSpinBox *heightBox;
    QLabel *timeBox;
    QLabel *valueLabel;
    QLabel *hardLabel;
    QLabel *heightLabel;
    QPushButton *txButton;
    QPushButton *blockButton;
    QLabel *valueBox;
    QLabel *bitsBox;
    QLabel *bitsLabel;
    QLabel *txLabel;
    QLabel *feesLabel;
    QLabel *heightLabel_2;
    QLabel *merkleBox;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *inputLabel;
    QLabel *pawLabel;
    QLabel *feesBox;
    QLineEdit *txBox;
    QLabel *txID;
    QLabel *pawBox;
    QLabel *nonceBox;
    QLabel *timeLabel;
    QLabel *merkleLabel;
    QLabel *outputBox;
    QLabel *hardBox;
    QLabel *hashBox;
    QLabel *hashLabel;
    QLabel *nonceLabel;
    QLabel *inputBox;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *outputLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;

    void setupUi(QWidget *BlockBrowser)
    {
        if (BlockBrowser->objectName().isEmpty())
            BlockBrowser->setObjectName(QString::fromUtf8("BlockBrowser"));
        BlockBrowser->setWindowModality(Qt::NonModal);
        BlockBrowser->setEnabled(true);
        BlockBrowser->resize(782, 688);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockBrowser->sizePolicy().hasHeightForWidth());
        BlockBrowser->setSizePolicy(sizePolicy);
        BlockBrowser->setMinimumSize(QSize(0, 0));
        BlockBrowser->setAcceptDrops(false);
        BlockBrowser->setStyleSheet(QString::fromUtf8("font-family:Proxima Nova Rg;"));
        gridLayout = new QGridLayout(BlockBrowser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 66, 22, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        heightBox = new QSpinBox(BlockBrowser);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(heightBox->sizePolicy().hasHeightForWidth());
        heightBox->setSizePolicy(sizePolicy1);
        heightBox->setMaximum(99999999);

        gridLayout_3->addWidget(heightBox, 1, 0, 1, 1);

        timeBox = new QLabel(BlockBrowser);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        timeBox->setLayoutDirection(Qt::LeftToRight);
        timeBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        timeBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(timeBox, 8, 1, 1, 1);

        valueLabel = new QLabel(BlockBrowser);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(valueLabel, 15, 0, 1, 1);

        hardLabel = new QLabel(BlockBrowser);
        hardLabel->setObjectName(QString::fromUtf8("hardLabel"));

        gridLayout_3->addWidget(hardLabel, 9, 0, 1, 1);

        heightLabel = new QLabel(BlockBrowser);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setLayoutDirection(Qt::LeftToRight);
        heightLabel->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        heightLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(heightLabel, 3, 1, 1, 1);

        txButton = new QPushButton(BlockBrowser);
        txButton->setObjectName(QString::fromUtf8("txButton"));
        txButton->setMinimumSize(QSize(0, 22));
        txButton->setStyleSheet(QString::fromUtf8("border:1px solid grey;margin-left:20px;"));

        gridLayout_3->addWidget(txButton, 12, 1, 1, 1);

        blockButton = new QPushButton(BlockBrowser);
        blockButton->setObjectName(QString::fromUtf8("blockButton"));
        blockButton->setMinimumSize(QSize(0, 24));
        blockButton->setStyleSheet(QString::fromUtf8("border:1px solid grey;margin-left:20px;"));

        gridLayout_3->addWidget(blockButton, 1, 1, 1, 1);

        valueBox = new QLabel(BlockBrowser);
        valueBox->setObjectName(QString::fromUtf8("valueBox"));
        valueBox->setLayoutDirection(Qt::LeftToRight);
        valueBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        valueBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(valueBox, 15, 1, 1, 1);

        bitsBox = new QLabel(BlockBrowser);
        bitsBox->setObjectName(QString::fromUtf8("bitsBox"));
        bitsBox->setLayoutDirection(Qt::LeftToRight);
        bitsBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        bitsBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(bitsBox, 7, 1, 1, 1);

        bitsLabel = new QLabel(BlockBrowser);
        bitsLabel->setObjectName(QString::fromUtf8("bitsLabel"));

        gridLayout_3->addWidget(bitsLabel, 7, 0, 1, 1);

        txLabel = new QLabel(BlockBrowser);
        txLabel->setObjectName(QString::fromUtf8("txLabel"));
        txLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(txLabel, 14, 0, 1, 1);

        feesLabel = new QLabel(BlockBrowser);
        feesLabel->setObjectName(QString::fromUtf8("feesLabel"));
        feesLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(feesLabel, 16, 0, 1, 1);

        heightLabel_2 = new QLabel(BlockBrowser);
        heightLabel_2->setObjectName(QString::fromUtf8("heightLabel_2"));

        gridLayout_3->addWidget(heightLabel_2, 3, 0, 1, 1);

        merkleBox = new QLabel(BlockBrowser);
        merkleBox->setObjectName(QString::fromUtf8("merkleBox"));
        merkleBox->setMinimumSize(QSize(187, 0));
        merkleBox->setLayoutDirection(Qt::LeftToRight);
        merkleBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        merkleBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(merkleBox, 5, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_5, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 11, 1, 1, 1);

        inputLabel = new QLabel(BlockBrowser);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));
        inputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(inputLabel, 18, 0, 1, 1);

        pawLabel = new QLabel(BlockBrowser);
        pawLabel->setObjectName(QString::fromUtf8("pawLabel"));

        gridLayout_3->addWidget(pawLabel, 10, 0, 1, 1);

        feesBox = new QLabel(BlockBrowser);
        feesBox->setObjectName(QString::fromUtf8("feesBox"));
        feesBox->setLayoutDirection(Qt::LeftToRight);
        feesBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        feesBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(feesBox, 16, 1, 1, 1);

        txBox = new QLineEdit(BlockBrowser);
        txBox->setObjectName(QString::fromUtf8("txBox"));
        sizePolicy1.setHeightForWidth(txBox->sizePolicy().hasHeightForWidth());
        txBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(txBox, 12, 0, 1, 1);

        txID = new QLabel(BlockBrowser);
        txID->setObjectName(QString::fromUtf8("txID"));
        txID->setLayoutDirection(Qt::LeftToRight);
        txID->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        txID->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(txID, 14, 1, 1, 1);

        pawBox = new QLabel(BlockBrowser);
        pawBox->setObjectName(QString::fromUtf8("pawBox"));
        pawBox->setLayoutDirection(Qt::LeftToRight);
        pawBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        pawBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(pawBox, 10, 1, 1, 1);

        nonceBox = new QLabel(BlockBrowser);
        nonceBox->setObjectName(QString::fromUtf8("nonceBox"));
        nonceBox->setLayoutDirection(Qt::LeftToRight);
        nonceBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        nonceBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(nonceBox, 6, 1, 1, 1);

        timeLabel = new QLabel(BlockBrowser);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        gridLayout_3->addWidget(timeLabel, 8, 0, 1, 1);

        merkleLabel = new QLabel(BlockBrowser);
        merkleLabel->setObjectName(QString::fromUtf8("merkleLabel"));

        gridLayout_3->addWidget(merkleLabel, 5, 0, 1, 1);

        outputBox = new QLabel(BlockBrowser);
        outputBox->setObjectName(QString::fromUtf8("outputBox"));
        sizePolicy.setHeightForWidth(outputBox->sizePolicy().hasHeightForWidth());
        outputBox->setSizePolicy(sizePolicy);
        outputBox->setLayoutDirection(Qt::LeftToRight);
        outputBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        outputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(outputBox, 17, 1, 1, 1);

        hardBox = new QLabel(BlockBrowser);
        hardBox->setObjectName(QString::fromUtf8("hardBox"));
        hardBox->setLayoutDirection(Qt::LeftToRight);
        hardBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        hardBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(hardBox, 9, 1, 1, 1);

        hashBox = new QLabel(BlockBrowser);
        hashBox->setObjectName(QString::fromUtf8("hashBox"));
        hashBox->setEnabled(true);
        sizePolicy.setHeightForWidth(hashBox->sizePolicy().hasHeightForWidth());
        hashBox->setSizePolicy(sizePolicy);
        hashBox->setMinimumSize(QSize(0, 0));
        hashBox->setLayoutDirection(Qt::LeftToRight);
        hashBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        hashBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(hashBox, 4, 1, 1, 1);

        hashLabel = new QLabel(BlockBrowser);
        hashLabel->setObjectName(QString::fromUtf8("hashLabel"));

        gridLayout_3->addWidget(hashLabel, 4, 0, 1, 1);

        nonceLabel = new QLabel(BlockBrowser);
        nonceLabel->setObjectName(QString::fromUtf8("nonceLabel"));

        gridLayout_3->addWidget(nonceLabel, 6, 0, 1, 1);

        inputBox = new QLabel(BlockBrowser);
        inputBox->setObjectName(QString::fromUtf8("inputBox"));
        inputBox->setLayoutDirection(Qt::LeftToRight);
        inputBox->setStyleSheet(QString::fromUtf8("margin-left:20px;"));
        inputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(inputBox, 18, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 19, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 13, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 19, 1, 1, 1);

        outputLabel = new QLabel(BlockBrowser);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(outputLabel, 17, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(BlockBrowser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        outputLabel->raise();
        outputBox->raise();

        retranslateUi(BlockBrowser);

        QMetaObject::connectSlotsByName(BlockBrowser);
    } // setupUi

    void retranslateUi(QWidget *BlockBrowser)
    {
        BlockBrowser->setWindowTitle(QApplication::translate("BlockBrowser", "Form", 0, QApplication::UnicodeUTF8));
        timeBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("BlockBrowser", "Value out:", 0, QApplication::UnicodeUTF8));
        hardLabel->setText(QApplication::translate("BlockBrowser", "Block Difficulty:", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        txButton->setText(QApplication::translate("BlockBrowser", "Decode Transaction", 0, QApplication::UnicodeUTF8));
        blockButton->setText(QApplication::translate("BlockBrowser", "Jump to Block", 0, QApplication::UnicodeUTF8));
        valueBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        bitsBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        bitsLabel->setText(QApplication::translate("BlockBrowser", "Block nBits:", 0, QApplication::UnicodeUTF8));
        txLabel->setText(QApplication::translate("BlockBrowser", "Transaction ID:", 0, QApplication::UnicodeUTF8));
        feesLabel->setText(QApplication::translate("BlockBrowser", "Fees:", 0, QApplication::UnicodeUTF8));
        heightLabel_2->setText(QApplication::translate("BlockBrowser", "Block Height:", 0, QApplication::UnicodeUTF8));
        merkleBox->setText(QApplication::translate("BlockBrowser", "0x0", 0, QApplication::UnicodeUTF8));
        inputLabel->setText(QApplication::translate("BlockBrowser", "Inputs:", 0, QApplication::UnicodeUTF8));
        pawLabel->setText(QApplication::translate("BlockBrowser", "Block Hashrate:", 0, QApplication::UnicodeUTF8));
        feesBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        txBox->setInputMask(QString());
        txBox->setPlaceholderText(QString());
        txID->setText(QApplication::translate("BlockBrowser", "000", 0, QApplication::UnicodeUTF8));
        pawBox->setText(QApplication::translate("BlockBrowser", "0000 MH/s", 0, QApplication::UnicodeUTF8));
        nonceBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("BlockBrowser", "Block Timestamp:", 0, QApplication::UnicodeUTF8));
        merkleLabel->setText(QApplication::translate("BlockBrowser", "Block Merkle:", 0, QApplication::UnicodeUTF8));
        outputBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        hardBox->setText(QApplication::translate("BlockBrowser", "0.00", 0, QApplication::UnicodeUTF8));
        hashBox->setText(QApplication::translate("BlockBrowser", "0x0", 0, QApplication::UnicodeUTF8));
        hashLabel->setText(QApplication::translate("BlockBrowser", "Block Hash:", 0, QApplication::UnicodeUTF8));
        nonceLabel->setText(QApplication::translate("BlockBrowser", "Block nNonce:", 0, QApplication::UnicodeUTF8));
        inputBox->setText(QApplication::translate("BlockBrowser", "0", 0, QApplication::UnicodeUTF8));
        outputLabel->setText(QApplication::translate("BlockBrowser", "Outputs:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p align=\"center\"><img src=\":/icons/res/icons/blockt.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BlockBrowser: public Ui_BlockBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKBROWSER_H
