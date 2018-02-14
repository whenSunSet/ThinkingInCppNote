cmake_minimum_required(VERSION 3.8)
SET(CMAKE_CXX_STANDARD 11)

PROJECT (Project1)
SET(SRC_LIST1 B_对象的创建与使用/C_编写第一个c++程序/Hello.cpp)
ADD_EXECUTABLE(Project1 ${SRC_LIST1})

PROJECT (Project2)
SET(SRC_LIST2 B_对象的创建与使用/D_关于输入输出流/CallHello.cpp)
ADD_EXECUTABLE(Project2 ${SRC_LIST2})

PROJECT (Project3)
SET(SRC_LIST3 B_对象的创建与使用/D_关于输入输出流/Concat.cpp)
ADD_EXECUTABLE(Project3 ${SRC_LIST3})

PROJECT (Project4)
SET(SRC_LIST4 B_对象的创建与使用/D_关于输入输出流/Numconv.cpp)
ADD_EXECUTABLE(Project4 ${SRC_LIST4})

PROJECT (Project5)
SET(SRC_LIST5 B_对象的创建与使用/D_关于输入输出流/Stream2.cpp)
ADD_EXECUTABLE(Project5 ${SRC_LIST5})

PROJECT (Project6)
SET(SRC_LIST6 B_对象的创建与使用/E_字符串简介/HelloStrings.cpp)
ADD_EXECUTABLE(Project6 ${SRC_LIST6})

PROJECT (Project7)
SET(SRC_LIST7 B_对象的创建与使用/F_文件读写/FillStrings.cpp)
ADD_EXECUTABLE(Project7 ${SRC_LIST7})

PROJECT (Project8)
SET(SRC_LIST8 B_对象的创建与使用/F_文件读写/Scopy.cpp)
ADD_EXECUTABLE(Project8 ${SRC_LIST8})

PROJECT (Project9)
SET(SRC_LIST9 B_对象的创建与使用/G_vector简介/Fillvector.cpp)
ADD_EXECUTABLE(Project9 ${SRC_LIST9})

PROJECT (Project10)
SET(SRC_LIST10 B_对象的创建与使用/G_vector简介/GetWords.cpp)
ADD_EXECUTABLE(Project10 ${SRC_LIST10})

PROJECT (Project11)
SET(SRC_LIST11 B_对象的创建与使用/G_vector简介/IntVector.cpp)
ADD_EXECUTABLE(Project11 ${SRC_LIST11})

PROJECT (Project_M_A_A)
SET(SRC_LIST_M_A_A M_动态对象创建/A_对象创建/A_MallocClass.cpp)
ADD_EXECUTABLE(Project_M_A_A ${SRC_LIST_M_A_A})

PROJECT (Project_M_A_C)
SET(SRC_LIST_M_A_C M_动态对象创建/A_对象创建/B_Tree.h M_动态对象创建/A_对象创建/C_NewAndDelete.cpp)
ADD_EXECUTABLE(Project_M_A_C ${SRC_LIST_M_A_C})

PROJECT (Project_M_B_A)
SET(SRC_LIST_M_B_A M_动态对象创建/B_重新设计前面的例子/A_BadVoidPointerDeletion.cpp)
ADD_EXECUTABLE(Project_M_B_A ${SRC_LIST_M_B_A})

PROJECT (Project_M_B_B)
SET(SRC_LIST_M_B_B
        M_动态对象创建/B_重新设计前面的例子/B_Project/A_PStash.h
        M_动态对象创建/B_重新设计前面的例子/B_Project/B_PStash.cpp
        M_动态对象创建/B_重新设计前面的例子/B_Project/C_PStashTest.cpp)
ADD_EXECUTABLE(Project_M_B_B ${SRC_LIST_M_B_B})

PROJECT (Project_M_C_A)
SET(SRC_LIST_M_C_A M_动态对象创建/C_耗尽内存/A_NewHandler.cpp)
ADD_EXECUTABLE(Project_M_C_A ${SRC_LIST_M_C_A})

PROJECT (Project_M_D_A)
SET(SRC_LIST_M_D_A M_动态对象创建/D_重载new和delete/A_GlobalOperatorNew.cpp)
ADD_EXECUTABLE(Project_M_D_A ${SRC_LIST_M_D_A})

