#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class RadioScreen;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public: // Custom functions
    void setRadioScreen(RadioScreen* radioScreen);

private slots:
    void on_pushButton_clicked();

    void on_pushButtonRadio_released();

private:
    Ui::MainWindow *ui;

    RadioScreen *mRadioScreen;
};

#endif // MAINWINDOW_H
