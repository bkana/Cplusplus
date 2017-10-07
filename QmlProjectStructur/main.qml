import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    id: root
    visible: true
    width: 640
    height: 480

    Rectangle{
        id: rect1
        width: root.width/2
        height: root.height/2
        anchors.centerIn: parent
        color: "red"
        border{
            width: 2
            color: "black"
        }

        /*Image{
            anchors.fill: parent
            //source: "qrc:/linux-distros-100724403-large.jpg"
            //source: "https://images.idgesg.net/images/article/2017/05/linux-distros-100724403-large.jpg"
            fillMode: Image.PreserveAspectFit
            onProgressChanged: {
                console.log("Progress: " + progress)
            }
        }*/

        Text{
            id: txt
            text: "<h1><i>Hello Qml!</i></h1>"
            anchors.right : rect1.right
            anchors.top : rect1.bottom
            color: "#33000000"
            font.pixelSize: 24
            font.family: "Helvetica Neue"
            //font.weight: Font.Light
        }
        radius: root.width/20

        MouseArea{
            anchors.fill: parent
            onClicked: {
                rect1.color = "blue"
                console.log("one click")
            }
            onDoubleClicked: {
                rect1.color = "brown"
                console.log("Double click")
            }
        }
    }


}
