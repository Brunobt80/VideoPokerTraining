//
// Created by bbt on 24/01/2021.
//

#ifndef VIDEOPOKERTRAINING_ENUMERATION_HPP
#define VIDEOPOKERTRAINING_ENUMERATION_HPP

enum Values{
	Ace = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack = 11,
	Queen = 12,
	King = 13,
};

enum Suits {
	clubs = 1,
	diamonds = 2,
	hearts = 3,
	spades = 4,
};

enum Hands
{
	None,
	JacksOrBetter,
	TwoPair,
	ThreeOfAKind,
	Straight,
	Flush,
	FullHouse,
	FourOfAKind,
	StraightFlush,
	RoyalFlush,
};



#endif //VIDEOPOKERTRAINING_ENUMERATION_HPP
