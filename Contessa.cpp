/**
 * Contessa Role function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Game.hpp"
#include "Contessa.hpp"

using namespace std;

namespace coup
{
    Contessa::Contessa(Game &game, string name): Player(game, move(name))
    {

    }

    void Contessa::block(Player &player)
    {

    }
}