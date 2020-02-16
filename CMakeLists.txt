cmake_minimum_required(VERSION 3.15)
project(EventDispatcherTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(EventDispatcherTest main.cpp Event.h EventDispatcher.h EventHandler.h EventDispatcher.cpp SensorEmitter.h EventReceiver.h)