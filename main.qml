import QtQuick 2.0
import QtGraphicalEffects 1.0

Item {
    width: 500 * scaleFactor
    height: 100 * scaleFactor

    property var startTime: new Date();

    Timer {
        id: timer
        running: true
        repeat: true
        interval: 16
        triggeredOnStart: true
        onTriggered: setTime()
    }

    Text {
        id: timeText
        anchors {
            centerIn: parent
        }
        opacity: 0.5
        font {
            pointSize: 72
            family: "Stencil"
        }
        color: "Orange"
    }

    Glow {
        opacity: 0.3
        anchors.fill: timeText
        radius: 10
        samples: 17
        color: "white"
        source: timeText
    }

    /*
      Updates the timer text based on the currentTime - startTime
    */
    function setTime(){
        var now = new Date();
        var timeDiff = now - startTime;

        var ms = Math.round(timeDiff % 1000);
        timeDiff = Math.floor(timeDiff / 1000);

        var seconds = Math.round(timeDiff % 60);
        timeDiff = Math.floor(timeDiff / 60);

        var minutes = Math.round(timeDiff % 60);

        timeText.text = ('0' + minutes).substr(-2) + ":" + ('0' + seconds).substr(-2) + "." + ('00' + ms).substr(-3);
    }
}
