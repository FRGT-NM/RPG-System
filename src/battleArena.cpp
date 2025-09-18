#include "battleArena.h"
#include <iostream>

void BattleArena::addCharacter(GameCharacter* character) {
    characters.push_back(character);
}

void BattleArena::startBattle() {
    std::cout << "\n The chaotic battle begins! \n";
    // have to display the stats at the very start

    while (true) {
        int aliveCount = 0;
        GameCharacter* lastAlive = nullptr;

        for (auto c : characters) {
            if (c->isAlive()) {
                aliveCount++;
                lastAlive = c;
            }
        }

        if (aliveCount <= 1) {
            if (lastAlive) {
                std::cout << "\n Winner: " << lastAlive->getCharacterType()
                          << " " << "!\n";
            } else {
                std::cout << "\n Everyone has fallen!\n";
            }
            break;
        }

        for (auto attacker : characters) {
            if (!attacker->isAlive()) continue;

            attacker->attack();

            for (auto target : characters) {
                if (target != attacker && target->isAlive()) {
                    target->takeDamage(15); // will apply variety to damage later
                }
            }

            if (!attacker->isAlive()) {
                std::cout << attacker->getCharacterType() << " has fallen!\n";
            }
        }
    }
}

BattleArena::~BattleArena() {
    std::cout << "\n Clearing the battle arena...\n";
    for (auto c : characters) {
        delete c;
    }
    characters.clear();
}
