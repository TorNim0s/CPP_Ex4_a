#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include "Game.hpp"

namespace coup{
    class Game{
        private: 
            int playerTurn;
            std::vector<std::string> playersList;
        public:
            Game();
            std::string turn() const;
            std::vector<std::string> players();
            std::string winner();
    };
}