#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"

namespace blackjacklib {
class Deck {
 private:
  Card* cards;
  int card_amount;
  int cards_left;
  void clear();
  

 public:
  Deck();
  ~Deck();

  void generate_new_deck();
  int card_left() const;
};

}  // namespace blackjacklib
#endif