cmake_minimum_required(VERSION 3.30.4)
project(cCourse)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)

# Options to build specific apps
option(FunctioPointerCallbacks "Build the Function pointers and Callbacks Application" OFF)

# Conditional inclusion based on selected app
if(FunctioPointerCallbacks)
    add_subdirectory(cApps/FunctioPointerCallbacks)
    add_executable(FuncPtrAndCallbacks main/main.c)
    target_include_directories(FuncPtrAndCallbacks  PRIVATE cApps/FunctioPointerCallbacks/include cApps/FunctioPointerCallbacks/interfaces/include )
    target_compile_definitions(FuncPtrAndCallbacks PRIVATE ${APP_FLAG})
    target_link_libraries(FuncPtrAndCallbacks  FunctioPointerCallbacks)

endif()

# Options to build specific apps
option(PointersModule "Build the Pointers Application" OFF)

# Conditional inclusion based on selected app
if(PointersModule)
    add_subdirectory(cApps/PointersModule)
    add_executable(pointersModule main/main.c)
    target_include_directories(pointersModule  PRIVATE cApps/PointersModule/include cApps/PointersModule/interfaces/include )
    target_compile_definitions(pointersModule PRIVATE ${APP_FLAG})
    target_link_libraries(pointersModule  PointersModule)

endif()

# Options to build specific apps
option(linkedLists "Build the Linked Lists Application" OFF)

# Conditional inclusion based on selected app
if(linkedLists)
    add_subdirectory(cApps/linkedLists)
    add_executable(LinkedLists main/main.c)
    target_include_directories(LinkedLists  PRIVATE cApps/linkedLists/include cApps/linkedLists/interfaces/include )
    target_compile_definitions(LinkedLists PRIVATE ${APP_FLAG})
    target_link_libraries(LinkedLists  linkedLists)

endif()



