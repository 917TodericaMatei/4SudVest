import QtQuick 2.15
import QtQuick.Controls 2.15

Page {

    width: 600
    height: 500
    title: qsTr("Calibrare")



   Label{
   text: qsTr("METODA CALIBRARE:")
   anchors.horizontalCenterOffset: -226
   anchors.verticalCenterOffset: -188
   anchors.centerIn: parent}


  Label {
      x: 188
      y: 8
      text: qsTr("-Asigurati-va ca nu ati consumat niciun aliment sau lichid recent(4-8 ore)
 sau sa va fi administrat insulina.")
      anchors.horizontalCenterOffset: -62
      anchors.verticalCenterOffset: -133
      anchors.centerIn: parent
       }

  Label {
      x: 188
      y: 8
      width: 388
      height: 40
      text: qsTr("-Scrieti-va valoarea glicemiei pe care o aveti acum,pe stomacul gol:")
      anchors.horizontalCenterOffset: -77
      anchors.verticalCenterOffset: -85
      anchors.centerIn: parent


        }

    Label {
        TextField {
            id:glicemiebefore
            x: 26
            y: 166
            placeholderText: qsTr("Valoarea glicemiei:")
            text: backend.searchString


        }
       }
    Label {
        x: 188
        y: 8
        width: 388
        height: 40
        text: qsTr("-Consumati 10G zahar si asteptati 10-20 de minute")
        anchors.horizontalCenterOffset: -77
        anchors.verticalCenterOffset: -13
        anchors.centerIn: parent

}
    Label {
        x: 188
        y: 8
        width: 388
        height: 40
        text: qsTr("-Scrieti-va noua valoarea a glicemiei pe care o aveti acum
(de preferabil sa o aveti in vedere si sa scrieti cea mai mare valoare):")
        anchors.horizontalCenterOffset: -82
        anchors.verticalCenterOffset: 23
        anchors.centerIn: parent

}
    Label {
        TextField {
            id:glicemieafter
            x: 26
            y: 297
            placeholderText: qsTr("Valoarea glicemiei:")
            text: backend.searchString


        }
       }

    Button{
        text: qsTr("Submit")
        onPressed: backend.glicemieStart=glicemiebefore.text
        onClicked: backend.glicemieStop=glicemieafter.text
    }
}
