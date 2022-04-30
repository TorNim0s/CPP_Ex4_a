#pragma once

#include "Player.hpp"

using namespace std;
namespace coup{
    class Contessa : public Player{
        public:
            Contessa(Game game, const std::string &name) : Player(game, name){};
            void block(Player& player); 
            virtual string role();
    };
}