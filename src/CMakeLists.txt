# Add the subdirectory containing the blackjack library source files
add_subdirectory(blackjacklib)
add_subdirectory(tests)

# Specify the executable target for the main application
add_executable(blackjack
    main.cpp
)

# Include directories for blackjack executable
# This ensures that the blackjack executable has access to the library's headers.
target_include_directories(blackjack PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/blackjacklib    # Includes blackjacklib's headers
)

# Link the blackjack library to the executable
target_link_libraries(blackjack PRIVATE blackjacklib_lib)
