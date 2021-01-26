//
// Created by bbt on 25/01/2021.
//


#include "../include/deck.hpp"

std::vector<Card> Deck::cards;
std::default_random_engine Deck::generator;

Deck::Deck()
{
	// generating 52 cards
	for (int s = 1; s < 5; ++s)
	{
		for (int v = 1; v < 14; ++v)
		{
			cards.emplace_back(static_cast<Suits>(s), static_cast<Values>(v));
		}
	}

	// feeding the rng with current time
	generator.seed(std::chrono::system_clock::now().time_since_epoch().count());
}

int Deck::Dice(int from)
{
	std::uniform_int_distribution<int> distribution(from,51);
	return distribution(generator);
}

std::vector<Card> Deck::GetCards(int begin, int end)
{
	std::vector<Card> tempCards;
	for (int i = begin; i < end + 1; ++i)
	{
		tempCards.emplace_back(cards.at(i));
	}
	return tempCards;
}

void Deck::ShuffleCards()
{
	// shuffling the deck until the 10th position,
	// that is, the maximum number of cards exposed
	// to the player at each round
	for (int i = 0; i < 10; ++i)
	{
		int j = Dice(i);
		std::swap(cards.at(i), cards.at(j));
	}
}

std::vector<Card> Deck::Draw()
{
	return GetCards(0,4);
}

std::vector<Card> Deck::Deal(int qty)
{
	return GetCards(5,4+qty);
}
