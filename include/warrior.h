#pragma once
#include "physicalFighter.h"

class Warrior : public PhysicalFighter {
protected:
    int armor;

public:
    Warrior(int s, int a);

    void defend() override;
    virtual void useSpecialAbility() override = 0;
    std::string getCharacterType() override;
};
