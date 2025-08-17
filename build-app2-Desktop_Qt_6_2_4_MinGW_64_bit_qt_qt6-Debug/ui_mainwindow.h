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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *tab6;
    QTabWidget *tabWidget_4;
    QWidget *tab_analogue;
    QVBoxLayout *verticalLayout_analogue;
    QFrame *card_analogue;
    QVBoxLayout *card_analogueLayout;
    QLabel *description_analogue;
    QPushButton *pushButton_analogue_1;
    QPushButton *pushButton_analogue_2;
    QPushButton *pushButton_analogue_3;
    QSpacerItem *verticalSpacer_analogue;
    QWidget *tab_digital;
    QVBoxLayout *verticalLayout_digital;
    QFrame *card_digital;
    QVBoxLayout *card_digitalLayout;
    QLabel *description_digital;
    QPushButton *pushButton_digital_1;
    QPushButton *pushButton_digital_2;
    QPushButton *pushButton_digital_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tab7;
    QVBoxLayout *verticalLayout_6;
    QFrame *card7;
    QVBoxLayout *card7Layout;
    QLabel *description7;
    QPushButton *pushButton7_1;
    QPushButton *pushButton7_2;
    QPushButton *pushButton7_3;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 1000);
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
        tab6 = new QWidget();
        tab6->setObjectName(QString::fromUtf8("tab6"));
        tabWidget_4 = new QTabWidget(tab6);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 760, 900));
        tab_analogue = new QWidget();
        tab_analogue->setObjectName(QString::fromUtf8("tab_analogue"));
        verticalLayout_analogue = new QVBoxLayout(tab_analogue);
        verticalLayout_analogue->setSpacing(16);
        verticalLayout_analogue->setObjectName(QString::fromUtf8("verticalLayout_analogue"));
        verticalLayout_analogue->setContentsMargins(20, 20, 20, 20);
        card_analogue = new QFrame(tab_analogue);
        card_analogue->setObjectName(QString::fromUtf8("card_analogue"));
        card_analogueLayout = new QVBoxLayout(card_analogue);
        card_analogueLayout->setObjectName(QString::fromUtf8("card_analogueLayout"));
        description_analogue = new QLabel(card_analogue);
        description_analogue->setObjectName(QString::fromUtf8("description_analogue"));
        description_analogue->setAlignment(Qt::AlignCenter);
        description_analogue->setWordWrap(true);

        card_analogueLayout->addWidget(description_analogue);

        pushButton_analogue_1 = new QPushButton(card_analogue);
        pushButton_analogue_1->setObjectName(QString::fromUtf8("pushButton_analogue_1"));

        card_analogueLayout->addWidget(pushButton_analogue_1);

        pushButton_analogue_2 = new QPushButton(card_analogue);
        pushButton_analogue_2->setObjectName(QString::fromUtf8("pushButton_analogue_2"));

        card_analogueLayout->addWidget(pushButton_analogue_2);

        pushButton_analogue_3 = new QPushButton(card_analogue);
        pushButton_analogue_3->setObjectName(QString::fromUtf8("pushButton_analogue_3"));

        card_analogueLayout->addWidget(pushButton_analogue_3);


        verticalLayout_analogue->addWidget(card_analogue);

        verticalSpacer_analogue = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_analogue->addItem(verticalSpacer_analogue);

        tabWidget_4->addTab(tab_analogue, QString());
        tab_digital = new QWidget();
        tab_digital->setObjectName(QString::fromUtf8("tab_digital"));
        verticalLayout_digital = new QVBoxLayout(tab_digital);
        verticalLayout_digital->setSpacing(16);
        verticalLayout_digital->setObjectName(QString::fromUtf8("verticalLayout_digital"));
        verticalLayout_digital->setContentsMargins(20, 20, 20, 20);
        card_digital = new QFrame(tab_digital);
        card_digital->setObjectName(QString::fromUtf8("card_digital"));
        card_digitalLayout = new QVBoxLayout(card_digital);
        card_digitalLayout->setObjectName(QString::fromUtf8("card_digitalLayout"));
        description_digital = new QLabel(card_digital);
        description_digital->setObjectName(QString::fromUtf8("description_digital"));
        description_digital->setAlignment(Qt::AlignCenter);
        description_digital->setWordWrap(true);

        card_digitalLayout->addWidget(description_digital);

        pushButton_digital_1 = new QPushButton(card_digital);
        pushButton_digital_1->setObjectName(QString::fromUtf8("pushButton_digital_1"));

        card_digitalLayout->addWidget(pushButton_digital_1);

        pushButton_digital_2 = new QPushButton(card_digital);
        pushButton_digital_2->setObjectName(QString::fromUtf8("pushButton_digital_2"));

        card_digitalLayout->addWidget(pushButton_digital_2);

        pushButton_digital_3 = new QPushButton(card_digital);
        pushButton_digital_3->setObjectName(QString::fromUtf8("pushButton_digital_3"));

        card_digitalLayout->addWidget(pushButton_digital_3);


        verticalLayout_digital->addWidget(card_digital);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tab_digital);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_2 = new QPushButton(tab_digital);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_digital->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_digital);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(tab_digital);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_digital->addLayout(horizontalLayout);

        tabWidget_4->addTab(tab_digital, QString());
        tabWidget->addTab(tab6, QString());
        tab7 = new QWidget();
        tab7->setObjectName(QString::fromUtf8("tab7"));
        verticalLayout_6 = new QVBoxLayout(tab7);
        verticalLayout_6->setSpacing(16);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(20, 20, 20, 20);
        card7 = new QFrame(tab7);
        card7->setObjectName(QString::fromUtf8("card7"));
        card7->setFrameShape(QFrame::NoFrame);
        card7Layout = new QVBoxLayout(card7);
        card7Layout->setObjectName(QString::fromUtf8("card7Layout"));
        description7 = new QLabel(card7);
        description7->setObjectName(QString::fromUtf8("description7"));
        description7->setAlignment(Qt::AlignCenter);
        description7->setWordWrap(true);

        card7Layout->addWidget(description7);

        pushButton7_1 = new QPushButton(card7);
        pushButton7_1->setObjectName(QString::fromUtf8("pushButton7_1"));

        card7Layout->addWidget(pushButton7_1);

        pushButton7_2 = new QPushButton(card7);
        pushButton7_2->setObjectName(QString::fromUtf8("pushButton7_2"));

        card7Layout->addWidget(pushButton7_2);

        pushButton7_3 = new QPushButton(card7);
        pushButton7_3->setObjectName(QString::fromUtf8("pushButton7_3"));

        card7Layout->addWidget(pushButton7_3);


        verticalLayout_6->addWidget(card7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        tabWidget->addTab(tab7, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menubar->setVisible(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setVisible(true);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);
        tabWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "iOS Style Qt Application", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "KMZ Configuration Suite v1.0", nullptr));
        subtitleLabel->setText(QCoreApplication::translate("MainWindow", "Interface friendly to Wasyans", nullptr));
        description1->setText(QCoreApplication::translate("MainWindow", "Essential system apps and settings", nullptr));
        pushButton1_1->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton1_2->setText(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        pushButton1_3->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        description2->setText(QCoreApplication::translate("MainWindow", "Entertainment and media applications", nullptr));
        pushButton2_1->setText(QCoreApplication::translate("MainWindow", "\360\237\216\265 Music", nullptr));
        pushButton2_2->setText(QCoreApplication::translate("MainWindow", "\360\237\223\267 Camera", nullptr));
        pushButton2_3->setText(QCoreApplication::translate("MainWindow", "\360\237\214\220 Safari", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "Generator", nullptr));
        description3->setText(QCoreApplication::translate("MainWindow", "Utility and productivity tools", nullptr));
        pushButton3_1->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Calculator", nullptr));
        pushButton3_2->setText(QCoreApplication::translate("MainWindow", "\342\217\260 Clock", nullptr));
        pushButton3_3->setText(QCoreApplication::translate("MainWindow", "\360\237\227\202\357\270\217 Files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QCoreApplication::translate("MainWindow", "Mains", nullptr));
        description_analogue->setText(QCoreApplication::translate("MainWindow", "Analogue input configuration and monitoring", nullptr));
        pushButton_analogue_1->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Analogue Input 1", nullptr));
        pushButton_analogue_2->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Analogue Input 2", nullptr));
        pushButton_analogue_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 Analogue Input 3", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_analogue), QCoreApplication::translate("MainWindow", "Analogue", nullptr));
        description_digital->setText(QCoreApplication::translate("MainWindow", "Digital input configuration and monitoring", nullptr));
        pushButton_digital_1->setText(QCoreApplication::translate("MainWindow", "\360\237\224\214 Digital Input 1", nullptr));
        pushButton_digital_2->setText(QCoreApplication::translate("MainWindow", "\360\237\224\214 Digital Input 2", nullptr));
        pushButton_digital_3->setText(QCoreApplication::translate("MainWindow", "\360\237\224\214 Digital Input 3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_digital), QCoreApplication::translate("MainWindow", "Digital", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab6), QCoreApplication::translate("MainWindow", "Inputs", nullptr));
        description7->setText(QCoreApplication::translate("MainWindow", "System monitoring and diagnostics", nullptr));
        pushButton7_1->setText(QCoreApplication::translate("MainWindow", "\360\237\223\210 Monitoring", nullptr));
        pushButton7_2->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Diagnostics", nullptr));
        pushButton7_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\213 Reports", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab7), QCoreApplication::translate("MainWindow", "Outputs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
