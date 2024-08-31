#ifndef CARD_HPP
#define CARD_HPP

#include "suit.hpp"  // Assuming this contains the suit and suit_value definitions

namespace blackjack {

class card {
 private:
  Suit card_suit;        // To store the suit of the card
  SuitValue card_value; // To store the value of the card

 public:
  // Constructor
  card(Suit suit, SuitValue value);
  card() : card_suit(Suit::NOSUIT), card_value(SuitValue::NOVALUE) {}

  // Destructor
  ~card();

  // Getter functions (if you need access to private members)
  Suit get_suit() const;
  SuitValue get_value() const;
};

}  // namespace blackjack

#endif  // CARD_HPP
