import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 2.1
Window {
    visible: true
    width: 500
    height: 200


    Column{
        id: firstcol
        Text {
            id: txtName
            text: message.name
        }
        Button{
            id: btnUpdate
            text: "Just Click me"
            onClicked: message.call_MeFronQml()
        }
    }
        Column{
            anchors.left: firstcol.right
            id : secondcol
            Text {
                id: txtCount
                height: txtName.height
                width: btnEdit.width
                text: message.count
            }
            Button{
                id : btnEdit
                text : "Update Count"
                onClicked: message.slots_Count()
            }

    }
        Column{
            anchors.left: secondcol.right
            id: thirdcol
            Text {
                id: txtsecond
                height: txtName.height
                width: txtName.width
                text: message.second
            }

            Button{
                id : second
                text: "Second Button"
                onClicked: message.slots_second()
               }

    }
        Column{
        anchors.left: thirdcol.right
        TextEdit{
            id: third
            height: txtName.height
            width: end.width
        }
        Button{
            id: end
            text : "Update Name"
            onClicked: message.name = third.text

        }
        }
}