PROJECT (Project_M_D_B)
SET(SRC_LIST_M_D_B M_动态对象创建/D_重载new和delete/B_Framis.cpp)
ADD_EXECUTABLE(Project_M_D_B ${SRC_LIST_M_D_B})

PROJECT (Project_M_D_C)
SET(SRC_LIST_M_D_C M_动态对象创建/D_重载new和delete/C_ArrayOperatorNew.cpp)
ADD_EXECUTABLE(Project_M_D_C ${SRC_LIST_M_D_C})

PROJECT (Project_M_D_D)
SET(SRC_LIST_M_D_D M_动态对象创建/D_重载new和delete/D_NoMemory.cpp)
ADD_EXECUTABLE(Project_M_D_D ${SRC_LIST_M_D_D})

PROJECT (Project_N_A_B)
SET(SRC_LIST_N_A_B N_继承和组合/A_组合语法/A_Useful.h N_继承和组合/A_组合语法/B_Composition.cpp)
ADD_EXECUTABLE(Project_N_A_B ${SRC_LIST_N_A_B})

PROJECT (Project_N_A_C)
SET(SRC_LIST_N_A_C N_继承和组合/A_组合语法/A_Useful.h N_继承和组合/A_组合语法/C_Composition2.cpp)
ADD_EXECUTABLE(Project_N_A_C ${SRC_LIST_N_A_C})

PROJECT (Project_N_B_A)
SET(SRC_LIST_N_B_A N_继承和组合/B_继承语法/A_Inheritance.cpp N_继承和组合/A_组合语法/A_Useful.h)
ADD_EXECUTABLE(Project_N_B_A ${SRC_LIST_N_B_A})

PROJECT (Project_N_C_A)
SET(SRC_LIST_N_C_A N_继承和组合/C_构造函数的初始化表达式/A_PseudoConstructor.cpp)
ADD_EXECUTABLE(Project_N_C_A ${SRC_LIST_N_C_A})

PROJECT (Project_N_D_A)
SET(SRC_LIST_N_D_A N_继承和组合/D_组合和继承的联合/A_Combined.cpp)
ADD_EXECUTABLE(Project_N_D_A ${SRC_LIST_N_D_A})

PROJECT (Project_N_D_B)
SET(SRC_LIST_N_D_B N_继承和组合/D_组合和继承的联合/B_Order.cpp)
ADD_EXECUTABLE(Project_N_D_B ${SRC_LIST_N_D_B})

PROJECT (Project_N_E_A)
SET(SRC_LIST_N_E_A N_继承和组合/E_名字隐藏/A_NameHiding.cpp)
ADD_EXECUTABLE(Project_N_E_A ${SRC_LIST_N_E_A})

PROJECT (Project_N_F_A)
SET(SRC_LIST_N_F_A N_继承和组合/F_非自动继承的函数/A_SynthesizeFunctions.cpp)
ADD_EXECUTABLE(Project_N_F_A ${SRC_LIST_N_F_A})

PROJECT (Project_N_G_A)
SET(SRC_LIST_N_G_A N_继承和组合/G_组合与继承的选择/A_Car.cpp)
ADD_EXECUTABLE(Project_N_G_A ${SRC_LIST_N_G_A})

PROJECT (Project_N_G_B)
SET(SRC_LIST_N_G_B N_继承和组合/G_组合与继承的选择/B_FName1.cpp)
ADD_EXECUTABLE(Project_N_G_B ${SRC_LIST_N_G_B})

PROJECT (Project_N_G_C)
SET(SRC_LIST_N_G_C N_继承和组合/G_组合与继承的选择/C_FName2.cpp)
ADD_EXECUTABLE(Project_N_G_C ${SRC_LIST_N_G_C})

PROJECT (Project_N_G_D)
SET(SRC_LIST_N_G_D N_继承和组合/G_组合与继承的选择/D_PrivateInheritance.cpp)
ADD_EXECUTABLE(Project_N_G_D ${SRC_LIST_N_G_D})

PROJECT (Project_N_H_A)
SET(SRC_LIST_N_H_A N_继承和组合/H_Protected/A_Protected.cpp)
ADD_EXECUTABLE(Project_N_H_A ${SRC_LIST_N_H_A})

PROJECT (Project_N_I_A)
SET(SRC_LIST_N_I_A N_继承和组合/I_运算符的重载与继承/A_OperatorInheritance.cpp L_运算符重载/C_可重载的运算符/E_Byte.h)
ADD_EXECUTABLE(Project_N_I_A ${SRC_LIST_N_I_A})

