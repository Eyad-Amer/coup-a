/**
 * Heading for the Player function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

#pragma once

#include "Game.hpp"

using namespace std;
namespace coup
{
    class Player
    {
    public:
        int SumOfCoins;
        string PlayerName;
        string PlayerRole;
        Game game;
        Player();
        Player(Game &game, string name);
        void income();
        void foreign_aid();
        void coup(Player &player);
        static string role();
        static int coins();
    };
}