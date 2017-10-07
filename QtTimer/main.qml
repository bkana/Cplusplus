import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        width: 440
        height: 150

        Column{
        anchors.fill: parent
        spacing: 150
        Text {
        text: timer.theChange
        font.pointSize: 15
        anchors.horizontalCenter: parent.horizontalCenter
        }
        }
    }
}
