import QtQuick 2.8

    Rectangle {
        id: pinButton
        width: 107
        height: 51
        color: mouse.pressed ? "#37CB8D" : "transparent"
        clip: true
        property string numberText: ""
        property string funcText: ""
        property string alphabetText: ""
        property color textColor: "#202020"

        Text {
            id: number
            text: numberText
            font.family: "DIN"
            font.bold: true
            font.pointSize: 40
            color: textColor
            topPadding: mouse.pressed ? 0 : 23
            anchors.centerIn: parent
            anchors.rightMargin: 10
            style: Text.Sunken
            styleColor: "#101010"
        }
        Text {
            id: func
            text: funcText
            font.family: "DIN"
            font.pointSize: 10
            color: textColor
            anchors.centerIn: parent
            anchors.rightMargin: 10
        }
        Text {
            id: alphabet
            text: alphabetText
            font.family: "DIN"
            font.pointSize: 10
            color: textColor
            anchors.top: parent.top
            anchors.right: parent.right
            anchors.rightMargin: 3
        }

        MouseArea {
            id: mouse
            anchors.fill: parent
            onClicked: {
                if(funcText == ""){
                    console.log(number.text + " clicked, index: " + pinScreen.codeIndex)
                    enterKey(number.text)
                } else if(funcText == "DELETE"){
                    console.log("delete clicked, index: " + pinScreen.codeIndex)
                    deleteLastKey()
                } else if(funcText == "EMERGENCY"){

                }
            }
        }
    }


