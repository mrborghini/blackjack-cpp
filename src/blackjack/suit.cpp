#include "suit.hpp"

#include <iostream>
#include <map>

namespace blackjack {

// Overload operator<< for suit
std::ostream& operator<<(std::ostream& os, Suit s) {
  switch (s) {
    case HEARTS:
      os << "♥";  // Directly use Unicode
      break;
    case DIAMONDS:
      os << "♦";  // Directly use Unicode
      break;
    case SPADES:
      os << "♠";  // Directly use Unicode
      break;
    case CLUBS:
      os << "♣";  // Directly use Unicode
      break;
    default:
      os << "Unknown Suit";
      break;
  }
  return os;
}

// Overload operator<< for suit_value
std::ostream& operator<<(std::ostream& os, SuitValue v) {
  switch (v) {
    case ACE:
      os << "A";
      break;
    case TWO:
      os << "2";
      break;
    case THREE:
      os << "3";
      break;
    case FOUR:
      os << "4";
      break;
    case FIVE:
      os << "5";
      break;
    case SIX:
      os << "6";
      break;
    case SEVEN:
      os << "7";
      break;
    case EIGHT:
      os << "8";
      break;
    case NINE:
      os << "9";
      break;
    case TEN:
      os << "10";
      break;
    case JACK:
      os << "J";
      break;
    case QUEEN:
      os << "Q";
      break;
    case KING:
      os << "K";
      break;
    default:
      os << "Unknown Value";
      break;
  }
  return os;
}

int get_suit_length() { return 5; }

int get_values_length() { return 14; }

}  // namespace blackjack
