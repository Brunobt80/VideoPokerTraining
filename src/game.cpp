//
// Created by bbt on 25/01/2021.
//

#include "../include/game.hpp"

int Game::credit;
Game::Game()
{
	credit = initialCredit;
	deck = Deck();
}

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

std::vector<int> Game::cardsCounter(std::vector<Card> &cards)
{
	int twoCount {0};
	int threeCount {0};
	int fourCount {0};
	int fiveCount {0};
	int sixCount {0};
	int sevenCount {0};
	int eightCount {0};
	int nineCount {0};
	int tenCount {0};
	int jackCount {0};
	int queenCount {0};
	int kingCount {0};
	int aceCount {0};

	for (auto card: cards)
	{
		switch (card.GetValue())
		{
			case Two:
				twoCount++;
				break;
			case Three:
				threeCount++;
				break;
			case Four:
				fourCount++;
				break;
			case Five:
				fiveCount++;
				break;
			case Six:
				sixCount++;
				break;
			case Seven:
				sevenCount++;
				break;
			case Eight:
				eightCount++;
				break;
			case Nine:
				nineCount++;
				break;
			case Ten:
				tenCount++;
				break;
			case Jack:
				jackCount++;
				break;
			case Queen:
				queenCount++;
				break;
			case King:
				kingCount++;
				break;
			case Ace:
				aceCount++;
				break;
			default: break;
		}
	}

	std::vector<int> countVector {twoCount,threeCount,fourCount,fiveCount,sixCount,sevenCount,
								  eightCount,nineCount,tenCount,jackCount,queenCount,kingCount,aceCount};
	return countVector;
}

bool Game::HasJacksOrBetter(std::vector<int> &cardsCount)
{
	for (int i = 9; i < 13; i++)
	{
		if (cardsCount.at(i) == 2) return true;
	}
	return false;
}

bool Game::HasTwoPair(std::vector<int> &cardsCount)
{
	int pairCount = 0;
	for (int count: cardsCount)
	{
		if (count == 2) pairCount++;
	}
	if (pairCount == 2) return true;
	return false;
}

bool Game::HasThreeOfAKind(std::vector<int> &cardsCount)
{
	for (int count: cardsCount)
	{
		if (count == 3) return true;
	}
	return false;
}

bool Game::HasFullHouse(std::vector<int> &cardsCount)
{
	bool hasPair = false;
	bool hasTriplet = false;
	for (int count: cardsCount)
	{
		if (count == 2) hasPair = true;
		else if (count == 3) hasTriplet = true;
	}
	return (hasPair && hasTriplet);
}

bool Game::HasFourOfAKind(std::vector<int> &cardsCount)
{
	for (int count: cardsCount)
	{
		if (count == 4) return true;
	}
	return false;
}

bool Game::HasRoyalStraight(std::vector<Card> &cards)
{
	std::vector<Card> tempHand { cards.at(0), cards.at(1), cards.at(2), cards.at(3), cards.at(4) };
	std::sort(tempHand.begin(), tempHand.end(), comparator_function);
	if ((int)tempHand.at(0).GetValue() == 1 && (int)tempHand.at(1).GetValue() == 10 && (int)tempHand.at(2).GetValue() == 11 && (int)tempHand.at(3).GetValue() == 12 && (int)tempHand.at(4).GetValue() == 13)
	{
		return true;
	}
	return false;
}

bool Game::HasFlush(std::vector<Card> &cards)
{
	int clubsCount = 0;
	int diamondsCount = 0;
	int heartsCount = 0;
	int spadesCount = 0;

	for (auto card: cards)
	{
		switch (card.GetSuit())
		{
			case clubs:
				clubsCount++;
				break;
			case diamonds:
				diamondsCount++;
				break;
			case hearts:
				heartsCount++;
				break;
			case spades:
				spadesCount++;
				break;
			default: break;
		}
	}

	if (clubsCount == 5 || diamondsCount == 5 ||
		heartsCount == 5 || spadesCount == 5)
		return true;

	return false;
}

bool Game::HasStraight(std::vector<Card> &cards)
{
	std::vector<Card> tempHand {cards};
	std::sort(tempHand.begin(), tempHand.end(), comparator_function);

	for (int i = 1; i < 5; i++)
	{
		if ((static_cast<int>(tempHand.at(i).GetValue()) - (static_cast<int>(tempHand.at(i-1).GetValue()))) != 1)
		{
			return false;
		}
	}
	return true;
}

Hands Game::Check(std::vector<Card> &cards)
{
	if (HasRoyalStraight(cards) && HasFlush(cards)) return RoyalFlush;
	if (HasFlush(cards) && HasStraight(cards)) return StraightFlush;
	std::vector<int> counter = cardsCounter(cards);
	if (HasFourOfAKind(counter)) return FourOfAKind;
	if (HasFullHouse(counter)) return FullHouse;
	if (HasFlush(cards)) return Flush;
	if (HasStraight(cards) || HasRoyalStraight(cards)) return Straight;
	if (HasThreeOfAKind(counter)) return ThreeOfAKind;
	if (HasTwoPair(counter)) return TwoPair;
	if (HasJacksOrBetter(counter)) return JacksOrBetter;
	return None;
}

bool Game::comparator_function(Card a, Card b)
{
	return static_cast<int>(a.GetValue()) < static_cast<int>(b.GetValue());
}

Game::~Game()
{

}
