TEMPLATE = app
TARGET = MonProjectGUI
QT += core \
    gui
HEADERS += ajoutentraineurinterface.h \
    ajouterjoueurinterface.h \
    monprojectgui.h \
    
SOURCES += ajoutentraineurinterface.cpp \
    ajouterjoueurinterface.cpp \
    main.cpp \
    monprojectgui.cpp
FORMS += ajoutentraineurinterface.ui \
    ajouterjoueurinterface.ui \
    monprojectgui.ui \
    
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
