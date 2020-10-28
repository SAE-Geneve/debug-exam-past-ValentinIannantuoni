//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

#include <iostream>

class Character
{
public:
	Character(int, int, int, int);
	void takeDamage(int damage);
	bool isAlive();
	virtual void death() = 0;
	virtual void fight(Character* character) = 0;

	int getHealth() { return health; }
	int getDefense();
	int getAttack();
	int getStrength() { return strength; }

protected:
	int health;
	int attack;
	int defense;
	int strength;
};

class Monster : public Character
{ 
public:
    Monster(int,int,int,int);
    void fight(Character*) override;
    void death();
};

class Hero : public Character
{
public:
    Hero(int,int,int,int);
    void fight(Character*) override;
    void death();
};
