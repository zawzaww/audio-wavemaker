cmake_minimum_required(VERSION 3.4.1)

add_library(native-lib SHARED native-lib.cpp)

add_library(Oscillator SHARED Oscillator.cpp)

add_library(AudioEngine SHARED AudioEngine.cpp)

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

target_link_libraries( # Specifies the target library.
        native-lib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})
