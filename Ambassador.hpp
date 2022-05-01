/**
 * Heading for the Ambassador Role
 * 
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Player.hpp"
#include"Game.hpp"

using namespace std;

namespace coup
{
    class Ambassador: public Player
    {
        public:
            Ambassador(Game &game, string name);
            void transfer(Player &x, Player &y);
            void block(Player &player);
    };
}
