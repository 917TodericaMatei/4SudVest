import QtQuick 2.15
import QtQuick.Controls 2.15
import io.qt.examples.backend 1.0

ApplicationWindow {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Stack")



    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        ToolButton {
            id: toolButton
            text: stackView.depth > 1 ? "\u25C0" : "\u2630"
            font.pixelSize: Qt.application.font.pixelSize * 1.6
            onClicked: {
                if (stackView.depth > 1) {
                    stackView.pop()
                } else {
                    drawer.open()
                }
            }
        }

        Label {
            text: stackView.currentItem.title
            anchors.centerIn: parent
        }
    }

    Drawer {
        id: drawer
        width: window.width * 0.66
        height: window.height



        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Numele alimentului")
                width: parent.width
                onClicked: {
                    stackView.push("Page1Form.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Camara scan")
                width: parent.width
                onClicked: {
                    stackView.push("Page2Form.qml")
                    drawer.close()

                }
            }
            ItemDelegate {
                text: qsTr("Date personale")
                width: parent.width
                onClicked: {
                    stackView.push("Page3Form.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Calibrare")
                width: parent.width
                onClicked: {
                    stackView.push("Page4Form.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Helps and tips")
                width: parent.width
                onClicked: {
                    stackView.push("Page5Form.qml")
                    drawer.close()
                }
            }
        }
    }

    StackView {
        id: stackView
        initialItem: "HomeForm.qml"
        anchors.fill: parent
    }
}
