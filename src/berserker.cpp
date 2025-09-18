#include "berserker.h"

Berserker::Berserker(std::string n, int h, int m, int l, int s, int a)
    : GameCharacter(n, h, m, l), Warrior(s, a) {}

void Berserker::useSpecialAbility() {
    std::cout << name << " enters a wild Rage Mode, striking all enemies brutally!\n";
}

std::string Berserker::getCharacterType() {
    return "Berserker";
}
