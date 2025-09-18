#pragma once
#include "magicalCaster.h"

class Wizard : public MagicalCaster {
protected:
    int spellPower;

public:
    Wizard(int i, int sp);

    void defend() override;
    virtual void useSpecialAbility() override = 0;
    std::string getCharacterType() override;
};
