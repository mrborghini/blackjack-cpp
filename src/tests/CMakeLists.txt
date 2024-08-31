# Create the test executables
add_executable(test_card
    test_card.cpp
)

add_executable(test_deck
    test_deck.cpp
)

# Include directories for the test executables
target_include_directories(test_card PRIVATE
    ${CMAKE_SOURCE_DIR}/src/blackjacklib    # Includes blackjack headers
)

target_include_directories(test_deck PRIVATE
    ${CMAKE_SOURCE_DIR}/src/blackjacklib    # Includes blackjack headers
)

# Link the blackjack library to the test executables
target_link_libraries(test_card PRIVATE blackjacklib_lib)
target_link_libraries(test_deck PRIVATE blackjacklib_lib)

# Register the tests with CTest
add_test(NAME BlackjackTestCard COMMAND test_card)
add_test(NAME BlackjackTestDeck COMMAND test_deck)
