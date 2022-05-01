/**
 * Game function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#include "Game.hpp"

using namespace std;
namespace coup
{
    vector<string> Game::players() const
    {
        return this->namesOfPlayers;
    }

    Game::Game()
    {
        
    }

    string Game::turn()
    {
        return " ";
    }

    string Game::winner()
    {
        return " ";
    }
}