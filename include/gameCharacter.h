#pragma once
#include <string>
#include <iostream>

class GameCharacter {
protected:
    std::string name;
    int health;
    int mana;
    int level;

public:
    GameCharacter(std::string n, int h, int m, int l);

    virtual void attack() = 0;              // will add target later
    virtual void defend() = 0;
    virtual void useSpecialAbility() = 0;
    virtual std::string getCharacterType() = 0;

    bool isAlive() const;
    void takeDamage(int dmg);

    virtual ~GameCharacter();
    virtual void displayStats();
};
