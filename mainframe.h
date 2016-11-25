#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QtWidgets/QWidget>
#include "ui_mainframe.h"

class MainFrame : public QWidget
{
	Q_OBJECT

public:
	MainFrame(QWidget *parent = 0);
	~MainFrame();

private:
	void paintEvent(QPaintEvent* event);
	void timerEvent(QTimerEvent* event);

private:
	Ui::MainFrameClass ui;
	int m_timerId;
	int m_times;
};

#endif // MAINFRAME_H
