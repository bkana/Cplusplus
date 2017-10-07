import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    id: root
    visible: true
    width: 400
    height: 400

  MyButtom{

      xPos: 100
      ypos: 100
      w: parent.width/2
      h: parent.height/10
      btnText: "this is a Buttom"


  }

}
