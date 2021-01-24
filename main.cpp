#include "graphics.hpp"

int main() {
    Graphics graphics {};
    std::vector<Card> cards {};

    cards.push_back(Card(spades,Two));
	cards.push_back(Card(clubs,Four));
	cards.push_back(Card(hearts,King));
	cards.push_back(Card(diamonds,Jack));
	cards.push_back(Card(hearts,Ace));

	graphics.printCards(cards);

    return 0;
}
