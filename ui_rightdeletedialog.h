/********************************************************************************
** Form generated from reading UI file 'rightdeletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTDELETEDIALOG_H
#define UI_RIGHTDELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rightdeletedialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *rightDeleteYes;
    QPushButton *rightDeleteNo;
    QSpacerItem *verticalSpacer;
    QLabel *rightDeleteLabel;

    void setupUi(QDialog *rightdeletedialog)
    {
        if (rightdeletedialog->objectName().isEmpty())
            rightdeletedialog->setObjectName(QStringLiteral("rightdeletedialog"));
        rightdeletedialog->resize(400, 300);
        layoutWidget = new QWidget(rightdeletedialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 140, 230, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        rightDeleteYes = new QPushButton(layoutWidget);
        rightDeleteYes->setObjectName(QStringLiteral("rightDeleteYes"));

        horizontalLayout->addWidget(rightDeleteYes);

        rightDeleteNo = new QPushButton(layoutWidget);
        rightDeleteNo->setObjectName(QStringLiteral("rightDeleteNo"));

        horizontalLayout->addWidget(rightDeleteNo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        rightDeleteLabel = new QLabel(rightdeletedialog);
        rightDeleteLabel->setObjectName(QStringLiteral("rightDeleteLabel"));
        rightDeleteLabel->setGeometry(QRect(50, 60, 300, 16));
        rightDeleteLabel->setMinimumSize(QSize(291, 16));
        rightDeleteLabel->setMaximumSize(QSize(300, 16));
        QFont font;
        font.setPointSize(10);
        rightDeleteLabel->setFont(font);

        retranslateUi(rightdeletedialog);

        QMetaObject::connectSlotsByName(rightdeletedialog);
    } // setupUi

    void retranslateUi(QDialog *rightdeletedialog)
    {
        rightdeletedialog->setWindowTitle(QApplication::translate("rightdeletedialog", "Dialog", nullptr));
        rightDeleteYes->setText(QApplication::translate("rightdeletedialog", "Yes", nullptr));
        rightDeleteNo->setText(QApplication::translate("rightdeletedialog", "No", nullptr));
        rightDeleteLabel->setText(QApplication::translate("rightdeletedialog", "Are you sure you want to delete your shopping list?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rightdeletedialog: public Ui_rightdeletedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTDELETEDIALOG_H
