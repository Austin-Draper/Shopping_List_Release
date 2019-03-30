/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *loginSubmit;
    QSplitter *splitter_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSplitter *splitter;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QPushButton *registerButton;
    QPushButton *unregisterButton;
    QWidget *page_2;
    QLabel *welcomeLabel;
    QLabel *label_2;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *homeLogout;
    QPushButton *homeClearButton;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *homeAddItemLineEdit;
    QPushButton *homeAddButton;
    QPushButton *homeSubmitButton;
    QWidget *page_3;
    QPushButton *regBackButton;
    QPushButton *regRegisterButton;
    QSplitter *splitter_4;
    QLabel *regUsernameLabel;
    QLineEdit *regUsernameLineEdit;
    QSplitter *splitter_5;
    QLabel *regEmailLabel;
    QLineEdit *regEmailLineEdit;
    QSplitter *splitter_6;
    QLabel *regPasswordLabel;
    QLineEdit *regPasswordLineEdit;
    QSplitter *splitter_7;
    QLabel *regPhoneLabel;
    QLineEdit *regPhoneLineEdit;
    QWidget *page_4;
    QSplitter *splitter_8;
    QLabel *unregisterEmailLabel;
    QLineEdit *unregisterEmailLineEdit;
    QPushButton *unregisterBackButton;
    QPushButton *unregisterUnregisterButton;
    QSplitter *splitter_3;
    QLabel *unregisterPasswordLabel;
    QLineEdit *unregisterPasswordLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(691, 601);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 691, 601));
        stackedWidget->setMaximumSize(QSize(691, 601));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        loginSubmit = new QPushButton(page);
        loginSubmit->setObjectName(QStringLiteral("loginSubmit"));
        loginSubmit->setGeometry(QRect(370, 240, 111, 41));
        loginSubmit->setAutoFillBackground(false);
        splitter_2 = new QSplitter(page);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(170, 170, 318, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        passwordLabel = new QLabel(splitter_2);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setMinimumSize(QSize(0, 31));
        passwordLabel->setMaximumSize(QSize(85, 31));
        QFont font;
        font.setPointSize(14);
        passwordLabel->setFont(font);
        splitter_2->addWidget(passwordLabel);
        passwordLineEdit = new QLineEdit(splitter_2);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setMinimumSize(QSize(0, 31));
        passwordLineEdit->setMaximumSize(QSize(228, 31));
        QFont font1;
        font1.setPointSize(10);
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(passwordLineEdit);
        splitter = new QSplitter(page);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(170, 90, 291, 31));
        splitter->setOrientation(Qt::Horizontal);
        emailLabel = new QLabel(splitter);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        emailLabel->setFont(font2);
        splitter->addWidget(emailLabel);
        emailLineEdit = new QLineEdit(splitter);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setMinimumSize(QSize(228, 31));
        emailLineEdit->setMaximumSize(QSize(228, 31));
        emailLineEdit->setFont(font1);
        splitter->addWidget(emailLineEdit);
        registerButton = new QPushButton(page);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(370, 370, 111, 41));
        registerButton->setMinimumSize(QSize(111, 41));
        registerButton->setMaximumSize(QSize(111, 41));
        unregisterButton = new QPushButton(page);
        unregisterButton->setObjectName(QStringLiteral("unregisterButton"));
        unregisterButton->setGeometry(QRect(170, 370, 111, 41));
        unregisterButton->setMinimumSize(QSize(111, 41));
        unregisterButton->setMaximumSize(QSize(111, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        welcomeLabel = new QLabel(page_2);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(0, 0, 231, 16));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 60, 47, 23));
        label_2->setFont(font);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 60, 121, 23));
        label_3->setFont(font);
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 110, 671, 491));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 652, 489));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 326, 491));
        listWidget_2 = new QListWidget(scrollAreaWidgetContents_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(330, 0, 321, 491));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        homeLogout = new QPushButton(page_2);
        homeLogout->setObjectName(QStringLiteral("homeLogout"));
        homeLogout->setGeometry(QRect(470, 0, 75, 23));
        homeClearButton = new QPushButton(page_2);
        homeClearButton->setObjectName(QStringLiteral("homeClearButton"));
        homeClearButton->setGeometry(QRect(480, 90, 75, 23));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 40, 85, 21));
        label->setFont(font);
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 40, 216, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeAddItemLineEdit = new QLineEdit(layoutWidget);
        homeAddItemLineEdit->setObjectName(QStringLiteral("homeAddItemLineEdit"));

        horizontalLayout->addWidget(homeAddItemLineEdit);

        homeAddButton = new QPushButton(layoutWidget);
        homeAddButton->setObjectName(QStringLiteral("homeAddButton"));

        horizontalLayout->addWidget(homeAddButton);

        homeSubmitButton = new QPushButton(page_2);
        homeSubmitButton->setObjectName(QStringLiteral("homeSubmitButton"));
        homeSubmitButton->setGeometry(QRect(570, 90, 75, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        regBackButton = new QPushButton(page_3);
        regBackButton->setObjectName(QStringLiteral("regBackButton"));
        regBackButton->setGeometry(QRect(170, 360, 111, 41));
        regBackButton->setMinimumSize(QSize(111, 41));
        regBackButton->setMaximumSize(QSize(111, 41));
        regRegisterButton = new QPushButton(page_3);
        regRegisterButton->setObjectName(QStringLiteral("regRegisterButton"));
        regRegisterButton->setGeometry(QRect(380, 360, 111, 41));
        regRegisterButton->setMinimumSize(QSize(111, 41));
        regRegisterButton->setMaximumSize(QSize(111, 41));
        splitter_4 = new QSplitter(page_3);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(170, 160, 331, 31));
        splitter_4->setOrientation(Qt::Horizontal);
        regUsernameLabel = new QLabel(splitter_4);
        regUsernameLabel->setObjectName(QStringLiteral("regUsernameLabel"));
        regUsernameLabel->setFont(font);
        splitter_4->addWidget(regUsernameLabel);
        regUsernameLineEdit = new QLineEdit(splitter_4);
        regUsernameLineEdit->setObjectName(QStringLiteral("regUsernameLineEdit"));
        regUsernameLineEdit->setMinimumSize(QSize(228, 31));
        regUsernameLineEdit->setMaximumSize(QSize(228, 31));
        regUsernameLineEdit->setFont(font1);
        splitter_4->addWidget(regUsernameLineEdit);
        splitter_5 = new QSplitter(page_3);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(170, 100, 291, 31));
        splitter_5->setOrientation(Qt::Horizontal);
        regEmailLabel = new QLabel(splitter_5);
        regEmailLabel->setObjectName(QStringLiteral("regEmailLabel"));
        regEmailLabel->setFont(font);
        splitter_5->addWidget(regEmailLabel);
        regEmailLineEdit = new QLineEdit(splitter_5);
        regEmailLineEdit->setObjectName(QStringLiteral("regEmailLineEdit"));
        regEmailLineEdit->setMinimumSize(QSize(228, 31));
        regEmailLineEdit->setMaximumSize(QSize(228, 31));
        regEmailLineEdit->setFont(font1);
        splitter_5->addWidget(regEmailLineEdit);
        splitter_6 = new QSplitter(page_3);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(170, 220, 321, 31));
        splitter_6->setOrientation(Qt::Horizontal);
        regPasswordLabel = new QLabel(splitter_6);
        regPasswordLabel->setObjectName(QStringLiteral("regPasswordLabel"));
        regPasswordLabel->setFont(font);
        splitter_6->addWidget(regPasswordLabel);
        regPasswordLineEdit = new QLineEdit(splitter_6);
        regPasswordLineEdit->setObjectName(QStringLiteral("regPasswordLineEdit"));
        regPasswordLineEdit->setMinimumSize(QSize(228, 31));
        regPasswordLineEdit->setMaximumSize(QSize(228, 31));
        regPasswordLineEdit->setFont(font1);
        regPasswordLineEdit->setEchoMode(QLineEdit::Password);
        splitter_6->addWidget(regPasswordLineEdit);
        splitter_7 = new QSplitter(page_3);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(170, 280, 311, 31));
        splitter_7->setOrientation(Qt::Horizontal);
        regPhoneLabel = new QLabel(splitter_7);
        regPhoneLabel->setObjectName(QStringLiteral("regPhoneLabel"));
        regPhoneLabel->setFont(font);
        splitter_7->addWidget(regPhoneLabel);
        regPhoneLineEdit = new QLineEdit(splitter_7);
        regPhoneLineEdit->setObjectName(QStringLiteral("regPhoneLineEdit"));
        regPhoneLineEdit->setMinimumSize(QSize(228, 31));
        regPhoneLineEdit->setMaximumSize(QSize(228, 31));
        regPhoneLineEdit->setFont(font1);
        splitter_7->addWidget(regPhoneLineEdit);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        splitter_8 = new QSplitter(page_4);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setGeometry(QRect(160, 90, 291, 31));
        splitter_8->setOrientation(Qt::Horizontal);
        unregisterEmailLabel = new QLabel(splitter_8);
        unregisterEmailLabel->setObjectName(QStringLiteral("unregisterEmailLabel"));
        unregisterEmailLabel->setFont(font);
        splitter_8->addWidget(unregisterEmailLabel);
        unregisterEmailLineEdit = new QLineEdit(splitter_8);
        unregisterEmailLineEdit->setObjectName(QStringLiteral("unregisterEmailLineEdit"));
        unregisterEmailLineEdit->setMinimumSize(QSize(228, 31));
        unregisterEmailLineEdit->setMaximumSize(QSize(228, 31));
        unregisterEmailLineEdit->setFont(font1);
        splitter_8->addWidget(unregisterEmailLineEdit);
        unregisterBackButton = new QPushButton(page_4);
        unregisterBackButton->setObjectName(QStringLiteral("unregisterBackButton"));
        unregisterBackButton->setGeometry(QRect(160, 300, 111, 41));
        unregisterBackButton->setMinimumSize(QSize(111, 41));
        unregisterBackButton->setMaximumSize(QSize(111, 41));
        unregisterUnregisterButton = new QPushButton(page_4);
        unregisterUnregisterButton->setObjectName(QStringLiteral("unregisterUnregisterButton"));
        unregisterUnregisterButton->setGeometry(QRect(390, 300, 111, 41));
        unregisterUnregisterButton->setMinimumSize(QSize(111, 41));
        unregisterUnregisterButton->setMaximumSize(QSize(111, 41));
        splitter_3 = new QSplitter(page_4);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(160, 180, 321, 31));
        splitter_3->setOrientation(Qt::Horizontal);
        unregisterPasswordLabel = new QLabel(splitter_3);
        unregisterPasswordLabel->setObjectName(QStringLiteral("unregisterPasswordLabel"));
        unregisterPasswordLabel->setFont(font);
        splitter_3->addWidget(unregisterPasswordLabel);
        unregisterPasswordLineEdit = new QLineEdit(splitter_3);
        unregisterPasswordLineEdit->setObjectName(QStringLiteral("unregisterPasswordLineEdit"));
        unregisterPasswordLineEdit->setMinimumSize(QSize(228, 31));
        unregisterPasswordLineEdit->setMaximumSize(QSize(228, 31));
        unregisterPasswordLineEdit->setFont(font1);
        unregisterPasswordLineEdit->setEchoMode(QLineEdit::Password);
        splitter_3->addWidget(unregisterPasswordLineEdit);
        stackedWidget->addWidget(page_4);
        QWidget::setTabOrder(emailLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, loginSubmit);
        QWidget::setTabOrder(loginSubmit, unregisterButton);
        QWidget::setTabOrder(unregisterButton, registerButton);
        QWidget::setTabOrder(registerButton, regBackButton);
        QWidget::setTabOrder(regBackButton, regRegisterButton);
        QWidget::setTabOrder(regRegisterButton, regEmailLineEdit);
        QWidget::setTabOrder(regEmailLineEdit, regUsernameLineEdit);
        QWidget::setTabOrder(regUsernameLineEdit, regPasswordLineEdit);
        QWidget::setTabOrder(regPasswordLineEdit, regPhoneLineEdit);
        QWidget::setTabOrder(regPhoneLineEdit, unregisterBackButton);
        QWidget::setTabOrder(unregisterBackButton, unregisterUnregisterButton);
        QWidget::setTabOrder(unregisterUnregisterButton, unregisterEmailLineEdit);
        QWidget::setTabOrder(unregisterEmailLineEdit, unregisterPasswordLineEdit);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        loginSubmit->setText(QApplication::translate("Widget", "Login", nullptr));
        passwordLabel->setText(QApplication::translate("Widget", "Password:", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QApplication::translate("Widget", "5 or more characters", nullptr));
        emailLabel->setText(QApplication::translate("Widget", "Email:", nullptr));
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QApplication::translate("Widget", "sample@gmail.com", nullptr));
        registerButton->setText(QApplication::translate("Widget", "Register", nullptr));
        unregisterButton->setText(QApplication::translate("Widget", "Unregister", nullptr));
        welcomeLabel->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Widget", "Items", nullptr));
        label_3->setText(QApplication::translate("Widget", "Shopping List", nullptr));
        homeLogout->setText(QApplication::translate("Widget", "Logout", nullptr));
        homeClearButton->setText(QApplication::translate("Widget", "Clear", nullptr));
        label->setText(QApplication::translate("Widget", "Add Item:", nullptr));
        homeAddButton->setText(QApplication::translate("Widget", "Add", nullptr));
        homeSubmitButton->setText(QApplication::translate("Widget", "Submit", nullptr));
        regBackButton->setText(QApplication::translate("Widget", "Back", nullptr));
        regRegisterButton->setText(QApplication::translate("Widget", "Register", nullptr));
        regUsernameLabel->setText(QApplication::translate("Widget", "Username:", nullptr));
        regUsernameLineEdit->setPlaceholderText(QApplication::translate("Widget", "Anything", nullptr));
        regEmailLabel->setText(QApplication::translate("Widget", "Email:", nullptr));
        regEmailLineEdit->setPlaceholderText(QApplication::translate("Widget", "sample@gmail.com", nullptr));
        regPasswordLabel->setText(QApplication::translate("Widget", "Password:", nullptr));
        regPasswordLineEdit->setPlaceholderText(QApplication::translate("Widget", "5 characters or more", nullptr));
        regPhoneLabel->setText(QApplication::translate("Widget", "Phone#:", nullptr));
        regPhoneLineEdit->setPlaceholderText(QApplication::translate("Widget", "714-123-4567", nullptr));
        unregisterEmailLabel->setText(QApplication::translate("Widget", "Email:", nullptr));
        unregisterEmailLineEdit->setPlaceholderText(QApplication::translate("Widget", "sample@gmail.com", nullptr));
        unregisterBackButton->setText(QApplication::translate("Widget", "Back", nullptr));
        unregisterUnregisterButton->setText(QApplication::translate("Widget", "Unregister", nullptr));
        unregisterPasswordLabel->setText(QApplication::translate("Widget", "Password:", nullptr));
        unregisterPasswordLineEdit->setPlaceholderText(QApplication::translate("Widget", "5 characters or more", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
