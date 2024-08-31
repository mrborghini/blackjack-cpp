# Create the test executable
add_executable(test_card
    test_card.cpp
)

# Include directories for the test executable
target_include_directories(test_card PRIVATE
    ${CMAKE_SOURCE_DIR}/src/blackjacklib    # Includes blackjack headers
)

# Link the blackjack library and Google Test to the test executable
target_link_libraries(test_card PRIVATE blackjacklib_lib)

# Register the test with CTest
add_test(NAME BlackjackTests COMMAND test_card)
