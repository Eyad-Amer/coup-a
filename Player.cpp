/**
 * Player function
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

     Player::Player()
     {
         SumOfCoins = 0;
     }

    Player::Player(Game &game, string name)
    {
       this->game = game;
       this->PlayerName = move(name);
       this->SumOfCoins = coins();
    }

    void Player::income()
    {

    }

    void Player::foreign_aid()
    {

    }

    void Player::coup(Player &player)
    {
        
    }

    string Player::role()
    {
        return " ";
    }

    int Player::coins()
    {
        return 1;
    }
}