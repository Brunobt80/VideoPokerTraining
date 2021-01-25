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

class Deck
{
private:
	static std::vector<Card> cards;
	static std::default_random_engine generator;
	static int Dice(int from);
public:
	Deck();
	static void ShuffleCards();
	static std::vector<Card> GetCards(int i);

};


#endif //VIDEOPOKERTRAINING_DECK_HPP