PROJECT (Project_N_J_A)
SET(SRC_LIST_N_J_A N_继承和组合/J_向上类型转型/A_Instrument.cpp)
ADD_EXECUTABLE(Project_N_J_A ${SRC_LIST_N_J_A})

PROJECT (Project_N_J_B)
SET(SRC_LIST_N_J_B N_继承和组合/J_向上类型转型/B_CopyConstructor.cpp)
ADD_EXECUTABLE(Project_N_J_B ${SRC_LIST_N_J_B})

PROJECT (Project_O_B_A)
SET(SRC_LIST_O_B_A O_多态性和虚函数/B_向上转型/A_Insrument2.cpp)
ADD_EXECUTABLE(Project_O_B_A ${SRC_LIST_O_B_A})

PROJECT (Project_O_C_A)
SET(SRC_LIST_O_C_A O_多态性和虚函数/C_问题/A_Instrument3.cpp)
ADD_EXECUTABLE(Project_O_C_A ${SRC_LIST_O_C_A})

PROJECT (Project_O_D_A)
SET(SRC_LIST_O_D_A O_多态性和虚函数/D_虚函数/A_Instrument4.cpp)
ADD_EXECUTABLE(Project_O_D_A ${SRC_LIST_O_D_A})

PROJECT (Project_O_E_A)
SET(SRC_LIST_O_E_A O_多态性和虚函数/E_C++如何实现晚绑定/A_Sizes.cpp)
ADD_EXECUTABLE(Project_O_E_A ${SRC_LIST_O_E_A})

PROJECT (Project_O_E_B)
SET(SRC_LIST_O_E_B O_多态性和虚函数/E_C++如何实现晚绑定/B_Early.cpp)
ADD_EXECUTABLE(Project_O_E_B ${SRC_LIST_O_E_B})

PROJECT (Project_O_F_A)
SET(SRC_LIST_O_F_A O_多态性和虚函数/F_抽象基类和纯虚函数/A_Instrument5.cpp)
ADD_EXECUTABLE(Project_O_F_A ${SRC_LIST_O_F_A})

PROJECT (Project_O_F_B)
SET(SRC_LIST_O_F_B O_多态性和虚函数/F_抽象基类和纯虚函数/B_PureVirtualDefinitions.cpp)
ADD_EXECUTABLE(Project_O_F_B ${SRC_LIST_O_F_B})

PROJECT (Project_O_G_A)
SET(SRC_LIST_O_G_A O_多态性和虚函数/G_继承和虚函数表/A_AddingVirtuals.cpp)
ADD_EXECUTABLE(Project_O_G_A ${SRC_LIST_O_G_A})

PROJECT (Project_O_G_B)
SET(SRC_LIST_O_G_B O_多态性和虚函数/G_继承和虚函数表/B_ObjectSlicing.cpp)
ADD_EXECUTABLE(Project_O_G_B ${SRC_LIST_O_G_B})

PROJECT (Project_O_H_A)
SET(SRC_LIST_O_H_A O_多态性和虚函数/H_重载和重新定义/A_NameHiding2.cpp)
ADD_EXECUTABLE(Project_O_H_A ${SRC_LIST_O_H_A})

PROJECT (Project_O_H_B)
SET(SRC_LIST_O_H_B O_多态性和虚函数/H_重载和重新定义/B_VariantReturn.cpp)
ADD_EXECUTABLE(Project_O_H_B ${SRC_LIST_O_H_B})

PROJECT (Project_O_I_A)
SET(SRC_LIST_O_I_A O_多态性和虚函数/I_析构函数和虚拟析构函数/A_VirtualDestructors.cpp)
ADD_EXECUTABLE(Project_O_I_A ${SRC_LIST_O_I_A})

PROJECT (Project_O_I_B)
SET(SRC_LIST_O_I_B O_多态性和虚函数/I_析构函数和虚拟析构函数/B_UnAbstract.cpp)
ADD_EXECUTABLE(Project_O_I_B ${SRC_LIST_O_I_B})

PROJECT (Project_O_I_C)
SET(SRC_LIST_O_I_C O_多态性和虚函数/I_析构函数和虚拟析构函数/C_PureVirtualDestuctors.cpp)
ADD_EXECUTABLE(Project_O_I_C ${SRC_LIST_O_I_C})

