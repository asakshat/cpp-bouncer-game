cmake_minimum_required(VERSION 3.28)
project(Bouncer CXX)

include(FetchContent)
FetchContent_Declare(sfml GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 3.1.0)
FetchContent_MakeAvailable(sfml)

file(GLOB SOURCES CONFIGURE_DEPENDS Source/*.cpp)
add_executable(Bouncer ${SOURCES})

target_include_directories(Bouncer PRIVATE Include)
target_compile_features(Bouncer PRIVATE cxx_std_20)
target_link_libraries(Bouncer PRIVATE SFML::Graphics SFML::Audio)

