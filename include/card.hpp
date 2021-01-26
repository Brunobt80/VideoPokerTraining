//
// Created by bbt on 24/01/2021.
//

#ifndef VIDEOPOKERTRAINING_CARD_HPP
#define VIDEOPOKERTRAINING_CARD_HPP

#include "enumeration.hpp"

// Class representing each card of the deck
// A Deck contains a vector of cards
// which are initialized in the constructor
class Card
{
private:
	bool isHeld;
	Suits suit;
	Values value;

public:
	Card(Suits s, Values v);
	Values GetValue();
	Suits GetSuit();
	bool GetIsHeld();

};


#endif //VIDEOPOKERTRAINING_CARD_HPP
