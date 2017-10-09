import QtQuick 2.8
import QtQuick.Layouts 1.3
import QtQuick.Window 2.2
import QtQuick.Controls 2.1
import QtQuick.Controls.Styles 1.4
import QtGraphicalEffects 1.0

Window {
    visible: true
    width: 640
    height: 480
    color: "black"

    title: qsTr("Text")
    Rectangle {
        width: pinButtonLayout.width
        height: pinButtonLayout.height
        color : "#778899"
        anchors.centerIn: parent
        radius: 10
        gradient: Gradient{
            GradientStop { position: 0.0; color: "#525D63"}
            GradientStop { position: 1.0; color: "#31363A"}

        }

    }


       GridLayout {
         anchors.centerIn: parent
         id: pinButtonLayout
         columns: 3
         columnSpacing: 0
         rowSpacing: 1


         PinScreen{id: pinButton1; numberText: "1"}
         PinScreen{numberText: "2"; alphabetText: "ABC"}
         PinScreen{numberText: "3"; alphabetText: "DEF"}
         PinScreen{numberText: "4"; alphabetText: "GHI"}
         PinScreen{numberText: "5"; alphabetText: "JKL"}
         PinScreen{numberText: "6"; alphabetText: "MNO"}
         PinScreen{numberText: "7"; alphabetText: "PQRS"}
         PinScreen{numberText: "8"; alphabetText: "TUV"}
         PinScreen{numberText: "9"; alphabetText: "WXYZ"}
         PinScreen{numberText: ""; funcText: "EMERGENCY"}
         PinScreen{numberText: "0"}
         PinScreen{numberText: ""; funcText: "DELETE"}
       }
}
