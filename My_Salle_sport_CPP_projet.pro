QT       += core gui sql
unix:LIBS += -lpq
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.5.0

SOURCES += \
    abonnement.cpp \
    ajouterm.cpp \
    dashboordhamza.cpp \
    fichiermem.cpp \
    historique.cpp \
    main.cpp \
    mainwindow.cpp \
    memberes.cpp \
    modifier.cpp \
    modifier_abonnement.cpp \
    paiment.cpp \
    reglements.cpp \
    regler.cpp \
    renouvler_abonnement.cpp \
    restaurermem.cpp \
    statistique.cpp \
    supprission.cpp

HEADERS += \
    abonnement.h \
    ajouterm.h \
    connexion_my_sql.h \
    dashboordhamza.h \
    fichiermem.h \
    historique.h \
    mainwindow.h \
    memberes.h \
    modifier.h \
    modifier_abonnement.h \
    paiment.h \
    reglements.h \
    regler.h \
    renouvler_abonnement.h \
    restaurermem.h \
    statistique.h \
    supprission.h

FORMS += \
    abonnement.ui \
    ajouterm.ui \
    dashboordhamza.ui \
    fichiermem.ui \
    historique.ui \
    mainwindow.ui \
    memberes.ui \
    modifier.ui \
    modifier_abonnement.ui \
    paiment.ui \
    reglements.ui \
    regler.ui \
    renouvler_abonnement.ui \
    restaurermem.ui \
    statistique.ui \
    supprission.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
