/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
//#include "radioscreen.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutSelection;
    QPushButton *pushButtonSettings;
    QPushButton *pushButtonRadio;
    QPushButton *pushButtonAlarm;
    QPushButton *pushButtonMusicPlayer;
    QPushButton *pushButtonPower;
    QStackedWidget *stackedWidget;
//    RadioScreen *page;
    QWidget *page_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 320);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 481, 106));
        gridLayoutSelection = new QGridLayout(gridLayoutWidget);
        gridLayoutSelection->setSpacing(6);
        gridLayoutSelection->setContentsMargins(11, 11, 11, 11);
        gridLayoutSelection->setObjectName(QStringLiteral("gridLayoutSelection"));
        gridLayoutSelection->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayoutSelection->setHorizontalSpacing(1);
        gridLayoutSelection->setVerticalSpacing(6);
        gridLayoutSelection->setContentsMargins(0, 0, 0, 0);
        pushButtonSettings = new QPushButton(gridLayoutWidget);
        pushButtonSettings->setObjectName(QStringLiteral("pushButtonSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSettings->sizePolicy().hasHeightForWidth());
        pushButtonSettings->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("../Downloads/Settings_black-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSettings->setIcon(icon);
        pushButtonSettings->setIconSize(QSize(60, 60));

        gridLayoutSelection->addWidget(pushButtonSettings, 0, 3, 1, 1);

        pushButtonRadio = new QPushButton(gridLayoutWidget);
        pushButtonRadio->setObjectName(QStringLiteral("pushButtonRadio"));
        sizePolicy.setHeightForWidth(pushButtonRadio->sizePolicy().hasHeightForWidth());
        pushButtonRadio->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Downloads/45-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRadio->setIcon(icon1);
        pushButtonRadio->setIconSize(QSize(60, 60));

        gridLayoutSelection->addWidget(pushButtonRadio, 0, 1, 1, 1);

        pushButtonAlarm = new QPushButton(gridLayoutWidget);
        pushButtonAlarm->setObjectName(QStringLiteral("pushButtonAlarm"));
        sizePolicy.setHeightForWidth(pushButtonAlarm->sizePolicy().hasHeightForWidth());
        pushButtonAlarm->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Downloads/alarm-clock.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAlarm->setIcon(icon2);
        pushButtonAlarm->setIconSize(QSize(60, 60));

        gridLayoutSelection->addWidget(pushButtonAlarm, 0, 2, 1, 1);

        pushButtonMusicPlayer = new QPushButton(gridLayoutWidget);
        pushButtonMusicPlayer->setObjectName(QStringLiteral("pushButtonMusicPlayer"));
        sizePolicy.setHeightForWidth(pushButtonMusicPlayer->sizePolicy().hasHeightForWidth());
        pushButtonMusicPlayer->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Downloads/181668.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMusicPlayer->setIcon(icon3);
        pushButtonMusicPlayer->setIconSize(QSize(60, 60));

        gridLayoutSelection->addWidget(pushButtonMusicPlayer, 0, 0, 1, 1);

        pushButtonPower = new QPushButton(gridLayoutWidget);
        pushButtonPower->setObjectName(QStringLiteral("pushButtonPower"));
        sizePolicy.setHeightForWidth(pushButtonPower->sizePolicy().hasHeightForWidth());
        pushButtonPower->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Downloads/power_on-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPower->setIcon(icon4);
        pushButtonPower->setIconSize(QSize(60, 60));

        gridLayoutSelection->addWidget(pushButtonPower, 0, 4, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 110, 481, 211));
//        page = new RadioScreen();
//        page->setObjectName(QStringLiteral("page"));
//        page->setEnabled(true);
//        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButtonSettings->setText(QString());
        pushButtonRadio->setText(QString());
        pushButtonAlarm->setText(QString());
        pushButtonMusicPlayer->setText(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        pushButtonPower->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
