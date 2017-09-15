# Lightning Timer
A screen timer display for lightning talks. 

# The Application
This application demonstrates how to handle high dpi display settings for a Qt Quick UI. It displays a clock timer in a QQuickWidget window that is transparent and non-interactive. The main QML file defines a simple timer display. The application scales it's window size based on the logical dpi setting of the screen to make it 'Screen-DPI Aware'. Alternatively, the qt.conf file can be placed in the running directory to declare the application 'DPI Unaware' so MS Windows will scale the application appropriately.

# To Use
* Open LightningTimer.pro in Qt Creator
* Run the project

# References
* [http://doc.qt.io/qt-5/highdpi.html](http://doc.qt.io/qt-5/highdpi.html)
* [http://doc.qt.io/qt-5/qt-conf.html](http://doc.qt.io/qt-5/qt-conf.html)
