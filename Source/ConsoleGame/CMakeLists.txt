
SET(LIBNAME ConsoleGame)

SET(SOURCES ConsoleGame.hpp 
			ConsoleGame.cpp)

ADD_LIBRARY(${LIBNAME} ${SOURCES})

TARGET_INCLUDE_DIRECTORIES(${LIBNAME} PUBLIC 
						   ${ConsoleGameEngine_SOURCE_DIR}/Source/Engine/Game 
						   ${ConsoleGameEngine_SOURCE_DIR}/Source/IntegralMath/PointerLogic)

TARGET_LINK_LIBRARIES(${LIBNAME} AbstractGame PointerLogic)

ADD_SUBDIRECTORY(Test)