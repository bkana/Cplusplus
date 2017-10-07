import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    id: root
    visible: true
    width: 400
    height: 400

    Rectangle {
        id : rect1
        width: root.width/4
        height: root.height/4
        y: root.height/10
        x: root.width/2-width/2
        color: "red"

        border {
            width: 2
            color: "black"
        }
        radius: root.width/20

    }
    Rectangle {
        id : rect2
        width: root.width/4
        height: root.height/4
        anchors.top: rect1.bottom
        anchors.left: rect1.left
        color: "blue"

        border {
            width: 2
            color: "yellow"
        }
        radius: root.width/20

    }


}
