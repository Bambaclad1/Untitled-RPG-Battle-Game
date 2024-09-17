#pragma once
#include "Player.h"
class Enemy
{
public:
	Enemy();
	~Enemy();
	static std::string Name;

	int getHP() const;
	void setHP(int hp);

	int getAttack() const;
	void setAttack(int attack);

	int getDefense() const;
	void setDefense(int defense);

private:
	int HP;
	int Attack;
	int Defense;
	int Money;
	std::string Item;
};

