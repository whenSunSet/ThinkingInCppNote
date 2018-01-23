cmake_minimum_required(VERSION 3.8)
PROJECT (Project)
SET(SRC_LIST ../../../common/printBinary.h ../../../common/printBinary.cpp C_Bitwise.cpp D_Rotation.cpp)
ADD_EXECUTABLE(project ${SRC_LIST})