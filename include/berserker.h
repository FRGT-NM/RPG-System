#pragma once
#include "warrior.h"

class Berserker : public Warrior {
public:
    Berserker(std::string n, int h, int m, int l, int s, int a);

    void useSpecialAbility() override;
    std::string getCharacterType() override;
};
