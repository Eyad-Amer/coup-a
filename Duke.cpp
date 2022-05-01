/**
 * Duke Role function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Game.hpp"
#include "Duke.hpp"

using namespace std;

namespace coup
{
    Duke::Duke(Game &game, string name): Player(game, move(name))
    {

    }

    void Duke::block(Player &player)
    {

    }
    
    void Duke::tax()
    {

    }
}