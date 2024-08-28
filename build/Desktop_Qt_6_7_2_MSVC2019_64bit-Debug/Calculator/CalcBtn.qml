import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Button {
    Layout.fillHeight: true
    Layout.fillWidth: true
    onClicked: {
        if (text !== "=") {
            text_expr.text += text
        }
    }
}
