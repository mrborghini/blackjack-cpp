#include <iostream>

#include "blackjacklib/deck.hpp"

int main(int argc, char const* argv[]) {
  blackjacklib::Deck deck;

  deck.generate_new_deck();

  std::cout << deck.card_left() << std::endl;
  return 0;
}
