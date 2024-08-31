#ifndef CARD_HPP
#define CARD_HPP

#include "suit.hpp"

namespace blackjacklib {

class Card {
 private:
  Suit card_suit;        // To store the suit of the card
  SuitValue card_value; // To store the value of the card

 public:
  // Constructor
  Card(Suit suit, SuitValue value);
  Card() : card_suit(Suit::NOSUIT), card_value(SuitValue::NOVALUE) {}

  // Getter functions (if you need access to private members)
  Suit get_suit() const;
  SuitValue get_value() const;
};
}  // namespace blackjacklib

#endif  // CARD_HPP
