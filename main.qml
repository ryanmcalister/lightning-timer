import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    width: 550
    height: 150

    Item {
        anchors.fill: parent

        layer.enabled: true
        opacity: 0.6

        Timer {
            id: timer
            running: true
            repeat: true
            interval: 16
            triggeredOnStart: true
            onTriggered: _private.setTime()
        }

        Text {
            id: timeText
            anchors {
                centerIn: parent
            }
            font {
                pointSize: 72
                family: "Lucida Console"
            }
            color: _private.minutesPassed < 6 ? "orange" : "red"
        }

        Glow {
            anchors.fill: timeText
            radius: 10
            samples: 17
            color: "white"
            source: timeText
        }
    }


    QtObject {
        id: _private
        property var startTime: new Date();
        property int minutesPassed: 0

        /*
          Updates the timer text based on the currentTime - startTime
        */
        function setTime(){
            var now = new Date();
            var timeDiff = now - _private.startTime;

            var ms = Math.round(timeDiff % 1000);
            timeDiff = Math.floor(timeDiff / 1000);

            var seconds = Math.round(timeDiff % 60);
            timeDiff = Math.floor(timeDiff / 60);

            minutesPassed = Math.round(timeDiff % 60);

            timeText.text = ('0' + minutesPassed).substr(-2) + ":" + ('0' + seconds).substr(-2) + "." + ('00' + ms).substr(-3);
        }
    }


}
