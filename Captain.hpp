/**
 * Heading for the Captain Role
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Player.hpp"
#include "Game.hpp"

using namespace std;

namespace coup
{
    class Captain : public Player
    {
        public:
            Captain(Game &game, string name);
            void block(Player &player);
            void steal(Player &player);
    };
}