# ${CMAKE_SOURCE_DIR}/tests/acceptances/CMakeLists.txt
set(
    acceptances
)

foreach(acceptance IN LISTS acceptances)
    add_executable(
        ${acceptance}
        ${acceptance}.cpp
    )

    target_link_libraries(
        ${acceptance}
        PRIVATE
        GTest::GTest 
        GTest::Main
        LogicSimulator
    )

    set_target_properties(
        ${acceptance}
        PROPERTIES
        CXX_EXTENSIONS        OFF
        CXX_STANDARD          17
        CXX_STANDARD_REQUIRED ON
    )
endforeach()
