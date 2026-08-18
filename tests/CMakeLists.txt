include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.4
)

FetchContent_MakeAvailable(Catch2)

file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(adsa_tests ${TEST_SOURCES})

target_link_libraries(adsa_tests
    PRIVATE
    adsa
    Catch2::Catch2WithMain
)

include(Catch)
catch_discover_tests(adsa_tests)
