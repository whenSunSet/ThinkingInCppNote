cmake_minimum_required(VERSION 3.8)
PROJECT (Project)
SET(SRC_LIST A_NamespaceInt.h B_NamespaceMath.h E_NamespaceOverriding2.h F_OverridingAmbiguity.cpp)
ADD_EXECUTABLE(project ${SRC_LIST})