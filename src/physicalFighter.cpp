#include "physicalFighter.h"

PhysicalFighter::PhysicalFighter(int s) : GameCharacter("", 0, 0, 0), strength(s) {}

void PhysicalFighter::attack() {
    std::cout << name << " swings a mighty weapon with strength " << strength << "!\n";
}
