#include "wizard.h"

Wizard::Wizard(int i, int sp) : GameCharacter("", 0, 0, 0), MagicalCaster(i), spellPower(sp) {}

void Wizard::defend() {
    std::cout << name << " conjures a magic barrier with spell power " << spellPower << "!\n";
}

std::string Wizard::getCharacterType() {
    return "Wizard";
}
