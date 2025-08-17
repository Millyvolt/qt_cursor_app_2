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
    
    connect(ui->pushButton_analogue_1, &QPushButton::clicked, this, &MainWindow::onButtonAnalogue1Clicked);
    connect(ui->pushButton_analogue_2, &QPushButton::clicked, this, &MainWindow::onButtonAnalogue2Clicked);
    connect(ui->pushButton_analogue_3, &QPushButton::clicked, this, &MainWindow::onButtonAnalogue3Clicked);
    
    connect(ui->pushButton_digital_1, &QPushButton::clicked, this, &MainWindow::onButtonDigital1Clicked);
    connect(ui->pushButton_digital_2, &QPushButton::clicked, this, &MainWindow::onButtonDigital2Clicked);
    connect(ui->pushButton_digital_3, &QPushButton::clicked, this, &MainWindow::onButtonDigital3Clicked);
    
    connect(ui->pushButton7_1, &QPushButton::clicked, this, &MainWindow::onButton7_1Clicked);
    connect(ui->pushButton7_2, &QPushButton::clicked, this, &MainWindow::onButton7_2Clicked);
    connect(ui->pushButton7_3, &QPushButton::clicked, this, &MainWindow::onButton7_3Clicked);
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

// Button click handlers for Tab 6 (Inputs - Analogue)
void MainWindow::onButtonAnalogue1Clicked()
{
    QMessageBox::information(this, "Analogue Input 1", "Configuring Analogue Input 1...");
}

void MainWindow::onButtonAnalogue2Clicked()
{
    QMessageBox::information(this, "Analogue Input 2", "Configuring Analogue Input 2...");
}

void MainWindow::onButtonAnalogue3Clicked()
{
    QMessageBox::information(this, "Analogue Input 3", "Configuring Analogue Input 3...");
}

// Button click handlers for Tab 6 (Inputs - Digital)
void MainWindow::onButtonDigital1Clicked()
{
    QMessageBox::information(this, "Digital Input 1", "Configuring Digital Input 1...");
}

void MainWindow::onButtonDigital2Clicked()
{
    QMessageBox::information(this, "Digital Input 2", "Configuring Digital Input 2...");
}

void MainWindow::onButtonDigital3Clicked()
{
    QMessageBox::information(this, "Digital Input 3", "Configuring Digital Input 3...");
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

