cmake_minimum_required(VERSION 3.0)
project(set_composer)

set(CMAKE_CXX_STANDARD 11)
find_path(ANTLR4_INCLUDE_DIR antlr4-runtime/antlr4-runtime.h)
find_library(ANTLR4 antlr4-runtime/)

include_directories(${ANTLR4_INCLUDE_DIR}/antlr4-runtime)

add_executable(set_composer
        OrderedPair.cpp OrderedPair.h
        Set.cpp Set.h
        SetNotationListener.cpp SetNotationListener.h
        SetBaseListener.cpp SetBaseListener.h
        SetLexer.cpp SetLexer.h
        SetListener.cpp SetListener.h
        SetParser.cpp SetParser.h
        main.cpp)
target_link_libraries(set_composer ${ANTLR4})