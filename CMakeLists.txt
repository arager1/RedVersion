
CMAKE_MINIMUM_REQUIRED(VERSION 3.12 FATAL_ERROR)

PROJECT("RedVersion" VERSION 1.0 LANGUAGES CXX)

SET(CMAKE_CXX_STANDARD 11)

# FIND_PACKAGE(Git)

# IF(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
#     OPTION(GIT_SUBMODULE "Check submodules during build" ON)
#     IF(GIT_SUBMODULE)
#         MESSAGE(STATUS "Submodule update")
#         EXECUTE_PROCESS(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
#                         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#                         RESULT_VARIABLE GIT_SUBMOD_RESULT)
#         IF(NOT GIT_SUBMOD_RESULT EQUAL "0")
#             MESSAGE(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
#         ENDIF()
#     ENDIF()
# ENDIF()

# IF(NOT EXISTS "${PROJECT_SOURCE_DIR}/ConsoleGameEngine/Source/CMakeLists.txt")
#     MESSAGE(FATAL_ERROR "The submodules were not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
# ENDIF()

ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/ConsoleGameEngine)
ADD_SUBDIRECTORY(Source)
