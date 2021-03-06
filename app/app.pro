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

TARGET = selector

SOURCES += \
  actions.cpp \
  box_pkg.cpp \
  box_sql.cpp \
  browser.cpp \
  main.cpp \
  selector.cpp

HEADERS += \
  actions.h \
  box_pkg.h \
  box_sql.h \
  browser.h \
  selector.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
  readme.text

RESOURCES += \
  i18n.qrc \
  icons.qrc \
  skins.qrc

TRANSLATIONS += \
  i18n/selector_de_DE.ts \
  i18n/selector_fr_FR.ts \
  i18n/selector_ru_RU.ts

# Application information (properties)
VERSION = 2022.03.10
QMAKE_TARGET_COMPANY = "Country Tech"
QMAKE_TARGET_PRODUCT = "Selector"
QMAKE_TARGET_DESCRIPTION = "Application for database development"
QMAKE_TARGET_COPYRIGHT = "Yuriy Lazutin"
win32: RC_ICONS = $$PWD/icons/selector.ico
macx:ICON = $${PWD}/icons/selector.icns
