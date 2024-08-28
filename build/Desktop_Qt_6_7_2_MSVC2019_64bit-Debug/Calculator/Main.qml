import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import Calculator


Window {
    id: main_window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    // MC {
    //     id: mc
    // }

    // TableView {
    //     anchors.fill: parent
    //     columnSpacing: 1
    //     rowSpacing: 1
    //     clip: true

    //     model: mc

    //     delegate: Rectangle {
    //         implicitWidth: 100
    //         implicitHeight: 100
    //         border.width: 2

    //         Text {
    //             text: display
    //         }
    //     }
    // }

    property var calc_chars: [0,1,2,3,4,5,6,7,8,9,"+","-","*","/","="]
    property int index: 0

    ColumnLayout{
            anchors.fill: parent
            TextInput {
                id: text_expr
                Layout.fillWidth: true
                Layout.preferredHeight: 80
                color: "blue"
            }
            GridLayout {
                id: grid_area
                columns: 3
                Repeater {
                    model: 15
                    CalcBtn {
                        required property int index
                        text: calc_chars[index]
                    }
                }
            }
        }


}

