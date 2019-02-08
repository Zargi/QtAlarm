#include "radioscreen.h"
#include "ui_radioscreen.h"


RadioScreen::RadioScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioScreen)
{
    ui->setupUi(this);
}

RadioScreen::~RadioScreen()
{
    delete ui;
}

void RadioScreen::on_pushButton_pressed()
{
    playRadio();
}

void RadioScreen::playRadio()
{
    qDebug("PlayRadio");
    mPlayer.setMedia(QUrl("http://live-mp3-128.kexp.org:8000/listen.pls")); //"http://streams.radiobob.de/100/mp3-128/streams.radiobob.de/play.m3u"));
    mPlayer.setVolume(100);
    mPlayer.play();
}
