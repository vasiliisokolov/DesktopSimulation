cmake_minimum_required (VERSION 3.8)

add_executable (DesktopSimulation "DesktopSimulation.cpp" "${MY_INCLUDE_DIR}/DesktopSimulation.h" "${MY_INCLUDE_DIR}/Window.h" "${MY_INCLUDE_DIR}/Screen.h")
target_include_directories(DesktopSimulation PUBLIC ${MY_INCLUDE_DIR})