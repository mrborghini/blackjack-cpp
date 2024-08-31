#include <card.hpp>
#include <iostream>

int test_suit(blackjack::card card) { return card.get_suit() == blackjack::Suit::HEARTS; }

int test_value(blackjack::card card) { return card.get_value() == blackjack::SuitValue::ACE; }

int main(int argc, char const *argv[]) {
  blackjack::card card(blackjack::Suit::HEARTS, blackjack::SuitValue::ACE);

  if (test_suit(card) && test_value(card)) {
    std::cout << "Test passed!" << std::endl;
    return 0;
  }

  std::cout << "Test failed!" << std::endl;

  return 1;
}