PROJECT (Project_O_I_D)
SET(SRC_LIST_O_I_D O_多态性和虚函数/I_析构函数和虚拟析构函数/D_VirtualInDestructors.cpp)
ADD_EXECUTABLE(Project_O_I_D ${SRC_LIST_O_I_D})

PROJECT (Project_O_I_F)
SET(SRC_LIST_O_I_F O_多态性和虚函数/I_析构函数和虚拟析构函数/E_OStack.h O_多态性和虚函数/I_析构函数和虚拟析构函数/F_OStackTest.cpp)
ADD_EXECUTABLE(Project_O_I_F ${SRC_LIST_O_I_F})

PROJECT (Project_O_J_A)
SET(SRC_LIST_O_J_A O_多态性和虚函数/J_运算符重载/A_OperatorPolymorphism.cpp)
ADD_EXECUTABLE(Project_O_J_A ${SRC_LIST_O_J_A})

PROJECT (Project_O_K_A)
SET(SRC_LIST_O_K_A O_多态性和虚函数/K_向下转型/A_DynamicCast.cpp)
ADD_EXECUTABLE(Project_O_K_A ${SRC_LIST_O_K_A})

PROJECT (Project_O_K_B)
SET(SRC_LIST_O_K_B O_多态性和虚函数/K_向下转型/B_StaticHierachyNavigation.cpp)
ADD_EXECUTABLE(Project_O_K_B ${SRC_LIST_O_K_B})

PROJECT (Project_P_A_A)
SET(SRC_LIST_P_A_A P_模板介绍/A_容器/A_IntStack.cpp P_模板介绍/A_容器/B_fibonacci.h P_模板介绍/A_容器/C_fibonacci.cpp)
ADD_EXECUTABLE(Project_P_A_A ${SRC_LIST_P_A_A})

PROJECT (Project_P_B_A)
SET(SRC_LIST_P_B_A P_模板介绍/B_模板/A_Array.cpp)
ADD_EXECUTABLE(Project_P_B_A ${SRC_LIST_P_B_A})

PROJECT (Project_P_B_B)
SET(SRC_LIST_P_B_B P_模板介绍/B_模板/B_Array2.cpp)
ADD_EXECUTABLE(Project_P_B_B ${SRC_LIST_P_B_B})

PROJECT (Project_P_B_D)
SET(SRC_LIST_P_B_D P_模板介绍/B_模板/C_StackTemplate.h P_模板介绍/B_模板/D_StackTemplate.cpp P_模板介绍/A_容器/C_fibonacci.cpp)
ADD_EXECUTABLE(Project_P_B_D ${SRC_LIST_P_B_D})

PROJECT (Project_P_B_E)
SET(SRC_LIST_P_B_E P_模板介绍/B_模板/E_Array3.cpp)
ADD_EXECUTABLE(Project_P_B_E ${SRC_LIST_P_B_E})

PROJECT (Project_P_C_B)
SET(SRC_LIST_P_C_B P_模板介绍/C_作为模板的Stash和Stack/A_TStash.h P_模板介绍/C_作为模板的Stash和Stack/B_TStackTest.cpp)
ADD_EXECUTABLE(Project_P_C_B ${SRC_LIST_P_C_B})

PROJECT (Project_P_C_F)
SET(SRC_LIST_P_C_F P_模板介绍/C_作为模板的Stash和Stack/C_TPStash.h P_模板介绍/C_作为模板的Stash和Stack/D_AutoCounter.cpp P_模板介绍/C_作为模板的Stash和Stack/E_AutoCounter.h P_模板介绍/C_作为模板的Stash和Stack/F_TPStashTest.cpp)
ADD_EXECUTABLE(Project_P_C_F ${SRC_LIST_P_C_F})


PROJECT (Project_P_D_A)
SET(SRC_LIST_P_D_A P_模板介绍/D_以值存放对象/A_ValueStack.h P_模板介绍/D_以值存放对象/B_SelfCounter.h P_模板介绍/D_以值存放对象/C_SelfCounter.cpp)
ADD_EXECUTABLE(Project_P_D_A ${SRC_LIST_P_D_A})

