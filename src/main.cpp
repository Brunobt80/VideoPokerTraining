#include "../include/graphics.hpp"
#include "../include/game.hpp"
#include <iostream>
#include <string>

int main() {
	// initializing variables
    Graphics graphics {};
	Game game;

	// shuffling the cards
	game.deck.ShuffleCards();

	// drawing
	game.deck.Draw();
	graphics.printCards(game.deck.playerCards);
	std::cout << std::endl;

	// asking player which cards to discard
	std::string cards2discard;
	std::vector<int> index2discard;
	std::cout << "Choose which cards to DISCARD: ";
	std::cin >> cards2discard;
	for (auto c: cards2discard)
	{
		int tempInt;
		tempInt = static_cast<int>(c) - 48;
		index2discard.push_back(tempInt);
	}

	// dealing
	game.deck.Deal(index2discard);
	graphics.printCards(game.deck.playerCards);
	std::cout << std::endl;


    return 0;
}
