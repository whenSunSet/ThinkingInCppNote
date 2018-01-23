cmake_minimum_required(VERSION 3.8)
PROJECT (Project)
SET(SRC_LIST A_Sizeof.cpp ../B_基本对象/A_Project/A_CppLib.h ../B_基本对象/A_Project/A_CppLib.cpp ../A_一个袖珍C库/A_Project/A_CLib.h ../A_一个袖珍C库/A_Project/A_CLib.cpp)
ADD_EXECUTABLE(project ${SRC_LIST})