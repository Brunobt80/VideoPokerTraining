#include "graphics.hpp"
#include "deck.hpp"

int main() {
    Graphics graphics {};

	Deck deck;
	Deck::ShuffleCards();
	std::vector<Card> cards;
	cards = deck.GetCards();

	graphics.printCards(cards);

    return 0;
}
