//
// Created by bbt on 24/01/2021.
//

#include "../include/card.hpp"

Card::Card(Suits s, Values v)
: isHeld{false}, suit{s}, value{v} {}

Values Card::GetValue() { return value; }

Suits Card::GetSuit() {	return suit; }

bool Card::GetIsHeld() { return isHeld; }