PROJECT (Project_P_E_A)
SET(SRC_LIST_P_E_A P_模板介绍/E_迭代器/A_IterIntStack.cpp P_模板介绍/A_容器/B_fibonacci.h P_模板介绍/A_容器/C_fibonacci.cpp)
ADD_EXECUTABLE(Project_P_E_A ${SRC_LIST_P_E_A})

PROJECT (Project_P_E_B)
SET(SRC_LIST_P_E_B P_模板介绍/E_迭代器/B_NestedIterator.cpp)
ADD_EXECUTABLE(Project_P_E_B ${SRC_LIST_P_E_B})

PROJECT (Project_P_E_C)
SET(SRC_LIST_P_E_C P_模板介绍/E_迭代器/C_IterStackTemplate.h P_模板介绍/E_迭代器/D_IterStackTemplateTest.cpp)
ADD_EXECUTABLE(Project_P_E_C ${SRC_LIST_P_E_C})

PROJECT (Project_P_E_D)
SET(SRC_LIST_P_E_D P_模板介绍/E_迭代器/E_TStack2.h P_模板介绍/E_迭代器/F_TStack2Test.cpp)
ADD_EXECUTABLE(Project_P_E_D ${SRC_LIST_P_E_D})

PROJECT (Project_P_E_E)
SET(SRC_LIST_P_E_E P_模板介绍/E_迭代器/G_TPStash2.h P_模板介绍/E_迭代器/H_TPStash2Test.cpp)
ADD_EXECUTABLE(Project_P_E_E ${SRC_LIST_P_E_E})

PROJECT (Project_P_F_A)
SET(SRC_LIST_P_F_A P_模板介绍/F_为什么使用迭代器/A_Shape.h P_模板介绍/F_为什么使用迭代器/B_Drawing.cpp P_模板介绍/E_迭代器/G_TPStash2.h P_模板介绍/E_迭代器/E_TStack2.h)
ADD_EXECUTABLE(Project_P_F_A ${SRC_LIST_P_F_A})

PROJECT (Project_Q_A_A)
SET(SRC_LIST_Q_A_A Q_建立稳定的系统/A_抛出异常/A_MyError.cpp)
ADD_EXECUTABLE(Project_Q_A_A ${SRC_LIST_Q_A_A})

PROJECT (Project_Q_B_A)
SET(SRC_LIST_Q_B_A Q_建立稳定的系统/B_捕获异常/A_Nonlocal2.cpp)
ADD_EXECUTABLE(Project_Q_B_A ${SRC_LIST_Q_B_A})

PROJECT (Project_Q_C_A)
SET(SRC_LIST_Q_C_A Q_建立稳定的系统/C_异常匹配/A_Autoexcp.cpp)
ADD_EXECUTABLE(Project_Q_C_A ${SRC_LIST_Q_C_A})

PROJECT (Project_Q_C_B)
SET(SRC_LIST_Q_C_B Q_建立稳定的系统/C_异常匹配/B_BaseExcept.cpp)
ADD_EXECUTABLE(Project_Q_C_B ${SRC_LIST_Q_C_B})

PROJECT (Project_Q_C_C)
SET(SRC_LIST_Q_C_C Q_建立稳定的系统/C_异常匹配/C_Terminator.cpp)
ADD_EXECUTABLE(Project_Q_C_C ${SRC_LIST_Q_C_C})

PROJECT (Project_Q_D_A)
SET(SRC_LIST_Q_D_A Q_建立稳定的系统/D_清理/A_Cleanup.cpp Q_建立稳定的系统/D_清理/E_InitExcept.cpp)
ADD_EXECUTABLE(Project_Q_D_A ${SRC_LIST_Q_D_A})

PROJECT (Project_Q_D_B)
SET(SRC_LIST_Q_D_B Q_建立稳定的系统/D_清理/B_Rawp.cpp)
ADD_EXECUTABLE(Project_Q_D_B ${SRC_LIST_Q_D_B})

PROJECT (Project_Q_D_C)
SET(SRC_LIST_Q_D_C Q_建立稳定的系统/D_清理/C_Wrapped.cpp)
ADD_EXECUTABLE(Project_Q_D_C ${SRC_LIST_Q_D_C})

PROJECT (Project_Q_D_D)
SET(SRC_LIST_Q_D_D Q_建立稳定的系统/D_清理/D_Auto_ptr.cpp)
ADD_EXECUTABLE(Project_Q_D_D ${SRC_LIST_Q_D_D})

