/**
 * Unit tests.
 *
 * AUTHORS: Eyad Amer
 * Date:  2022-04
 */

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
using namespace std;

#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;

string nospaces(string input)
{
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}

TEST_CASE("coup game") {
	Game game{};
	vector<string> Players {"1", "2", "3", "4", "5"};
	Ambassador ambassador{game, "1"};
	Assassin assassin{game, "2"};
	Captain captain{game, "3"};
	Contessa contessa{game, "4"};
	Duke duke{game, "5"};

	// Ambassador Role
	CHECK_NOTHROW(ambassador.transfer(ambassador,ambassador));
	CHECK_NOTHROW(ambassador.transfer(assassin,ambassador));
	CHECK_NOTHROW(ambassador.transfer(duke,captain));
	CHECK_NOTHROW(ambassador.transfer(ambassador,ambassador));
	CHECK_NOTHROW(ambassador.transfer(contessa,ambassador));
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(ambassador.foreign_aid());
	CHECK_NOTHROW(ambassador.coup(contessa));
	//CHECK_EQ(game.turn(),"2");
	//CHECK_EQ(game.winner(),"3");

	// Assassin Role
	CHECK_NOTHROW(ambassador.coup(ambassador));
	CHECK_NOTHROW(ambassador.coup(assassin));
	CHECK_NOTHROW(ambassador.coup(duke));
	CHECK_NOTHROW(ambassador.coup(captain));
	CHECK_NOTHROW(ambassador.coup(contessa));
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(ambassador.foreign_aid());
	CHECK_NOTHROW(ambassador.coup(contessa));
	//CHECK_EQ(game.turn(),"2");
	//CHECK_EQ(game.winner(),"3");

	// Captain Role
	CHECK_NOTHROW(captain.block(ambassador));
	CHECK_NOTHROW(captain.steal(assassin));
	CHECK_NOTHROW(captain.block(duke));
	CHECK_NOTHROW(captain.steal(captain));
	CHECK_NOTHROW(captain.block(contessa));
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(captain.foreign_aid());
	CHECK_NOTHROW(captain.coup(contessa));
	//CHECK_EQ(game.turn(),"2");
	//CHECK_EQ(game.winner(),"3");
	
	// Contessa Role
	CHECK_NOTHROW(contessa.block(ambassador));
	CHECK_NOTHROW(contessa.block(assassin));
	CHECK_NOTHROW(contessa.block(duke));
	CHECK_NOTHROW(contessa.block(captain));
	CHECK_NOTHROW(contessa.block(contessa));
	CHECK_NOTHROW(contessa.income());
	CHECK_NOTHROW(contessa.foreign_aid());
	CHECK_NOTHROW(contessa.coup(contessa));
	//CHECK_EQ(game.turn(),"2");
	//CHECK_EQ(game.winner(),"3");

	// Duke Role
	CHECK_NOTHROW(duke.block(ambassador));
	CHECK_NOTHROW(duke.block(assassin));
	CHECK_NOTHROW(duke.block(duke));
	CHECK_NOTHROW(duke.block(captain));
	CHECK_NOTHROW(duke.block(contessa));
	CHECK_NOTHROW(duke.tax());
	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.foreign_aid());
	CHECK_NOTHROW(duke.coup(contessa));
	//CHECK_EQ(game.turn(),"2");
	//CHECK_EQ(game.winner(),"3");

}
