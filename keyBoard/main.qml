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

//    ColumnLayout{
//        anchors.fill: parent
//        anchors.margins: 80

//        RowLayout{
//            Layout.alignment: Qt.AlignHCenter
//            Layout.preferredWidth: 160
//            Layout.maximumWidth: 160
//            spacing: (160-4*18)/3
//        }

    Rectangle{
        id: rect1
        width: rect2.width
        height: rect2.height/4
        anchors.bottom: rect2.top
        x: 160
        radius: 10

    }

    Rectangle {
        id: rect2
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
         rowSpacing: 2


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
      /* Text{
           Layout.alignment: Qt.AlignCenter
           text: "ENTER PIN CODE"
           color: "white"
           font.family: "DIN"
           font.pointSize: 15
       }*/
    //}
}