PROJECT (Project_Q_D_E)
SET(SRC_LIST_Q_D_E Q_建立稳定的系统/D_清理/E_InitExcept.cpp)
ADD_EXECUTABLE(Project_Q_D_E ${SRC_LIST_Q_D_E})

PROJECT (Project_Q_E_A)
SET(SRC_LIST_Q_E_A Q_建立稳定的系统/E_异常标准/A_StdExcept.cpp)
ADD_EXECUTABLE(Project_Q_E_A ${SRC_LIST_Q_E_A})

PROJECT (Project_Q_F_A)
SET(SRC_LIST_Q_F_A Q_建立稳定的系统/F_异常规格说明/A_Unexpected.cpp)
ADD_EXECUTABLE(Project_Q_F_A ${SRC_LIST_Q_F_A})

PROJECT (Project_Q_F_B)
SET(SRC_LIST_Q_F_B Q_建立稳定的系统/F_异常规格说明/B_Covariance.cpp)
ADD_EXECUTABLE(Project_Q_F_B ${SRC_LIST_Q_F_B})

PROJECT (Project_Q_G_A)
SET(SRC_LIST_Q_G_A Q_建立稳定的系统/G_异常安全/A_SafeAssign.cpp)
ADD_EXECUTABLE(Project_Q_G_A ${SRC_LIST_Q_G_A})

PROJECT (Project_C_A_A)
SET(SRC_LIST_C_A_A C_C++中的C/A_创建函数/Retrun.cpp)
ADD_EXECUTABLE(Project_C_A_A ${SRC_LIST_C_A_A})

PROJECT (Project_C_E_A)
SET(SRC_LIST_C_E_A C_C++中的C/E_指定储存空间分配/A_Project/A_Global.cpp C_C++中的C/E_指定储存空间分配/A_Project/B_Global2.cpp)
ADD_EXECUTABLE(Project_C_E_A ${SRC_LIST_C_E_A})

PROJECT (Project_C_E_B)
SET(SRC_LIST_C_E_B C_C++中的C/E_指定储存空间分配/B_Project/A_Static.cpp C_C++中的C/E_指定储存空间分配/B_Project/B_FileStatic.cpp C_C++中的C/E_指定储存空间分配/B_Project/C_FileStatic2.cpp)
ADD_EXECUTABLE(Project_C_E_B ${SRC_LIST_C_E_B})

PROJECT (Project_D_A_A)
SET(SRC_LIST_D_A_A D_数据抽象/A_一个袖珍C库/A_Project/A_CLib.cpp
        D_数据抽象/A_一个袖珍C库/A_Project/B_CLibTest.cpp
        D_数据抽象/A_一个袖珍C库/A_Project/A_CLib.h)
ADD_EXECUTABLE(Project_D_A_A ${SRC_LIST_D_A_A})

PROJECT (Project_D_B_A)
SET(SRC_LIST_D_B_A D_数据抽象/B_基本对象/A_Project/A_CppLib.cpp
        D_数据抽象/B_基本对象/A_Project/A_CppLib.h
        D_数据抽象/B_基本对象/A_Project/B_CppLibTest.cpp)
ADD_EXECUTABLE(Project_D_B_A ${SRC_LIST_D_B_A})

PROJECT (Project_D_E_A)
SET(SRC_LIST_D_E_A D_数据抽象/E_嵌套结构/A_Project/A_Stack.cpp
        D_数据抽象/E_嵌套结构/A_Project/A_Stack.h
        D_数据抽象/E_嵌套结构/A_Project/B_StackTest.cpp
        D_数据抽象/E_嵌套结构/A_Project/C_Scoperes.cpp)
ADD_EXECUTABLE(Project_D_E_A ${SRC_LIST_D_E_A})

PROJECT (Project_E_D_A)
SET(SRC_LIST_E_D_A E_隐藏实现/D_句柄类/A_Project/A_Handler.cpp
        E_隐藏实现/D_句柄类/A_Project/A_Hanlder.h
        E_隐藏实现/D_句柄类/A_Project/UseHandler.cpp)
ADD_EXECUTABLE(Project_E_D_A ${SRC_LIST_E_D_A})

PROJECT (Project_TEST1)
SET(SRC_LIST_TEST1 测试/Test.cpp)
ADD_EXECUTABLE(Project_TEST1 ${SRC_LIST_TEST1})
