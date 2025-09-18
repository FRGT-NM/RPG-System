#include "magicalCaster.h"

MagicalCaster::MagicalCaster(int i) : GameCharacter("", 0, 0, 0), intelligence(i) {}

void MagicalCaster::attack() {
    std::cout << name << " casts a spell infused with intelligence " << intelligence << "!\n";
}
