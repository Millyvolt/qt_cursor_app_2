/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *headerCard;
    QVBoxLayout *headerLayout;
    QLabel *titleLabel;
    QLabel *subtitleLabel;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *verticalLayout_2;
    QFrame *card1;
    QVBoxLayout *card1Layout;
    QLabel *description1;
    QPushButton *pushButton1_1;
    QPushButton *pushButton1_2;
    QPushButton *pushButton1_3;
    QSpacerItem *verticalSpacer;
    QWidget *tab2;
    QVBoxLayout *verticalLayout_3;
    QFrame *card2;
    QVBoxLayout *card2Layout;
    QLabel *description2;
    QPushButton *pushButton2_1;
    QPushButton *pushButton2_2;
    QPushButton *pushButton2_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab3;
    QVBoxLayout *verticalLayout_4;
    QFrame *card3;
    QVBoxLayout *card3Layout;
    QLabel *description3;
    QPushButton *pushButton3_1;
    QPushButton *pushButton3_2;
    QPushButton *pushButton3_3;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 772);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        headerCard = new QFrame(centralwidget);
        headerCard->setObjectName(QString::fromUtf8("headerCard"));
        headerLayout = new QVBoxLayout(headerCard);
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        titleLabel = new QLabel(headerCard);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setAlignment(Qt::AlignCenter);

        headerLayout->addWidget(titleLabel);

        subtitleLabel = new QLabel(headerCard);
        subtitleLabel->setObjectName(QString::fromUtf8("subtitleLabel"));
        subtitleLabel->setAlignment(Qt::AlignCenter);
        subtitleLabel->setWordWrap(true);

        headerLayout->addWidget(subtitleLabel);


        verticalLayout->addWidget(headerCard);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        verticalLayout_2 = new QVBoxLayout(tab1);
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        card1 = new QFrame(tab1);
        card1->setObjectName(QString::fromUtf8("card1"));
        card1Layout = new QVBoxLayout(card1);
        card1Layout->setObjectName(QString::fromUtf8("card1Layout"));
        description1 = new QLabel(card1);
        description1->setObjectName(QString::fromUtf8("description1"));
        description1->setAlignment(Qt::AlignCenter);
        description1->setWordWrap(true);

        card1Layout->addWidget(description1);

        pushButton1_1 = new QPushButton(card1);
        pushButton1_1->setObjectName(QString::fromUtf8("pushButton1_1"));

        card1Layout->addWidget(pushButton1_1);

        pushButton1_2 = new QPushButton(card1);
        pushButton1_2->setObjectName(QString::fromUtf8("pushButton1_2"));

        card1Layout->addWidget(pushButton1_2);

        pushButton1_3 = new QPushButton(card1);
        pushButton1_3->setObjectName(QString::fromUtf8("pushButton1_3"));

        card1Layout->addWidget(pushButton1_3);


        verticalLayout_2->addWidget(card1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout_3 = new QVBoxLayout(tab2);
        verticalLayout_3->setSpacing(16);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        card2 = new QFrame(tab2);
        card2->setObjectName(QString::fromUtf8("card2"));
        card2Layout = new QVBoxLayout(card2);
        card2Layout->setObjectName(QString::fromUtf8("card2Layout"));
        description2 = new QLabel(card2);
        description2->setObjectName(QString::fromUtf8("description2"));
        description2->setAlignment(Qt::AlignCenter);
        description2->setWordWrap(true);

        card2Layout->addWidget(description2);

        pushButton2_1 = new QPushButton(card2);
        pushButton2_1->setObjectName(QString::fromUtf8("pushButton2_1"));

        card2Layout->addWidget(pushButton2_1);

        pushButton2_2 = new QPushButton(card2);
        pushButton2_2->setObjectName(QString::fromUtf8("pushButton2_2"));

        card2Layout->addWidget(pushButton2_2);

        pushButton2_3 = new QPushButton(card2);
        pushButton2_3->setObjectName(QString::fromUtf8("pushButton2_3"));

        card2Layout->addWidget(pushButton2_3);


        verticalLayout_3->addWidget(card2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        verticalLayout_4 = new QVBoxLayout(tab3);
        verticalLayout_4->setSpacing(16);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        card3 = new QFrame(tab3);
        card3->setObjectName(QString::fromUtf8("card3"));
        card3Layout = new QVBoxLayout(card3);
        card3Layout->setObjectName(QString::fromUtf8("card3Layout"));
        description3 = new QLabel(card3);
        description3->setObjectName(QString::fromUtf8("description3"));
        description3->setAlignment(Qt::AlignCenter);
        description3->setWordWrap(true);

        card3Layout->addWidget(description3);

        pushButton3_1 = new QPushButton(card3);
        pushButton3_1->setObjectName(QString::fromUtf8("pushButton3_1"));

        card3Layout->addWidget(pushButton3_1);

        pushButton3_2 = new QPushButton(card3);
        pushButton3_2->setObjectName(QString::fromUtf8("pushButton3_2"));

        card3Layout->addWidget(pushButton3_2);

        pushButton3_3 = new QPushButton(card3);
        pushButton3_3->setObjectName(QString::fromUtf8("pushButton3_3"));

        card3Layout->addWidget(pushButton3_3);


        verticalLayout_4->addWidget(card3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab3, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setVisible(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setVisible(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "iOS Style Qt Application", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "App Dashboard", nullptr));
        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Navigate through different app sections", nullptr));
        description1->setText(QCoreApplication::translate("MainWindow", "Essential system apps and settings", nullptr));
        pushButton1_1->setText(QCoreApplication::translate("MainWindow", "\360\237\223\261 Settings", nullptr));
        pushButton1_2->setText(QCoreApplication::translate("MainWindow", "\360\237\223\247 Messages", nullptr));
        pushButton1_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\236 Phone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "Home", nullptr));
        description2->setText(QCoreApplication::translate("MainWindow", "Entertainment and media applications", nullptr));
        pushButton2_1->setText(QCoreApplication::translate("MainWindow", "\360\237\216\265 Music", nullptr));
        pushButton2_2->setText(QCoreApplication::translate("MainWindow", "\360\237\223\267 Camera", nullptr));
        pushButton2_3->setText(QCoreApplication::translate("MainWindow", "\360\237\214\220 Safari", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "Apps", nullptr));
        description3->setText(QCoreApplication::translate("MainWindow", "Utility and productivity tools", nullptr));
        pushButton3_1->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Calculator", nullptr));
        pushButton3_2->setText(QCoreApplication::translate("MainWindow", "\342\217\260 Clock", nullptr));
        pushButton3_3->setText(QCoreApplication::translate("MainWindow", "\360\237\227\202\357\270\217 Files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
