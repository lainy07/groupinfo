QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    edit_other.cpp \
    first_info.cpp \
    main.cpp \
    mainwindow.cpp \
    other_info.cpp

HEADERS += \
    edit_other.h \
    fileReadWrite.h \
    first_info.h \
    mainwindow.h \
    other_info.h

FORMS += \
    edit_other.ui \
    first_info.ui \
    mainwindow.ui \
    other_info.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
