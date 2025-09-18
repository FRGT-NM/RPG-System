#pragma once
#include "physicalFighter.h"
#include "magicalCaster.h"

class Paladin : public PhysicalFighter, public MagicalCaster {
public:
    Paladin(std::string n, int h, int m, int l, int s, int i);

    void attack() override;
    void defend() override;
    void useSpecialAbility() override;
    std::string getCharacterType() override;
};
