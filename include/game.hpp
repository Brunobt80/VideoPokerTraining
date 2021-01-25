//
// Created by bbt on 25/01/2021.
//

#ifndef VIDEOPOKERTRAINING_GAME_HPP
#define VIDEOPOKERTRAINING_GAME_HPP


#include "deck.hpp"

class Game
{
public:
	static const int betAmount = 5;
	static const int initialCredit = 100;
	int credit;
	static Deck deck;
	static int Payout(Hands hand);
	Game();

};


#endif //VIDEOPOKERTRAINING_GAME_HPP
