#include "../include/graphics.hpp"
#include "../include/game.hpp"

int main() {
	// initializing variables
    Graphics graphics {};
	Game game;
	// shuffling the cards
	game.deck.ShuffleCards();
	// drawing
	graphics.printCards(game.deck.Draw());
	std::cout << std::endl;
	// dealing
	graphics.printCards(game.deck.Deal(3));
	std::cout << std::endl;


    return 0;
}
