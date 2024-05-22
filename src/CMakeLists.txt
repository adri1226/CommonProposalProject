cmake_minimum_required(VERSION 3.14)

file(GLOB_RECURSE APP_SOURCES
  ${PROJECT_SOURCE_DIR}/src/*.hpp
  ${PROJECT_SOURCE_DIR}/src/*.cpp
  ${PROJECT_SOURCE_DIR}/src/*.cxx
  ${PROJECT_SOURCE_DIR}/src/*.qml)

set(PROJECT_SOURCES
        ${APP_SOURCES}
        ${PROJECT_SOURCE_DIR}/src/qml.qrc
)

add_executable(CommonProposalProject
  ${PROJECT_SOURCES}
)

include_directories(${PROJECT_SOURCE_DIR})

target_compile_definitions(CommonProposalProject
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
  
target_link_libraries(CommonProposalProject
  PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick
  PUBLIC RTIConnextDDS::cpp2_api)

set_target_properties(CommonProposalProject PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_import_qml_plugins(CommonProposalProject)
    qt_finalize_executable(CommonProposalProject)
endif()
