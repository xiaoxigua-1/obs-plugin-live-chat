#ifndef DOCK_WIDGET_H
#define DOCK_WIDGET_H

#include <QDockWidget>
#include <QHBoxLayout>
#include <QString>
#include <QWidget>

class MyDockWidget : public QDockWidget {
  Q_OBJECT

public:
  explicit MyDockWidget(QWidget *parent = nullptr);
  ~MyDockWidget();
};

#endif
