cmake_minimum_required(VERSION 3.12)
project(BasicKnowledge)

set(CMAKE_CXX_STANDARD 11)

add_executable(BasicKnowledge main.cpp lib/coordin.h lib/function.cpp lib/namespace.h classes/stock.h classes/stock.cpp Domain/time.cpp Domain/time.h Domain/Date.cpp Domain/Date.h Domain/String.cpp Domain/String.h Domain/Stack.cpp Domain/Stack.h Domain/Person.cpp Domain/Person.h Domain/Manager.cpp Domain/Manager.h abc/abc.cpp abc/abc.h Domain/Student.cpp Domain/Student.h ML/Worker.cpp ML/Worker.h ClassTemplate/Queue.cpp ClassTemplate/Queue.h ClassTemplate/StackTemp.h ClassTemplate/StackTemp.cpp friendClass/TV.cpp friendClass/TV.h)