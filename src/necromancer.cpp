#include "necromancer.h"

Necromancer::Necromancer(std::string n, int h, int m, int l, int i, int sp)
    : GameCharacter(n, h, m, l), Wizard(i, sp) {}

void Necromancer::useSpecialAbility() {
    std::cout << name << " summons undead spirits to strike all enemies!\n";
}

std::string Necromancer::getCharacterType() {
    return "Necromancer";
}
