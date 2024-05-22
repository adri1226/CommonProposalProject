import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout
    {
        Button
        {
            id: senderButton
            text: "Send Message"

            onClicked:
            {
                view.pressed();
            }
        }
    }
}
