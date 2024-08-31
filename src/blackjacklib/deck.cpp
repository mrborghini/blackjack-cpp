#include "deck.hpp"

namespace blackjacklib {
// Constructor
Deck::Deck() : cards(nullptr), card_amount(0), cards_left(0) {}

Deck::~Deck() { clear(); }

// Generates a new deck
void Deck::generate_new_deck() {
  clear();  // Clear any existing cards

  int size = (get_suit_length() - 1) * (get_values_length() - 1);
  cards = new Card[size];
  card_amount = size;
  cards_left = size;

  int card_index = 0;

  for (int i = 1; i < get_suit_length(); ++i) {
    for (int j = 1; j < get_values_length(); ++j) {
      cards[card_index] = Card(Suit(i), SuitValue(j));
      card_index++;
    }
  }
}

// Helper to clear the deck
void Deck::clear() {
  delete[] cards;
  cards = nullptr;
  card_amount = 0;
  cards_left = 0;
}

int Deck::card_left() const { return cards_left; }

}  // namespace blackjacklib