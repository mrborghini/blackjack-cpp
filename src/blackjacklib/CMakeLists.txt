# Define the blackjack library
add_library(blackjacklib_lib
    card.cpp
    suit.cpp
)

# Include directories for the blackjack library
# This makes the headers available to anyone linking against blackjack_lib.
target_include_directories(blackjacklib_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}   # Includes blackjack's headers (card.h, suit.h)
)
