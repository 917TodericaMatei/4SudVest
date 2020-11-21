import QtQuick 2.15
import QtQuick.Controls 2.15

Page {
    id: page
    width: 600
    height: 400


    title: qsTr("Glicostat")

    Label {
        text: qsTr("Welcome at Glicostat application!")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.rightMargin: -197
        anchors.leftMargin: 197
        anchors.topMargin: 192
        transformOrigin: Item.Bottom


}
}
