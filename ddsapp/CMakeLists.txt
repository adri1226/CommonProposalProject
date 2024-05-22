cmake_minimum_required(VERSION 3.14)

# -------------------------------------------- RECURSES ------------------------------------------------------

file(GLOB_RECURSE PACKAGE_DDSAPP
    ${PROJECT_SOURCE_DIR}/ddsapp/*.hpp
    ${PROJECT_SOURCE_DIR}/ddsapp/*.cpp)

file(GLOB_RECURSE UTILS
    ${PROJECT_SOURCE_DIR}/src/utils/*.hpp
    ${PROJECT_SOURCE_DIR}/src/utils/*.cpp)

file(GLOB_RECURSE IDL
    ${PROJECT_SOURCE_DIR}/src/idl/*.hpp
    ${PROJECT_SOURCE_DIR}/src/idl/*.cxx)
# -------------------------------------------- RECURSES ------------------------------------------------------

# ------------------------------------------- PROJECT SOURCES ------------------------------------------------
set(PROJECT_SOURCES_DDSAPP
    ${IDL}
    ${UTILS}
    ${PACKAGE_DDSAPP}
    ${PROJECT_SOURCE_DIR}/ddsapp/mainDDSAPP.cpp
    )
# ------------------------------------------- PROJECT SOURCES ------------------------------------------------
# ----------------------------------------- GENERING EXECUTABLE ----------------------------------------------

add_executable(DDSAPP
    ${PROJECT_SOURCES_DDSAPP}
    )
# ----------------------------------------- GENERING EXECUTABLE ----------------------------------------------

# ---------------------------------- CONFIGURATION EXECUTABLE BACKEND ----------------------------------------
target_include_directories(DDSAPP
    PUBLIC ${PROJECT_SOURCE_DIR}/src
)

target_link_libraries(DDSAPP
    PUBLIC RTIConnextDDS::cpp2_api)
# ---------------------------------- CONFIGURATION EXECUTABLE BACKEND ----------------------------------------

