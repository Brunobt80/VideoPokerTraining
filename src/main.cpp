#include "../include/graphics.hpp"
#include "../include/game.hpp"
#include <iostream>
#include <string>

int main()
{
	// initializing variables
	Graphics graphics{};
	Game game;

	std::string response {"yes"};

	while(response == "yes")
	{
		// shuffling the cards
		game.deck.ShuffleCards();

		// dealing
		game.deck.Deal();
		graphics.printCards(game.deck.playerCards);
		std::cout << std::endl;

		// asking player which cards to discard
		std::string cards2discard;
		std::vector<int> index2discard;
		std::cout << "Choose which cards to DISCARD: ";
		std::cin >> cards2discard;

		// drawing if player chooses so
		if (cards2discard != "-1")
		{
			for (auto c: cards2discard)
			{
				int tempInt;
				tempInt = static_cast<int>(c) - 48;
				index2discard.push_back(tempInt);
			}

			// dealing
			game.deck.Draw(index2discard);
		}

		// showing final cards
		graphics.printCards(game.deck.playerCards);
		std::cout << std::endl;

		// assessing the player's hand
		Hands hand{game.Check(game.deck.playerCards)};
		std::cout << "Results: " << hand << std::endl;

		// play again?
		std::cout << "Again? ";
		std::cin >> response;
		std::cout << std::endl;
	}


    return 0;
}
