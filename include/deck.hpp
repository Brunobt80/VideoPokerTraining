//
// Created by bbt on 25/01/2021.
//

#ifndef VIDEOPOKERTRAINING_DECK_HPP
#define VIDEOPOKERTRAINING_DECK_HPP

#include <vector>
#include <random>
#include <chrono>
#include "card.hpp"
#include "enumeration.hpp"

// The Deck class, besides contains the vector of cards,
// provides the methods to shuffle and draw/deal
class Deck
{
private:
	static std::vector<Card> cards;
	static std::default_random_engine generator;
	// Dice: returns a number between 'from' and 51
	// and it's used to shuffle the deck
	static int Dice(int from);
	// GetCards: returns cards from the top
	// of the deck (cards variable)
	// from position 'begin' to 'end'
	static std::vector<Card> GetCards(int begin, int end);

public:
	static std::vector<Card> playerCards;

	Deck();
	static void ShuffleCards();
	static void Draw();
	static void Deal(std::vector<int> pos);



};


#endif //VIDEOPOKERTRAINING_DECK_HPP
