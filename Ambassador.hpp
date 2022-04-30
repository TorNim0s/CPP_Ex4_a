#pragma once

#include "Player.hpp"

namespace coup{
    class Ambassador : public Player{
        public:
            Ambassador(Game &game, const std::string &name) : Player(game, name){}; // super
            void transfer(Player& srcPlayer, Player & dstPlayer);
            void block(Player& player);
            virtual std::string role();
    };
}