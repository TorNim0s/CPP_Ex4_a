#pragma once

#include "Game.hpp"

#define COUP_COST 7

namespace coup{
    class Player{
        protected:           
            std::string name;
            int balance;
            Game game;
            Player(Game &game,  const std::string &name); // absract class

        public:
            std::string getName();

            virtual std::string role();
            int coins() const;
            
            void income();
            void foreign_aid();
            virtual void coup(Player &player);
    };
}
