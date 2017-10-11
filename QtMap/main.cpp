#include <QCoreApplication>
#include <QMap>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString, int> map;
    map["one"] = 1;
    map["three"] = 3;
    map["seven"] = 7;

    int num1 = map["one"];
    int num2 = map["three"];
    int num3 = map["seven"];
    qDebug() << "nummer one are : " << num1;
    qDebug() << "nummer three are : " << num2;
    qDebug() << "nummer seven are : " << num3;
    return a.exec();
}
