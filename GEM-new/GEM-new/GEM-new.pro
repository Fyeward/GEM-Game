QT       += core gui
QT       += multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutdlg.cpp \
    config.cpp \
    configdao.cpp \
    configlogic.cpp \
    gamedlg.cpp \
    gamelogic.cpp \
    helpdlg.cpp \
    main.cpp \
    mainwindow.cpp \
    menudlg.cpp \
    musicdlg.cpp \
    musicplayer.cpp \
    namedlg.cpp \
    rankdao.cpp \
    rankdlg.cpp \
    ranklogic.cpp \
    setdlg.cpp \
    themedlg.cpp

HEADERS += \
    Global.h \
    aboutdlg.h \
    config.h \
    configdao.h \
    configlogic.h \
    gamedlg.h \
    gamelogic.h \
    helpdlg.h \
    mainwindow.h \
    menudlg.h \
    musicdlg.h \
    musicplayer.h \
    namedlg.h \
    rankdao.h \
    rankdlg.h \
    ranklogic.h \
    setdlg.h \
    themedlg.h

FORMS += \
    aboutdlg.ui \
    gamedlg.ui \
    helpdlg.ui \
    mainwindow.ui \
    menudlg.ui \
    musicdlg.ui \
    namedlg.ui \
    rankdlg.ui \
    setdlg.ui \
    themedlg.ui

TRANSLATIONS += \
    GEM_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    1.jpg
