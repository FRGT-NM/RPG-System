#pragma once
#include "gameCharacter.h"

class MagicalCaster : virtual public GameCharacter {
protected:
    int intelligence;

public:
    MagicalCaster(int i);

    void attack() override;
    virtual void defend() override = 0;
    virtual void useSpecialAbility() override = 0;
    virtual std::string getCharacterType() override = 0;
};
