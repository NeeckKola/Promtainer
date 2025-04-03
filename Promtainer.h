#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Promtainer.h"

class Promtainer : public QMainWindow
{
    Q_OBJECT

public:
    Promtainer(QWidget *parent = nullptr);
    ~Promtainer();

private:
    Ui::PromtainerClass ui;
};
