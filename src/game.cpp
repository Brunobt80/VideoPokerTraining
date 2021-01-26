//
// Created by bbt on 25/01/2021.
//

#include "../include/game.hpp"

int Game::Payout(Hands hand)
{
	int payout;

	switch (hand)
	{
		case None:
			payout = 0;
			break;
		case JacksOrBetter:
			payout = betAmount * 1;
			break;
		case TwoPair:
			payout = betAmount * 2;
			break;
		case ThreeOfAKind:
			payout = betAmount * 3;
			break;
		case Straight:
			payout = betAmount * 4;
			break;
		case Flush:
			payout = betAmount * 6;
			break;
		case FullHouse:
			payout = betAmount * 9;
			break;
		case FourOfAKind:
			payout = betAmount * 25;
			break;
		case StraightFlush:
			payout = betAmount * 50;
			break;
		case RoyalFlush:
			payout = betAmount * 800;
			break;
		default:
			break;
	}

	return payout;
}

int Game::credit;
Game::Game()
{
	credit = initialCredit;
	deck = Deck();
}
