#pragma once
#include "gameCharacter.h"
#include <vector>

class BattleArena {
private:
    std::vector<GameCharacter*> characters;

public:
    void addCharacter(GameCharacter* character);
    void startBattle();
    ~BattleArena();
};
