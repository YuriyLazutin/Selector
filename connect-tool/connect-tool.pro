QT       += core gui

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

INCLUDEPATH += "$$PWD/include"

# This macro is needed to prevent ORA-24960: the attribute  OCI_ATTR_USERNAME is greater than the maximum allowable length of 255
# raised in Oracle instant client v11.2 function env->createConnection("user", "password", "database");
# This macro must be included before including any library headers (it means occi.h).
# Read more: https://gcc.gnu.org/onlinedocs/libstdc++/manual/using_dual_abi.html
# Alternatively we can setup CXXFLAG in *.pro file to recompile all application with old ABI
# QMAKE_CXXFLAGS += -D_GLIBCXX_USE_CXX11_ABI=0

# Linker parameters
#QMAKE_LFLAGS += -Wl,-rpath,$$PWD/lib
QMAKE_RPATHDIR = $$PWD/lib
LIBS += -L$$PWD/lib -locci -lclntsh

SOURCES += \
    connect_tool.cpp \
    ctool.cpp \
    dboracle.cpp \
    main.cpp

HEADERS += \
    connect_tool.h \
    ctool.h \
    dboracle.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    readme.text

FORMS += \
    ctool.ui

RESOURCES += \
    icons.qrc
