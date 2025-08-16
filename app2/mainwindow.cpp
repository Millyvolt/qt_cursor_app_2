#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
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
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Button click handlers for Tab 1
void MainWindow::onButton1_1Clicked()
{
//    showIOSNotification("Settings", "Opening Settings app...");
}

void MainWindow::onButton1_2Clicked()
{
//    showIOSNotification("Messages", "Opening Messages app...");
}

void MainWindow::onButton1_3Clicked()
{
//    showIOSNotification("Phone", "Opening Phone app...");
}

// Button click handlers for Tab 2
void MainWindow::onButton2_1Clicked()
{
//    showIOSNotification("Music", "Opening Music app...");
}

void MainWindow::onButton2_2Clicked()
{
//    showIOSNotification("Camera", "Opening Camera app...");
}

void MainWindow::onButton2_3Clicked()
{
//    showIOSNotification("Safari", "Opening Safari browser...");
}

// Button click handlers for Tab 3
void MainWindow::onButton3_1Clicked()
{
//    showIOSNotification("Calculator", "Opening Calculator app...");
}

void MainWindow::onButton3_2Clicked()
{
//    showIOSNotification("Clock", "Opening Clock app...");
}

void MainWindow::onButton3_3Clicked()
{
//    showIOSNotification("Files", "Opening Files app...");
}

