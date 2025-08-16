#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Button click handlers for Tab 1
    void onButton1_1Clicked();
    void onButton1_2Clicked();
    void onButton1_3Clicked();
    
    // Button click handlers for Tab 2
    void onButton2_1Clicked();
    void onButton2_2Clicked();
    void onButton2_3Clicked();
    
    // Button click handlers for Tab 3
    void onButton3_1Clicked();
    void onButton3_2Clicked();
    void onButton3_3Clicked();

private:
//    void showIOSNotification(const QString &title, const QString &message);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
