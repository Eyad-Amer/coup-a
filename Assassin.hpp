/**
 * Heading for the Assassin Role
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
    class Assassin: public Player
    {
        public:
            Assassin(Game &game, string name);
            void coup(Player &player);
    };
}