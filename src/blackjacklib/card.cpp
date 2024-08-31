#include "card.hpp"

namespace blackjacklib {

// Constructor
Card::Card(Suit suit, SuitValue value) : card_suit(suit), card_value(value) {
  // Initialization of card_suit and card_value
}

// Getter for card_suit
Suit Card::get_suit() const { return card_suit; }

// Getter for card_value
SuitValue Card::get_value() const { return card_value; }

}  // namespace blackjacklib
