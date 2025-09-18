#include "paladin.h"

Paladin::Paladin(std::string n, int h, int m, int l, int s, int i)
    : GameCharacter(n, h, m, l), PhysicalFighter(s), MagicalCaster(i) {}

void Paladin::attack() {
    std::cout << name << " strikes with both weapon and holy magic!\n";
}

void Paladin::defend() {
    std::cout << name << " raises both shield and holy aura to defend!\n";
}

void Paladin::useSpecialAbility() {
    std::cout << name << " smites all enemies with divine light!\n";
}

std::string Paladin::getCharacterType() {
    return "Paladin";
}
