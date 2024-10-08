#include <card.hpp>
#include <iostream>

int test_suit(blackjacklib::Card card) { return card.get_suit() == blackjacklib::Suit::HEARTS; }

int test_value(blackjacklib::Card card) { return card.get_value() == blackjacklib::SuitValue::ACE; }

int main(int argc, char const *argv[]) {
  blackjacklib::Card card(blackjacklib::Suit::HEARTS, blackjacklib::SuitValue::ACE);

  if (test_suit(card) && test_value(card)) {
    std::cout << "Test passed!" << std::endl;
    return 0;
  }

  std::cout << "Test failed!" << std::endl;

  return 1;
}
