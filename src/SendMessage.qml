import QtQuick 2.12
import QtQuick.Controls 2.15

Button
{
    id: senderButton
    text: "Send Message"

    onClicked:
    {
        view.pressed();
    }
}
