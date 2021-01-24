//
// Created by bbt on 24/01/2021.
//

#ifndef VIDEOPOKERTRAINING_GRAPHICS_HPP
#define VIDEOPOKERTRAINING_GRAPHICS_HPP

#include <iostream>
#include <string>
#include <vector>

#include "card.hpp"

class Graphics{
public:
    static void printCards(std::vector<Card> &cards);
    static std::string suit2unicode(Suits s);
	static std::string value2char(Values v);
};


#endif //VIDEOPOKERTRAINING_GRAPHICS_HPP
