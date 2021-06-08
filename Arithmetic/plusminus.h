#ifndef PLUSMINUS_H
#define PLUSMINUS_H
#pragma once

#include<QApplication>
#include<QWidget>
#include<QPushButton>
#include<QLabel>

class PlusMinus : public QWidget
{
    Q_OBJECT

public:
    PlusMinus(QWidget *parent=nullptr);

private slots:
    void OnPlus();
    void OnMinus();

private :
    QLabel *lb1;

};

#endif // PLUSMINUS_H
