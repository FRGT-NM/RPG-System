#include "gameCharacter.h"

GameCharacter::GameCharacter(std::string n, int h, int m, int l)
    : name(n), health(h), mana(m), level(l) {}

bool GameCharacter::isAlive() const {
    return health > 0;
}

void GameCharacter::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
    std::cout << name << " takes " << dmg << " damage! (Health: " << health << ")\n";
}

GameCharacter::~GameCharacter() {
    std::cout << name << " has fallen!\n";
}

void GameCharacter::displayStats() {
    std::cout << "===== " << name << " (" << getCharacterType() << ") =====\n";
    std::cout << "Health: " << health << " | Mana: " << mana << " | Level: " << level << "\n";
}
