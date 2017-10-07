import QtQuick 2.4
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
Window {
    visible: true
    width: 500
    height: 200
    Connections{
     target: datastorage
     onIncreaseOne: txtCount.text = ms
    }
     Text {
         id: txtCount
         text: "0 Hits"
     }
     Button{
         id: btnUpdate
         anchors.top: txtCount.bottom
         text : "Just Click Me"
         onClicked: datastorage.callMeFromQml()
     }
}
