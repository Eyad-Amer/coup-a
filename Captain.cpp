/**
 * Captain Role function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Game.hpp"
#include "Captain.hpp"

using namespace std;

namespace coup
{
    Captain::Captain(Game &game, string name): Player(game, move(name))
    {

    }

    void Captain::block(Player &player)
    {

    }

    void Captain::steal(Player &player)
    {
        
    }
}