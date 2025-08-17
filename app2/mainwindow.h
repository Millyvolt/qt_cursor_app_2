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
    
    // ComboBox change handlers for Tab 6 (Inputs - Analogue)
    void onComboBoxAnalogueInputChanged(const QString &text);
    void onComboBoxAnalogueFunctionChanged(const QString &text);
    
    // ComboBox change handlers for Tab 6 (Inputs - Digital)
    void onComboBoxInputChanged(const QString &text);
    void onComboBoxFunctionChanged(const QString &text);
    void onComboBoxPolarityChanged(const QString &text);
    void onComboBoxActionChanged(const QString &text);
    void onComboBoxArmingChanged(const QString &text);
    void onComboBoxLcdChanged(const QString &text);
    void onComboBoxDelayChanged(const QString &text);
    
    // Button click handlers for Tab 7
    void onButton7_1Clicked();
    void onButton7_2Clicked();
    void onButton7_3Clicked();
    
    // Button click handlers for Tab 8 (Communications - RS-485)
    void onButtonRs485_1Clicked();
    void onButtonRs485_2Clicked();
    void onButtonRs485_3Clicked();
    
    // Button click handlers for Tab 8 (Communications - CAN)
    void onButtonCan_1Clicked();
    void onButtonCan_2Clicked();
    void onButtonCan_3Clicked();
    
    // Button click handlers for Tab 8 (Communications - Ethernet)
    void onButtonEthernet_1Clicked();
    void onButtonEthernet_2Clicked();
    void onButtonEthernet_3Clicked();
    
    // Button click handlers for Tab 8 (Communications - RS-232)
    void onButtonRs232_1Clicked();
    void onButtonRs232_2Clicked();
    void onButtonRs232_3Clicked();

private:
    void loadStylesheet();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
