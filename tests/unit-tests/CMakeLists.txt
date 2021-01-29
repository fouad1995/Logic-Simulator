# ${CMAKE_SOURCE_DIR}/tests/unit-tests/
set(
    test_cases
    TestAndGate
    TestNandGate
    TestnorGate
    TestNotGate
    TestOrGate
    TestXnorGate
    TestXorGate
)

foreach(test_case IN LISTS test_cases)
    add_executable(
        ${test_case}
        ${test_case}.cpp
    )

    target_link_libraries(
        ${test_case}
        PRIVATE
        GTest::GTest 
        GTest::Main
        LogicSimulator
    )

    set_target_properties(
        ${test_case}
        PROPERTIES
        CXX_EXTENSIONS        OFF
        CXX_STANDARD          17
        CXX_STANDARD_REQUIRED ON
    )
endforeach()