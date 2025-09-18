#pragma once
#include "gameCharacter.h"

class PhysicalFighter : virtual public GameCharacter {
protected:
    int strength;

public:
    PhysicalFighter(int s);

    void attack() override;
    virtual void defend() override = 0;
    virtual void useSpecialAbility() override = 0;
    virtual std::string getCharacterType() override = 0;
};
