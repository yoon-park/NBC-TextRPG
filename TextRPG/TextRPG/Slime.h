﻿#pragma once
#include "Monster.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Slime : public Monster {
private:
    string name = "NULL";
    int health = 0;
    int attack = 0;
public:
    Slime(int level);
    void setName(string name);
    void setAttack(int health);
    void setHealth(int health);
    string getName() { return name; }
    int getHealth() { return health; }
    int getAttack() { return attack; }
    void takeDamage(int damage);
    vector<Item*> dropItem();
    int dropGold();
    int dropEXP(int level) { return 30 * level; };
    bool isDead();
};