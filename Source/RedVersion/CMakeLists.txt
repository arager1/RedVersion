
SET(LIBNAME RedVersion)

SET(SOURCES RedVersion.hpp 
			RedVersion.cpp
			ConsoleGame.hpp 
			ConsoleGame.cpp)

ADD_LIBRARY(${LIBNAME} ${SOURCES})

ADD_SUBDIRECTORY(Test)