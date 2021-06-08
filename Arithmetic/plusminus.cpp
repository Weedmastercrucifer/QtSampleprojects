#include "plusminus.h"
#include<QGridLayout>

PlusMinus::PlusMinus(QWidget *parent):QWidget(parent)
{
    auto *plsBtn=new QPushButton("+",this);
    auto *minBtn=new QPushButton("-",this);
    lb1=new QLabel("7",this);

    auto *grid=new QGridLayout(this);
    grid->addWidget(plsBtn,0,0);
    grid->addWidget(minBtn,0,1);
    grid->addWidget(lb1,1,1);

    setLayout(grid);
    connect(plsBtn, &QPushButton::clicked, this, &PlusMinus::OnPlus);
    connect(minBtn, &QPushButton::clicked, this, &PlusMinus::OnMinus);



}
void PlusMinus::OnPlus()
{
    int val=lb1->text().toInt();
    val++;
    lb1->setText(QString::number(val));
}
void PlusMinus::OnMinus()
{
    int val=lb1->text().toInt();
    val--;
    lb1->setText(QString::number(val));
}

