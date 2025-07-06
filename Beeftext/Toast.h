#ifndef BEEFTEXT_TOAST_WINDOW_H
#define BEEFTEXT_TOAST_WINDOW_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QVBoxLayout>
#include <QGuiApplication>
#include <QScreen>

class Toast : public QWidget {
public:
	Toast(const QString& message, int durationMs = 2000, QWidget* parent = nullptr)
		: QWidget(parent) {
		if (lastInstance) {
			lastInstance->close();
			delete lastInstance;
			lastInstance = nullptr;
		}

		lastInstance = this;

		setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
		setAttribute(Qt::WA_TranslucentBackground);

		//QLabel* label = new QLabel(message);
		//label->setStyleSheet("QLabel { background-color: rgba(0, 0, 0, 160); color: white; padding: 10px; border-radius: 5px; }");
		QLabel* label = new QLabel();
		label->setStyleSheet("QLabel { background-color: rgba(0, 0, 0, 160); color: white; padding: 10px; border-radius: 5px; }");
		label->setTextFormat(Qt::RichText);
		label->setText(message);

		QVBoxLayout* layout = new QVBoxLayout(this);
		layout->addWidget(label);
		layout->setContentsMargins(0, 0, 0, 0);
		setLayout(layout);

		adjustSize();

		QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
		move(screenGeometry.center() - rect().center());

		QTimer::singleShot(durationMs, this, &Toast::selfClose);
	}

	~Toast() override {
		if (lastInstance == this)
			lastInstance = nullptr;
	}

private slots:
	void selfClose() {
		this->close();
		delete this;
	}

private:
	static Toast* lastInstance;
};

#endif