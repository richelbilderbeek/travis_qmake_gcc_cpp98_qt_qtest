QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Shared files
SOURCES += my_dialog.cpp
FORMS += my_dialog.ui
HEADERS += my_dialog.h
RESOURCES += travis_qmake_gcc_cpp98_qt_qtest.qrc

# Unique files
SOURCES += qtmain.cpp
