
SET(LIBNAME ConsoleGame)

SET(SOURCES RedVersion.hpp 
			RedVersion.cpp
			ConsoleGame.hpp 
			ConsoleGame.cpp)

ADD_LIBRARY(${LIBNAME} ${SOURCES})

TARGET_INCLUDE_DIRECTORIES(${LIBNAME} PUBLIC 
						   ${ConsoleGameEngine_SOURCE_DIR}/Source/Engine/Game)

TARGET_LINK_LIBRARIES(${LIBNAME} AbstractGame)

ADD_SUBDIRECTORY(Test)