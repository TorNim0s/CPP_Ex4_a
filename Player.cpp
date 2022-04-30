#include "Player.hpp"

using namespace std;
namespace coup{
    Player::Player(Game &game, const string &name){
        this->game = game;

        this->name = name;
        this->balance = 0;
    }
    string Player::getName(){
        return this->name;
    }

    string Player::role(){
        return "Player";
    }
    int Player::coins() const{
        return this->balance;
    }

    void Player::income(){
        this->balance += 1;
    }
    void Player::foreign_aid(){
        this->balance += 2;
    }
    void Player::coup(Player &player){
        this->balance -= COUP_COST;
    }
    
}