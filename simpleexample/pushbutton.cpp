#include<QApplication>
#include<QWidget>
#include<QPushButton>
class MyButton : public QWidget
{
public:
    MyButton(QWidget *parent=nullptr);
};
MyButton:: MyButton(QWidget *parent)
    : QWidget(parent)
{
    auto *quitBtn=new QPushButton("Quit",this);
quitBtn->setGeometry(50,40,75,30);

connect(quitBtn, &QPushButton::clicked , qApp, &QApplication::quit);
}
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    MyButton window;

    window.resize(250,250);
    window.setWindowTitle("QPUSHBUTTON");
    window.show();
    return app.exec();
}
