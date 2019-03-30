/********************************************************************************
** Form generated from reading UI file 'rightsecdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTSECDIALOG_H
#define UI_RIGHTSECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rightSecDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *rightSecYes;
    QPushButton *rightSecNo;
    QSpacerItem *verticalSpacer;
    QLabel *rightSecDialogLabel;

    void setupUi(QDialog *rightSecDialog)
    {
        if (rightSecDialog->objectName().isEmpty())
            rightSecDialog->setObjectName(QStringLiteral("rightSecDialog"));
        rightSecDialog->resize(400, 300);
        layoutWidget = new QWidget(rightSecDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 120, 230, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        rightSecYes = new QPushButton(layoutWidget);
        rightSecYes->setObjectName(QStringLiteral("rightSecYes"));

        horizontalLayout->addWidget(rightSecYes);

        rightSecNo = new QPushButton(layoutWidget);
        rightSecNo->setObjectName(QStringLiteral("rightSecNo"));

        horizontalLayout->addWidget(rightSecNo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        rightSecDialogLabel = new QLabel(rightSecDialog);
        rightSecDialogLabel->setObjectName(QStringLiteral("rightSecDialogLabel"));
        rightSecDialogLabel->setGeometry(QRect(0, 60, 401, 20));
        QFont font;
        font.setPointSize(10);
        rightSecDialogLabel->setFont(font);
        rightSecDialogLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(rightSecDialog);

        QMetaObject::connectSlotsByName(rightSecDialog);
    } // setupUi

    void retranslateUi(QDialog *rightSecDialog)
    {
        rightSecDialog->setWindowTitle(QApplication::translate("rightSecDialog", "Dialog", nullptr));
        rightSecYes->setText(QApplication::translate("rightSecDialog", "Yes", nullptr));
        rightSecNo->setText(QApplication::translate("rightSecDialog", "No", nullptr));
        rightSecDialogLabel->setText(QApplication::translate("rightSecDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rightSecDialog: public Ui_rightSecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTSECDIALOG_H
