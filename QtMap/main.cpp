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
    int newfive = 5;
    map.insert("five", newfive);

    int num1 = map["one"];
    int num2 = map["three"];
    int num3 = map["seven"];
    qDebug() << "nummer one are : " << num1;
    qDebug() << "nummer three are : " << num2;
    qDebug() << "nummer seven are : " << num3;
    qDebug() << "nummer five are : " << newfive;

    QMap<int , QString> Map;
    Map.insert(1,"A");
    Map.insert(2,"B");
    Map[3] = "C";
    foreach (int i, Map.keys()) {
        qDebug() << Map[i];
    }

    QMapIterator<int, QString> iter(Map);
    while (iter.hasNext()) {
        iter.next();
        qDebug() << iter.key() << " : " << iter.value();
    }
    return a.exec();
}
