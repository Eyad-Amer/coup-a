/**`
 * Ambassador Role function
 *
 * Author: Eyad Amer
 * Since : 2022-04
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
    
#include "Game.hpp"
#include "Ambassador.hpp"

using namespace std;
namespace coup
{
    Ambassador::Ambassador(Game &game, string name) : Player(game, move(name))
    {
    
    }

    void Ambassador::transfer(Player &x, Player &y)
    {

    }

    void Ambassador::block(Player &player)
    {
        
    }
}