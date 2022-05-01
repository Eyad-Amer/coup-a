/**
 * Heading for the Game function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#pragma once

using namespace std;

namespace coup
{
    class Game
    {
    public:
        vector<string> players() const;
        vector<string> namesOfPlayers;
        Game();
        static string turn();
        static string winner();
    };
}