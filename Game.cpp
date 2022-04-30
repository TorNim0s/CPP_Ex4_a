#include "Game.hpp"

using namespace std;
namespace coup{
    Game::Game(){this->playerTurn = 0;}
    string Game::turn() const{
        return to_string(this->playerTurn);
    }
    vector<string> Game::players(){
        return this->playersList;
    }
    string Game::winner(){
        if (this->playersList.size() != 1)
        {
            throw runtime_error("Error! canno't be more or less than 1 winner");
        }
        return this->playersList[0];
    }
}