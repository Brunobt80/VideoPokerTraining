//
// Created by bbt on 25/01/2021.
//

#ifndef VIDEOPOKERTRAINING_GAME_HPP
#define VIDEOPOKERTRAINING_GAME_HPP


#include "deck.hpp"

// The Game class controls every aspect of the gameplay
class Game
{
public:
	static const int betAmount = 5;
	const int initialCredit = 100;
	static int credit;
	static Deck deck;

	Game();
	static int Payout(Hands hand);

};


#endif //VIDEOPOKERTRAINING_GAME_HPP
