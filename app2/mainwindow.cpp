#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    // Load external stylesheet
    loadStylesheet();
    
    // Connect all buttons to their respective slots
    connect(ui->pushButton1_1, &QPushButton::clicked, this, &MainWindow::onButton1_1Clicked);
    connect(ui->pushButton1_2, &QPushButton::clicked, this, &MainWindow::onButton1_2Clicked);
    connect(ui->pushButton1_3, &QPushButton::clicked, this, &MainWindow::onButton1_3Clicked);
    
    connect(ui->pushButton2_1, &QPushButton::clicked, this, &MainWindow::onButton2_1Clicked);
    connect(ui->pushButton2_2, &QPushButton::clicked, this, &MainWindow::onButton2_2Clicked);
    connect(ui->pushButton2_3, &QPushButton::clicked, this, &MainWindow::onButton2_3Clicked);
    
    connect(ui->pushButton3_1, &QPushButton::clicked, this, &MainWindow::onButton3_1Clicked);
    connect(ui->pushButton3_2, &QPushButton::clicked, this, &MainWindow::onButton3_2Clicked);
    connect(ui->pushButton3_3, &QPushButton::clicked, this, &MainWindow::onButton3_3Clicked);
    
    connect(ui->comboBox_analogue_input, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxAnalogueInputChanged);
    connect(ui->comboBox_analogue_function, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxAnalogueFunctionChanged);
    
    connect(ui->comboBox_input, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxInputChanged);
    connect(ui->comboBox_function, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxFunctionChanged);
    connect(ui->comboBox_polarity, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxPolarityChanged);
    connect(ui->comboBox_action, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxActionChanged);
    connect(ui->comboBox_arming, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxArmingChanged);
    connect(ui->comboBox_lcd, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxLcdChanged);
    connect(ui->comboBox_delay, QOverload<const QString &>::of(&QComboBox::currentTextChanged), this, &MainWindow::onComboBoxDelayChanged);
    
    connect(ui->pushButton7_1, &QPushButton::clicked, this, &MainWindow::onButton7_1Clicked);
    connect(ui->pushButton7_2, &QPushButton::clicked, this, &MainWindow::onButton7_2Clicked);
    connect(ui->pushButton7_3, &QPushButton::clicked, this, &MainWindow::onButton7_3Clicked);
    
    connect(ui->pushButton_rs485_1, &QPushButton::clicked, this, &MainWindow::onButtonRs485_1Clicked);
    connect(ui->pushButton_rs485_2, &QPushButton::clicked, this, &MainWindow::onButtonRs485_2Clicked);
    connect(ui->pushButton_rs485_3, &QPushButton::clicked, this, &MainWindow::onButtonRs485_3Clicked);
    
    connect(ui->pushButton_can_1, &QPushButton::clicked, this, &MainWindow::onButtonCan_1Clicked);
    connect(ui->pushButton_can_2, &QPushButton::clicked, this, &MainWindow::onButtonCan_2Clicked);
    connect(ui->pushButton_can_3, &QPushButton::clicked, this, &MainWindow::onButtonCan_3Clicked);
    
    connect(ui->pushButton_ethernet_1, &QPushButton::clicked, this, &MainWindow::onButtonEthernet_1Clicked);
    connect(ui->pushButton_ethernet_2, &QPushButton::clicked, this, &MainWindow::onButtonEthernet_2Clicked);
    connect(ui->pushButton_ethernet_3, &QPushButton::clicked, this, &MainWindow::onButtonEthernet_3Clicked);
    
    connect(ui->pushButton_rs232_1, &QPushButton::clicked, this, &MainWindow::onButtonRs232_1Clicked);
    connect(ui->pushButton_rs232_2, &QPushButton::clicked, this, &MainWindow::onButtonRs232_2Clicked);
    connect(ui->pushButton_rs232_3, &QPushButton::clicked, this, &MainWindow::onButtonRs232_3Clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadStylesheet()
{
    // Load directly from local file
    QFile file("styles.qss");
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream in(&file);
        QString stylesheet = in.readAll();
        setStyleSheet(stylesheet);
        file.close();
        qDebug() << "Stylesheet loaded successfully from styles.qss";
    } else {
        qDebug() << "Failed to load styles.qss file:" << file.errorString();
        qDebug() << "Current working directory:" << QDir::currentPath();
    }
}

// Button click handlers for Tab 1
void MainWindow::onButton1_1Clicked()
{
    QMessageBox::information(this, "Settings", "Opening Settings app...");
}

void MainWindow::onButton1_2Clicked()
{
    QMessageBox::information(this, "Messages", "Opening Messages app...");
}

void MainWindow::onButton1_3Clicked()
{
    QMessageBox::information(this, "Phone", "Opening Phone app...");
}

