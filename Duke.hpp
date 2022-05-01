/**
 * Heading for the Duke Role
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
    class Duke : public Player
    {
        public:
            Duke(Game &game, string name);
            void block(Player &player);
            void tax();
    };
}