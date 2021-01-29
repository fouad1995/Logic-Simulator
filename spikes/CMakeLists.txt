# ${CMAKE_SOURCE_DIR}/spikes/CMakeLists.txt

set(
    spikes
)

foreach(spike IN LISTS spikes)
    add_executable(
        ${spike}
        ${spike}.cpp
    )
endforeach()
