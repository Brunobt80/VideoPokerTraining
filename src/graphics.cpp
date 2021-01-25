//
// Created by bbt on 24/01/2021.
//

#include "../include/graphics.hpp"

void Graphics::printCards(const std::vector<Card>& cards)
{
	for (Card c: cards)
		std::cout << value2char(c.GetValue()) << suit2unicode(c.GetSuit()) << "  ";
}

std::string Graphics::suit2unicode(Suits s)
{
	std::string suit{};
	switch (s)
	{
		case clubs:
			suit = "\xE2\x99\xA3";
			break;
		case diamonds:
			suit = "\xE2\x99\xA6";
			break;
		case hearts:
			suit = "\xE2\x99\xA5";
			break;
		case spades:
			suit = "\xE2\x99\xA0";
			break;
		default:
			break;
	}
	return suit;
}

std::string Graphics::value2char(Values v)
{
	std::string value{};
	switch (v)
	{
		case 1:
			value = "A";
			break;
		case 11:
			value = "J";
			break;
		case 12:
			value = "Q";
			break;
		case 13:
			value = "K";
			break;
		default:
			value = std::to_string(v);
			break;
	}
	return value;
}
