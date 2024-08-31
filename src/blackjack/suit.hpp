#ifndef SUIT_HPP
#define SUIT_HPP
#include <iostream>
namespace blackjack {

// Enum for suits
enum Suit {
  NOSUIT,
  HEARTS,
  DIAMONDS,
  SPADES,
  CLUBS,
};

// Enum for suit values
enum SuitValue {
  NOVALUE,
  ACE,
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
};

// Overload operator<< for suit
std::ostream& operator<<(std::ostream& os, Suit s);

// Overload operator<< for suit_value
std::ostream& operator<<(std::ostream& os, SuitValue v);

int get_suit_length();
int get_values_length();

}  // namespace blackjack

#endif  // SUIT_HPP
