#include "mainframe.h"
#include <QPainter>
#include <QTimerEvent>

MainFrame::MainFrame(QWidget *parent)
	: QWidget(parent), m_times(0)
{
	ui.setupUi(this);

	m_timerId = startTimer(600);
}

MainFrame::~MainFrame()
{

}

void MainFrame::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);

	if (m_times==0)
	{
		painter.drawPixmap(160,600,70,100,QPixmap(QString::fromUtf8(":/MainFrame/Resources/up.png")));
		m_times = 1;
	}
	else
	{
		painter.drawPixmap(160, 600, 70, 100, QPixmap(QString::fromUtf8(":/MainFrame/Resources/up_trans.png")));
		m_times = 0;
	}
}

void MainFrame::timerEvent(QTimerEvent * event)
{
	// 可以有多个定时器，每个的定时器有不同的处理
	if (event->timerId() == m_timerId)
	{
		update(); // 重绘
	}
}
