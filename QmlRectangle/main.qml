import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 400
    height: 400

    Rectangle {
        width: 200
        height: 200
        x:100
        y:100
        color: "red"

        border {
            width: 2
            color: "black"
        }
        radius: 20.0

    }

}
