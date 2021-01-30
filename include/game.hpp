//
// Created by bbt on 25/01/2021.
//

#ifndef VIDEOPOKERTRAINING_GAME_HPP
#define VIDEOPOKERTRAINING_GAME_HPP

#include <algorithm>
#include "deck.hpp"

// The Game class controls every aspect of the gameplay
class Game
{
private:
	static std::vector<int> cardsCounter(std::vector<Card>&);
	static bool HasJacksOrBetter(std::vector<int> &cardsCount);
	static bool HasTwoPair(std::vector<int> &cardsCount);
	static bool HasThreeOfAKind(std::vector<int> &cardsCount);
	static bool HasFullHouse(std::vector<int> &cardsCount);
	static bool HasFourOfAKind(std::vector<int> &cardsCount);
	static bool HasRoyalStraight(std::vector<Card> &cards);
	static bool HasFlush(std::vector<Card> &cards);
	static bool HasStraight(std::vector<Card> &cards);

public:
	static const int betAmount = 5;
	const int initialCredit = 100;
	static int credit;
	static Deck deck;

	Game();
	static int Payout(Hands);
	static Hands Check(std::vector<Card> &cards);

	static bool comparator_function(Card a, Card b);

	~Game();


};


#endif //VIDEOPOKERTRAINING_GAME_HPP