// Button click handlers for Tab 2
void MainWindow::onButton2_1Clicked()
{
    QMessageBox::information(this, "Music", "Opening Music app...");
}

void MainWindow::onButton2_2Clicked()
{
    QMessageBox::information(this, "Camera", "Opening Camera app...");
}

void MainWindow::onButton2_3Clicked()
{
    QMessageBox::information(this, "Safari", "Opening Safari browser...");
}

// Button click handlers for Tab 3
void MainWindow::onButton3_1Clicked()
{
    QMessageBox::information(this, "Calculator", "Opening Calculator app...");
}

void MainWindow::onButton3_2Clicked()
{
    QMessageBox::information(this, "Clock", "Opening Clock app...");
}

void MainWindow::onButton3_3Clicked()
{
    QMessageBox::information(this, "Files", "Opening Files app...");
}

// ComboBox change handlers for Tab 6 (Inputs - Analogue)
void MainWindow::onComboBoxAnalogueInputChanged(const QString &text)
{
    qDebug() << "Analogue Input changed to:" << text;
}

void MainWindow::onComboBoxAnalogueFunctionChanged(const QString &text)
{
    qDebug() << "Analogue Function changed to:" << text;
}

// ComboBox change handlers for Tab 6 (Inputs - Digital)
void MainWindow::onComboBoxInputChanged(const QString &text)
{
    qDebug() << "Input changed to:" << text;
}

void MainWindow::onComboBoxFunctionChanged(const QString &text)
{
    qDebug() << "Function changed to:" << text;
}

void MainWindow::onComboBoxPolarityChanged(const QString &text)
{
    qDebug() << "Polarity changed to:" << text;
}

void MainWindow::onComboBoxActionChanged(const QString &text)
{
    qDebug() << "Action changed to:" << text;
}

void MainWindow::onComboBoxArmingChanged(const QString &text)
{
    qDebug() << "Arming changed to:" << text;
}

void MainWindow::onComboBoxLcdChanged(const QString &text)
{
    qDebug() << "LCD Display changed to:" << text;
}

void MainWindow::onComboBoxDelayChanged(const QString &text)
{
    qDebug() << "Activation Delay changed to:" << text;
}

// Button click handlers for Tab 7
void MainWindow::onButton7_1Clicked()
{
    QMessageBox::information(this, "Monitoring", "Opening System Monitoring...");
}

void MainWindow::onButton7_2Clicked()
{
    QMessageBox::information(this, "Diagnostics", "Opening Diagnostics...");
}

void MainWindow::onButton7_3Clicked()
{
    QMessageBox::information(this, "Reports", "Opening Reports...");
}

// Button click handlers for Tab 8 (Communications - RS-485)
void MainWindow::onButtonRs485_1Clicked()
{
    QMessageBox::information(this, "Baud Rate Settings", "Opening RS-485 Baud Rate Settings...");
}

void MainWindow::onButtonRs485_2Clicked()
{
    QMessageBox::information(this, "Protocol Configuration", "Opening RS-485 Protocol Configuration...");
}

void MainWindow::onButtonRs485_3Clicked()
{
    QMessageBox::information(this, "Device Address", "Opening RS-485 Device Address Configuration...");
}

// Button click handlers for Tab 8 (Communications - CAN)
void MainWindow::onButtonCan_1Clicked()
{
    QMessageBox::information(this, "CAN ID Configuration", "Opening CAN ID Configuration...");
}

void MainWindow::onButtonCan_2Clicked()
{
    QMessageBox::information(this, "Bit Rate Settings", "Opening CAN Bit Rate Settings...");
}

void MainWindow::onButtonCan_3Clicked()
{
    QMessageBox::information(this, "Message Filters", "Opening CAN Message Filters...");
}

// Button click handlers for Tab 8 (Communications - Ethernet)
void MainWindow::onButtonEthernet_1Clicked()
{
    QMessageBox::information(this, "IP Configuration", "Opening Ethernet IP Configuration...");
}

void MainWindow::onButtonEthernet_2Clicked()
{
    QMessageBox::information(this, "Port Settings", "Opening Ethernet Port Settings...");
}

void MainWindow::onButtonEthernet_3Clicked()
{
    QMessageBox::information(this, "Firewall Settings", "Opening Ethernet Firewall Settings...");
}

// Button click handlers for Tab 8 (Communications - RS-232)
void MainWindow::onButtonRs232_1Clicked()
{
    QMessageBox::information(this, "Serial Port Settings", "Opening RS-232 Serial Port Settings...");
}

void MainWindow::onButtonRs232_2Clicked()
{
    QMessageBox::information(this, "Data Format", "Opening RS-232 Data Format Configuration...");
}

void MainWindow::onButtonRs232_3Clicked()
{
    QMessageBox::information(this, "Flow Control", "Opening RS-232 Flow Control Settings...");
}

