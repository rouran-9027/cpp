
cmake_minimum_required(VERSION 3.10)

# Build a test executable for tests/test_main.cpp (legacy simple test)
add_executable(test_main test_main.cpp ../src/operators/sum.cpp)
add_test(NAME test_main COMMAND test_main)

enable_testing()

# Try to find an installed GoogleTest first (preferred in CI or dev machines).
find_package(GTest QUIET)

if (GTest_FOUND)
	message(STATUS "Found system GoogleTest")
	add_executable(gtest_tests gtest_tests.cpp ../src/operators/sum.cpp ../src/operators/add.cpp)
	target_include_directories(gtest_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
	target_link_libraries(gtest_tests GTest::gtest_main)
	add_test(NAME gtest_tests COMMAND gtest_tests)
else()
	message(WARNING "System GoogleTest not found; skipping GoogleTest-based tests.\n"
					"If you want GoogleTest-based tests, install GoogleTest on the system or enable network to allow FetchContent and then re-run CMake.")
endif()
