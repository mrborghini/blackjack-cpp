#include <iostream>

#include "blackjack/card.hpp"
#include "blackjack/suit.hpp"

int main(int argc, char const* argv[]) {
  int size =
      (blackjack::get_suit_length() - 1) * (blackjack::get_values_length() - 1);

  blackjack::card* cards = new blackjack::card[size];

  int card_index = 0;

  for (int i = 1; i < blackjack::get_suit_length(); i++) {
    for (int j = 1; j < blackjack::get_values_length(); j++) {
      cards[card_index] =
          blackjack::card(blackjack::Suit(i), blackjack::SuitValue(j));
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
