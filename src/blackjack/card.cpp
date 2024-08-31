#include "card.hpp"

namespace blackjack {

// Constructor
card::card(Suit suit, SuitValue value) : card_suit(suit), card_value(value) {
  // Initialization of card_suit and card_value
}

// Destructor
card::~card() {
  // Cleanup if needed
}

// Getter for card_suit
Suit card::get_suit() const { return card_suit; }

// Getter for card_value
SuitValue card::get_value() const { return card_value; }

}  // namespace blackjack
