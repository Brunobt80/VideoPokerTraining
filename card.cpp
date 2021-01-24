//
// Created by bbt on 24/01/2021.
//

#include "card.hpp"

Card::Card(Suits s, Values v)
{
	is_held = false;
	suit = s;
	value = v;
}

Values Card::getValue()
{
	return value;
}

Suits Card::getSuit()
{
	return suit;
}
