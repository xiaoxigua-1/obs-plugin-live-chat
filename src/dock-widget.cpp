#include "dock-widget.hpp"

MyDockWidget::MyDockWidget(QWidget *parent) : QDockWidget("Hi", parent) {
  QWidget *widget = new QWidget();
  QHBoxLayout *layout = new QHBoxLayout();

  widget->setLayout(layout);

  setWidget(widget);
  setFloating(true);
  resize(300, 200);
}

MyDockWidget::~MyDockWidget() {}
