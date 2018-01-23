cmake_minimum_required(VERSION 3.8)
PROJECT (Project)
SET(SRC_LIST A_Dependency1.h B_Dependency2.h C_Technique2.cpp)
ADD_EXECUTABLE(project ${SRC_LIST})