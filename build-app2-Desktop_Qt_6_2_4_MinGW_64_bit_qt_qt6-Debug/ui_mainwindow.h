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
#include <QtWidgets/QComboBox>
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
    QFrame *ios_row_input;
    QHBoxLayout *ios_row_input_layout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_input;
    QSpacerItem *horizontalSpacer_input;
    QComboBox *comboBox_input;
    QSpacerItem *horizontalSpacer;
    QFrame *ios_separator1;
    QFrame *ios_row_function;
    QHBoxLayout *ios_row_function_layout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_function;
    QSpacerItem *horizontalSpacer_function;
    QComboBox *comboBox_function;
    QSpacerItem *horizontalSpacer_4;
    QFrame *ios_separator2;
    QFrame *ios_row_polarity;
    QHBoxLayout *ios_row_polarity_layout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_polarity;
    QSpacerItem *horizontalSpacer_polarity;
    QComboBox *comboBox_polarity;
    QSpacerItem *horizontalSpacer_6;
    QFrame *ios_separator3;
    QFrame *ios_row_action;
    QHBoxLayout *ios_row_action_layout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_action;
    QSpacerItem *horizontalSpacer_action;
    QComboBox *comboBox_action;
    QSpacerItem *horizontalSpacer_11;
    QFrame *ios_separator4;
    QFrame *ios_row_arming;
    QHBoxLayout *ios_row_arming_layout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_arming;
    QSpacerItem *horizontalSpacer_arming;
    QComboBox *comboBox_arming;
    QSpacerItem *horizontalSpacer_12;
    QFrame *ios_separator5;
    QFrame *ios_row_lcd;
    QHBoxLayout *ios_row_lcd_layout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_lcd;
    QSpacerItem *horizontalSpacer_lcd;
    QComboBox *comboBox_lcd;
    QSpacerItem *horizontalSpacer_13;
    QFrame *ios_separator6;
    QFrame *ios_row_delay;
    QHBoxLayout *ios_row_delay_layout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_delay;
    QSpacerItem *horizontalSpacer_delay;
    QComboBox *comboBox_delay;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_digital;
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
        card_digitalLayout->setSpacing(0);
        card_digitalLayout->setObjectName(QString::fromUtf8("card_digitalLayout"));
        card_digitalLayout->setContentsMargins(0, 0, 0, 0);
        ios_row_input = new QFrame(card_digital);
        ios_row_input->setObjectName(QString::fromUtf8("ios_row_input"));
        ios_row_input_layout = new QHBoxLayout(ios_row_input);
        ios_row_input_layout->setObjectName(QString::fromUtf8("ios_row_input_layout"));
        ios_row_input_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_input_layout->addItem(horizontalSpacer_2);

        label_input = new QLabel(ios_row_input);
        label_input->setObjectName(QString::fromUtf8("label_input"));

        ios_row_input_layout->addWidget(label_input);

        horizontalSpacer_input = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_input_layout->addItem(horizontalSpacer_input);

        comboBox_input = new QComboBox(ios_row_input);
        comboBox_input->addItem(QString());
        comboBox_input->addItem(QString());
        comboBox_input->addItem(QString());
        comboBox_input->setObjectName(QString::fromUtf8("comboBox_input"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_input->sizePolicy().hasHeightForWidth());
        comboBox_input->setSizePolicy(sizePolicy);
        comboBox_input->setMinimumSize(QSize(150, 0));
        comboBox_input->setFrame(true);

        ios_row_input_layout->addWidget(comboBox_input);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_input_layout->addItem(horizontalSpacer);


        card_digitalLayout->addWidget(ios_row_input);

        ios_separator1 = new QFrame(card_digital);
        ios_separator1->setObjectName(QString::fromUtf8("ios_separator1"));
        ios_separator1->setFrameShape(QFrame::HLine);
        ios_separator1->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator1);

        ios_row_function = new QFrame(card_digital);
        ios_row_function->setObjectName(QString::fromUtf8("ios_row_function"));
        ios_row_function_layout = new QHBoxLayout(ios_row_function);
        ios_row_function_layout->setObjectName(QString::fromUtf8("ios_row_function_layout"));
        ios_row_function_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_function_layout->addItem(horizontalSpacer_3);

        label_function = new QLabel(ios_row_function);
        label_function->setObjectName(QString::fromUtf8("label_function"));

        ios_row_function_layout->addWidget(label_function);

        horizontalSpacer_function = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_function_layout->addItem(horizontalSpacer_function);

        comboBox_function = new QComboBox(ios_row_function);
        comboBox_function->addItem(QString());
        comboBox_function->addItem(QString());
        comboBox_function->addItem(QString());
        comboBox_function->addItem(QString());
        comboBox_function->setObjectName(QString::fromUtf8("comboBox_function"));
        sizePolicy.setHeightForWidth(comboBox_function->sizePolicy().hasHeightForWidth());
        comboBox_function->setSizePolicy(sizePolicy);
        comboBox_function->setMinimumSize(QSize(150, 0));

        ios_row_function_layout->addWidget(comboBox_function);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_function_layout->addItem(horizontalSpacer_4);


        card_digitalLayout->addWidget(ios_row_function);

        ios_separator2 = new QFrame(card_digital);
        ios_separator2->setObjectName(QString::fromUtf8("ios_separator2"));
        ios_separator2->setFrameShape(QFrame::HLine);
        ios_separator2->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator2);

        ios_row_polarity = new QFrame(card_digital);
        ios_row_polarity->setObjectName(QString::fromUtf8("ios_row_polarity"));
        ios_row_polarity_layout = new QHBoxLayout(ios_row_polarity);
        ios_row_polarity_layout->setObjectName(QString::fromUtf8("ios_row_polarity_layout"));
        ios_row_polarity_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_polarity_layout->addItem(horizontalSpacer_5);

        label_polarity = new QLabel(ios_row_polarity);
        label_polarity->setObjectName(QString::fromUtf8("label_polarity"));

        ios_row_polarity_layout->addWidget(label_polarity);

        horizontalSpacer_polarity = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_polarity_layout->addItem(horizontalSpacer_polarity);

        comboBox_polarity = new QComboBox(ios_row_polarity);
        comboBox_polarity->addItem(QString());
        comboBox_polarity->addItem(QString());
        comboBox_polarity->setObjectName(QString::fromUtf8("comboBox_polarity"));
        sizePolicy.setHeightForWidth(comboBox_polarity->sizePolicy().hasHeightForWidth());
        comboBox_polarity->setSizePolicy(sizePolicy);
        comboBox_polarity->setMinimumSize(QSize(150, 0));

        ios_row_polarity_layout->addWidget(comboBox_polarity);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_polarity_layout->addItem(horizontalSpacer_6);


        card_digitalLayout->addWidget(ios_row_polarity);

        ios_separator3 = new QFrame(card_digital);
        ios_separator3->setObjectName(QString::fromUtf8("ios_separator3"));
        ios_separator3->setFrameShape(QFrame::HLine);
        ios_separator3->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator3);

        ios_row_action = new QFrame(card_digital);
        ios_row_action->setObjectName(QString::fromUtf8("ios_row_action"));
        ios_row_action_layout = new QHBoxLayout(ios_row_action);
        ios_row_action_layout->setObjectName(QString::fromUtf8("ios_row_action_layout"));
        ios_row_action_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_action_layout->addItem(horizontalSpacer_7);

        label_action = new QLabel(ios_row_action);
        label_action->setObjectName(QString::fromUtf8("label_action"));

        ios_row_action_layout->addWidget(label_action);

        horizontalSpacer_action = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_action_layout->addItem(horizontalSpacer_action);

        comboBox_action = new QComboBox(ios_row_action);
        comboBox_action->addItem(QString());
        comboBox_action->addItem(QString());
        comboBox_action->addItem(QString());
        comboBox_action->addItem(QString());
        comboBox_action->setObjectName(QString::fromUtf8("comboBox_action"));
        sizePolicy.setHeightForWidth(comboBox_action->sizePolicy().hasHeightForWidth());
        comboBox_action->setSizePolicy(sizePolicy);
        comboBox_action->setMinimumSize(QSize(150, 0));

        ios_row_action_layout->addWidget(comboBox_action);

        horizontalSpacer_11 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_action_layout->addItem(horizontalSpacer_11);


        card_digitalLayout->addWidget(ios_row_action);

        ios_separator4 = new QFrame(card_digital);
        ios_separator4->setObjectName(QString::fromUtf8("ios_separator4"));
        ios_separator4->setFrameShape(QFrame::HLine);
        ios_separator4->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator4);

        ios_row_arming = new QFrame(card_digital);
        ios_row_arming->setObjectName(QString::fromUtf8("ios_row_arming"));
        ios_row_arming_layout = new QHBoxLayout(ios_row_arming);
        ios_row_arming_layout->setObjectName(QString::fromUtf8("ios_row_arming_layout"));
        ios_row_arming_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_8 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_arming_layout->addItem(horizontalSpacer_8);

        label_arming = new QLabel(ios_row_arming);
        label_arming->setObjectName(QString::fromUtf8("label_arming"));

        ios_row_arming_layout->addWidget(label_arming);

        horizontalSpacer_arming = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_arming_layout->addItem(horizontalSpacer_arming);

        comboBox_arming = new QComboBox(ios_row_arming);
        comboBox_arming->addItem(QString());
        comboBox_arming->addItem(QString());
        comboBox_arming->setObjectName(QString::fromUtf8("comboBox_arming"));
        sizePolicy.setHeightForWidth(comboBox_arming->sizePolicy().hasHeightForWidth());
        comboBox_arming->setSizePolicy(sizePolicy);
        comboBox_arming->setMinimumSize(QSize(150, 0));

        ios_row_arming_layout->addWidget(comboBox_arming);

        horizontalSpacer_12 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_arming_layout->addItem(horizontalSpacer_12);


        card_digitalLayout->addWidget(ios_row_arming);

        ios_separator5 = new QFrame(card_digital);
        ios_separator5->setObjectName(QString::fromUtf8("ios_separator5"));
        ios_separator5->setFrameShape(QFrame::HLine);
        ios_separator5->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator5);

        ios_row_lcd = new QFrame(card_digital);
        ios_row_lcd->setObjectName(QString::fromUtf8("ios_row_lcd"));
        ios_row_lcd_layout = new QHBoxLayout(ios_row_lcd);
        ios_row_lcd_layout->setObjectName(QString::fromUtf8("ios_row_lcd_layout"));
        ios_row_lcd_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_lcd_layout->addItem(horizontalSpacer_9);

        label_lcd = new QLabel(ios_row_lcd);
        label_lcd->setObjectName(QString::fromUtf8("label_lcd"));

        ios_row_lcd_layout->addWidget(label_lcd);

        horizontalSpacer_lcd = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_lcd_layout->addItem(horizontalSpacer_lcd);

        comboBox_lcd = new QComboBox(ios_row_lcd);
        comboBox_lcd->addItem(QString());
        comboBox_lcd->addItem(QString());
        comboBox_lcd->addItem(QString());
        comboBox_lcd->setObjectName(QString::fromUtf8("comboBox_lcd"));
        sizePolicy.setHeightForWidth(comboBox_lcd->sizePolicy().hasHeightForWidth());
        comboBox_lcd->setSizePolicy(sizePolicy);
        comboBox_lcd->setMinimumSize(QSize(150, 0));

        ios_row_lcd_layout->addWidget(comboBox_lcd);

        horizontalSpacer_13 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_lcd_layout->addItem(horizontalSpacer_13);


        card_digitalLayout->addWidget(ios_row_lcd);

        ios_separator6 = new QFrame(card_digital);
        ios_separator6->setObjectName(QString::fromUtf8("ios_separator6"));
        ios_separator6->setFrameShape(QFrame::HLine);
        ios_separator6->setFrameShadow(QFrame::Sunken);

        card_digitalLayout->addWidget(ios_separator6);

        ios_row_delay = new QFrame(card_digital);
        ios_row_delay->setObjectName(QString::fromUtf8("ios_row_delay"));
        ios_row_delay_layout = new QHBoxLayout(ios_row_delay);
        ios_row_delay_layout->setObjectName(QString::fromUtf8("ios_row_delay_layout"));
        ios_row_delay_layout->setContentsMargins(16, 12, 16, 12);
        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_delay_layout->addItem(horizontalSpacer_10);

        label_delay = new QLabel(ios_row_delay);
        label_delay->setObjectName(QString::fromUtf8("label_delay"));

        ios_row_delay_layout->addWidget(label_delay);

        horizontalSpacer_delay = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ios_row_delay_layout->addItem(horizontalSpacer_delay);

        comboBox_delay = new QComboBox(ios_row_delay);
        comboBox_delay->addItem(QString());
        comboBox_delay->addItem(QString());
        comboBox_delay->addItem(QString());
        comboBox_delay->addItem(QString());
        comboBox_delay->addItem(QString());
        comboBox_delay->addItem(QString());
        comboBox_delay->setObjectName(QString::fromUtf8("comboBox_delay"));
        sizePolicy.setHeightForWidth(comboBox_delay->sizePolicy().hasHeightForWidth());
        comboBox_delay->setSizePolicy(sizePolicy);
        comboBox_delay->setMinimumSize(QSize(150, 0));

        ios_row_delay_layout->addWidget(comboBox_delay);

        horizontalSpacer_14 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        ios_row_delay_layout->addItem(horizontalSpacer_14);


        card_digitalLayout->addWidget(ios_row_delay);


        verticalLayout_digital->addWidget(card_digital);

        verticalSpacer_digital = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_digital->addItem(verticalSpacer_digital);

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
        label_input->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_input->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        comboBox_input->setItemText(0, QCoreApplication::translate("MainWindow", "Digital Input 1", nullptr));
        comboBox_input->setItemText(1, QCoreApplication::translate("MainWindow", "Digital Input 2", nullptr));
        comboBox_input->setItemText(2, QCoreApplication::translate("MainWindow", "Digital Input 3", nullptr));

        comboBox_input->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_input->setCurrentText(QCoreApplication::translate("MainWindow", "Digital Input 1", nullptr));
        ios_separator1->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_function->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_function->setText(QCoreApplication::translate("MainWindow", "Function", nullptr));
        comboBox_function->setItemText(0, QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        comboBox_function->setItemText(1, QCoreApplication::translate("MainWindow", "Warning", nullptr));
        comboBox_function->setItemText(2, QCoreApplication::translate("MainWindow", "Status", nullptr));
        comboBox_function->setItemText(3, QCoreApplication::translate("MainWindow", "Control", nullptr));

        comboBox_function->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_function->setCurrentText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        ios_separator2->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_polarity->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_polarity->setText(QCoreApplication::translate("MainWindow", "Polarity", nullptr));
        comboBox_polarity->setItemText(0, QCoreApplication::translate("MainWindow", "Normal", nullptr));
        comboBox_polarity->setItemText(1, QCoreApplication::translate("MainWindow", "Inverted", nullptr));

        comboBox_polarity->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_polarity->setCurrentText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        ios_separator3->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_action->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_action->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        comboBox_action->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_action->setItemText(1, QCoreApplication::translate("MainWindow", "Relay Output", nullptr));
        comboBox_action->setItemText(2, QCoreApplication::translate("MainWindow", "Digital Output", nullptr));
        comboBox_action->setItemText(3, QCoreApplication::translate("MainWindow", "Email Alert", nullptr));

        comboBox_action->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_action->setCurrentText(QCoreApplication::translate("MainWindow", "None", nullptr));
        ios_separator4->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_arming->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_arming->setText(QCoreApplication::translate("MainWindow", "Arming", nullptr));
        comboBox_arming->setItemText(0, QCoreApplication::translate("MainWindow", "Enabled", nullptr));
        comboBox_arming->setItemText(1, QCoreApplication::translate("MainWindow", "Disabled", nullptr));

        comboBox_arming->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_arming->setCurrentText(QCoreApplication::translate("MainWindow", "Enabled", nullptr));
        ios_separator5->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_lcd->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_lcd->setText(QCoreApplication::translate("MainWindow", "LCD Display", nullptr));
        comboBox_lcd->setItemText(0, QCoreApplication::translate("MainWindow", "Show Status", nullptr));
        comboBox_lcd->setItemText(1, QCoreApplication::translate("MainWindow", "Hide", nullptr));
        comboBox_lcd->setItemText(2, QCoreApplication::translate("MainWindow", "Show Value", nullptr));

        comboBox_lcd->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_lcd->setCurrentText(QCoreApplication::translate("MainWindow", "Show Status", nullptr));
        ios_separator6->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: #e5e5ea; border: none; max-height: 1px;", nullptr));
        label_delay->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #1d1d1f;", nullptr));
        label_delay->setText(QCoreApplication::translate("MainWindow", "Activation Delay", nullptr));
        comboBox_delay->setItemText(0, QCoreApplication::translate("MainWindow", "0s", nullptr));
        comboBox_delay->setItemText(1, QCoreApplication::translate("MainWindow", "1s", nullptr));
        comboBox_delay->setItemText(2, QCoreApplication::translate("MainWindow", "2s", nullptr));
        comboBox_delay->setItemText(3, QCoreApplication::translate("MainWindow", "5s", nullptr));
        comboBox_delay->setItemText(4, QCoreApplication::translate("MainWindow", "10s", nullptr));
        comboBox_delay->setItemText(5, QCoreApplication::translate("MainWindow", "30s", nullptr));

        comboBox_delay->setStyleSheet(QCoreApplication::translate("MainWindow", "font-size: 17px; color: #007aff; background: transparent; border: none;", nullptr));
        comboBox_delay->setCurrentText(QCoreApplication::translate("MainWindow", "0s", nullptr));
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
