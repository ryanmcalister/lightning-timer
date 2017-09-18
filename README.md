# Lightning Timer
A screen timer display for lightning talks. 

# The Application
This application demonstrates how to handle high dpi display settings for a Qt Quick UI. It displays a clock timer in a QQuickWidget window that is transparent and non-interactive. The main QML file defines a simple timer display. If the user changes the MS Windows font scaling display settings to something greater than %100, the application will display nicely once restarted. 

# Achieving Level-2 Awareness
The application scales it's window size based on the logical dpi setting of the screen to make it 'Screen-DPI Aware'. Please note, it will take additional code logic to detect when the screen or dpi changes while the application is running but that is left as a user exercise.

# Alternative
For an acceptable and easy solution without adding code for dpi awareness, you can simply place the provided qt.conf file in the running directory. This will tell MS Windows that the application is 'DPI Unaware' and it will scale the application appropriately.

# To Use
* Open LightningTimer.pro in Qt Creator
* Run the project

# References
* [http://doc.qt.io/qt-5/highdpi.html](http://doc.qt.io/qt-5/highdpi.html)
* [http://doc.qt.io/qt-5/qt-conf.html](http://doc.qt.io/qt-5/qt-conf.html)
