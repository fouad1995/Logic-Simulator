cmake_minimum_required(VERSION 3.12)

project(LogicSimulator LANGUAGES CXX)

# ===========================================
option(ENABLE_SPIKES           "Build spikes"             ON)
option(ENABLE_TESTS            "Build unit tests"         ON)
option(ENABLE_ACCEPTANCE       "Build acceptance tests"   ON)
# ===========================================
# ================================== PACKAGES ==========================================

# ================================== PACKAGES ==========================================
# ===========================================
add_library(
    LogicSimulator
    SHARED
)

target_sources(
    LogicSimulator
    PRIVATE
    src/core/Gate.cpp
    src/core/Node.cpp
    src/and/and_gate.cpp
    src/nand/nand_gate.cpp
    src/nor/nor_gate.cpp
    src/not/not_gate.cpp
    src/or/or_gate.cpp
    src/xnor/xnor_gate.cpp
    src/xor/xor_gate.cpp
    )

target_include_directories(
    LogicSimulator
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>
    $<INSTALL_INTERFACE:include/>
)

# ========================================== EXPORT HEADERS ==========================================
include (GenerateExportHeader)
GENERATE_EXPORT_HEADER (LogicSimulator
    BASE_NAME LogicSimulator
    EXPORT_MACRO_NAME LogicSimulator_EXPORT
    EXPORT_FILE_NAME LogicSimulator_Export.h
    STATIC_DEFINE LogicSimulator_BUILT_AS_STATIC
)
# ====================================================================================================
# no link till now 
#target_link_libraries(
#    PluginManager
#    PRIVATE
#    
#)
set_target_properties(
    LogicSimulator
    PROPERTIES
    CXX_EXTENSIONS        OFF
    CXX_STANDARD          17
    CXX_STANDARD_REQUIRED ON
)
# ===========================================

# ===========================================
if(ENABLE_SPIKES)
    add_subdirectory(spikes)
endif()

if(ENABLE_TESTS OR ENABLE_ACCEPTANCE)
    enable_testing()
    add_subdirectory(tests)
endif()
# ===========================================

