/**
 * Assassin Role function
 * 
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Game.hpp"
#include "Assassin.hpp"

using namespace std;

namespace coup
{
    Assassin::Assassin(Game &game, string name) : Player(game, move(name))
    {

    }

    void Assassin::coup(Player &player)
    {
        
    }
}