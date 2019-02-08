#ifndef RADIOSCREEN_H
#define RADIOSCREEN_H

#include <QMediaPlayer>
#include <QWidget>

namespace Ui {
class RadioScreen;
}

class RadioScreen : public QWidget
{
    Q_OBJECT

public:
    explicit RadioScreen(QWidget *parent = 0);
    ~RadioScreen();

public: // Custom
    void playRadio();

private slots:
    void on_pushButton_pressed();

private:
    Ui::RadioScreen *ui;

private: //Custom
    QMediaPlayer mPlayer{};
};

#endif // RADIOSCREEN_H
