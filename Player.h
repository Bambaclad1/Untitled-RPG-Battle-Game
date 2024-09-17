#pragma once
#include "string"

class Player
{
public:
	Player();
	~Player();
	static std::string Name;

	int getHP() const;
	void setHP(int hp);

	int getMP() const; 
	void setMP(int mp);

	int getAttack() const;
	void setAttack(int attack);

	int getDefense() const;
	void setDefense(int defense);

private:

	int HP;
	int MP;
	int Attack;
	int Defense;
	int Money;
	std::string Item;
};

