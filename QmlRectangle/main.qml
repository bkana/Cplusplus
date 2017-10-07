import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    id: root
    visible: true
    width: 400
    height: 400

    Rectangle {
        id : rect1
        width: root.width/2
        height: root.height/2
        x: root.width/4
        y: root.height/4
        color: "red"

        border {
            width: 2
            color: "black"
        }
        radius: root.width/20

    }

}
