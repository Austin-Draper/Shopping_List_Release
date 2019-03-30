/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *secYes;
    QPushButton *secNo;
    QSpacerItem *verticalSpacer;
    QLabel *secDialogLabel;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QStringLiteral("secDialog"));
        secDialog->resize(400, 300);
        layoutWidget = new QWidget(secDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 110, 230, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        secYes = new QPushButton(layoutWidget);
        secYes->setObjectName(QStringLiteral("secYes"));

        horizontalLayout->addWidget(secYes);

        secNo = new QPushButton(layoutWidget);
        secNo->setObjectName(QStringLiteral("secNo"));

        horizontalLayout->addWidget(secNo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        secDialogLabel = new QLabel(secDialog);
        secDialogLabel->setObjectName(QStringLiteral("secDialogLabel"));
        secDialogLabel->setGeometry(QRect(0, 40, 401, 20));
        QFont font;
        font.setPointSize(10);
        secDialogLabel->setFont(font);
        secDialogLabel->setScaledContents(false);
        secDialogLabel->setAlignment(Qt::AlignCenter);
        secDialogLabel->setWordWrap(true);

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QApplication::translate("secDialog", "Dialog", nullptr));
        secYes->setText(QApplication::translate("secDialog", "Yes", nullptr));
        secNo->setText(QApplication::translate("secDialog", "No", nullptr));
        secDialogLabel->setText(QApplication::translate("secDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
