#include <iostream>

#include "blackjacklib/card.hpp"
#include "blackjacklib/suit.hpp"

int main(int argc, char const* argv[]) {
  int size = (blackjacklib::get_suit_length() - 1) *
             (blackjacklib::get_values_length() - 1);

  blackjacklib::card* cards = new blackjacklib::card[size];

  int card_index = 0;

  for (int i = 1; i < blackjacklib::get_suit_length(); i++) {
    for (int j = 1; j < blackjacklib::get_values_length(); j++) {
      cards[card_index] =
          blackjacklib::card(blackjacklib::Suit(i), blackjacklib::SuitValue(j));
      card_index++;
    }
  }

  std::cout << "Generated " << card_index << " cards" << std::endl;

  for (int i = 0; i < size; i++) {
    std::cout << cards[i].get_suit() << cards[i].get_value() << std::endl;
  }

  delete[] cards;

  return 0;
}
