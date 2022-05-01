/**
 * Heading for the Contessa Role
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
    class Contessa : public Player
    {
        public:
            Contessa(Game &game, string name);
            void block(Player &player);
    };
}