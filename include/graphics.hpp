//
// Created by bbt on 24/01/2021.
//

#ifndef VIDEOPOKERTRAINING_GRAPHICS_HPP
#define VIDEOPOKERTRAINING_GRAPHICS_HPP

#include <iostream>
#include <string>
#include <vector>

#include "card.hpp"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

class Graphics{
public:
    static void printCards(const std::vector<Card>& cards);
    static std::string suit2unicode(Suits s);
	static std::string value2char(Values v);
};


#endif //VIDEOPOKERTRAINING_GRAPHICS_HPP
