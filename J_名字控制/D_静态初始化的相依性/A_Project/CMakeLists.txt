cmake_minimum_required(VERSION 3.8)
PROJECT (Project)
SET(SRC_LIST A_Initializer.h B_InitializerDefs.cpp C_Initializer.cpp D_Initializer2.cpp)
ADD_EXECUTABLE(project ${SRC_LIST})