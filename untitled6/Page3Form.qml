import QtQuick 2.15
import QtQuick.Controls 2.15

Page{

    width: 600
    height: 400
    title: qsTr("Date personale")

  Label {
      x: 188
      y: 8
      text: qsTr("Introduceti datele personale")
      anchors.horizontalCenterOffset: -164
      anchors.verticalCenterOffset: -152
      anchors.centerIn: parent


        }

    Label {
        TextField {
            id:nume
            x: 106
            y: 91
            placeholderText: qsTr("Numele si prenumele:")
            text: backend.searchString


        }
    }
    Label {
        TextField {
            id:varsta
            x: 105
            y: 151
            placeholderText: qsTr("Varsta")
            text: backend.searchString


        }
    }
       anchors.centerIn: parent


}

