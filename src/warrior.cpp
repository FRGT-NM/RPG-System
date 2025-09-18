#include "warrior.h"

Warrior::Warrior(int s, int a) 
    : GameCharacter("", 0, 0, 0), PhysicalFighter(s), armor(a) {}

void Warrior::defend() {
    std::cout << name << " blocks the attack with armor (" << armor << " defense)!\n";
}

std::string Warrior::getCharacterType() {
    return "Warrior";
}
