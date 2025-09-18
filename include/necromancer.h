#pragma once
#include "wizard.h"

class Necromancer : public Wizard {
public:
    Necromancer(std::string n, int h, int m, int l, int i, int sp);

    void useSpecialAbility() override;
    std::string getCharacterType() override;
};
