#include <deck.hpp>

int main(int argc, char const *argv[]) {
  blackjacklib::Deck deck;

  deck.generate_new_deck();

  if (deck.card_left() == 52) {
    std::cout << "Test passed!";
    return 0;
  }

  std::cout << "Test failed!";
  return 1;
}
