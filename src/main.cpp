#include "../include/graphics.hpp"
#include "../include/game.hpp"

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

	// dealing
	std::vector<int> idx {0,4};
	game.deck.Deal(idx);
	graphics.printCards(game.deck.playerCards);
	std::cout << std::endl;


    return 0;
}
