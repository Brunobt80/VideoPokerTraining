#include "../include/graphics.hpp"
#include "../include/game.hpp"

int main() {
    Graphics graphics {};

	Game game;
	game.deck.ShuffleCards();

	graphics.printCards(game.deck.GetCards(5));

    return 0;
}
