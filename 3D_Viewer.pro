QT       += core gui openglwidgets opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# LIBS += -lopengl32 -lglu32 -lgdi32

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += view

SOURCES += \
   # autosave.cpp \
    gif_library/gif.cpp \
    main.cpp \
    view/mainwindow.cpp \
    view/myglwidget.cpp \
    controller/controller.cc \
    model/model_affine_transfer.cc \
    model/model_parser.cc \
    model/model.cc

HEADERS += \
    gif_library/gif.hpp \
    view/mainwindow.h \
    view/myglwidget.h \
    controller/controller.h \
    model/model_affine_transfer.h \
    model/model_parser.h \
    model/model.h \
    viewer_data.h

FORMS += \
    view/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
