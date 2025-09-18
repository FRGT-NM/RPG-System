# **RPG Battle Arena**

A **C++ role-playing game battle simulator** built with OOP principles and CMake.  
Characters such as **Warriors, Berserkers, Paladins, Wizards, and Necromancers** fight in a battle arena using unique attacks, defenses, and special abilities until only one remains standing.  

---

## 🚀 Features
- Abstract base class `GameCharacter` with pure virtual functions  
- Inheritance hierarchy with single, multiple, and virtual inheritance  
- Polymorphism with overridden actions (`attack`, `defend`, `useSpecialAbility`)  
- `BattleArena` class that runs chaotic turn-based battles  
- Destructor chains and dynamic memory management  
- Modular CMake project structure (`include/`, `src/`, `CMakeLists.txt`)  

---

## ⚙️ Build Instructions
Make sure you have **CMake** and **g++/clang++** installed.  

```bash
# Clone the repo
git clone https://github.com/YOUR-USERNAME/RPG-BattleArena.git
cd RPG-BattleArena

# Create build folder
mkdir build && cd build

# Run CMake and build
cmake ..
make
