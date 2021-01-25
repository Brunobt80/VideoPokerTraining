//
// Created by bbt on 24/01/2021.
//

#ifndef VIDEOPOKERTRAINING_CARD_HPP
#define VIDEOPOKERTRAINING_CARD_HPP

#include "enumeration.hpp"

class Card
{
private:
	bool is_held;
	Suits suit;
	Values value;

public:
	Card(Suits s, Values v);
	Values GetValue();
	Suits GetSuit();

};


#endif //VIDEOPOKERTRAINING_CARD_HPP
