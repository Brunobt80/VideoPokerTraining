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

	// feeding the rng
	generator.seed(std::chrono::system_clock::now().time_since_epoch().count());
}

int Deck::Dice(int from)
{
	std::uniform_int_distribution<int> distribution(from,51);
	return distribution(generator);
}

std::vector<Card> Deck::GetCards(int i)
{
	std::vector<Card> tempCards;
	for (int j = 0; j < i; ++j)
	{
		tempCards.emplace_back(cards.at(j));
	}
	return tempCards;
}

void Deck::ShuffleCards()
{
	// shuffling the deck
	for (int i = 0; i < 51; ++i)
	{
		int j = Dice(i);
		std::swap(cards.at(i), cards.at(j));
	}
}
