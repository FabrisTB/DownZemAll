#isEmpty(TEMPLATE):TEMPLATE=app
TARGET       = tst_resourceitem
CONFIG      += testcase
QT           = core testlib
SOURCES     += tst_resourceitem.cpp

CONFIG      += c++11

# Include:
INCLUDEPATH += ../../../include

# Resources:
HEADERS     += $$PWD/../../../src/core/mask.h
SOURCES     += $$PWD/../../../src/core/mask.cpp
HEADERS     += $$PWD/../../../src/core/resourceitem.h
SOURCES     += $$PWD/../../../src/core/resourceitem.cpp

