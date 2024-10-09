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

	int getMagicPower() const;
	void setMagicPower(int magicpower);

	int getMoney() const;
	void setMoney(int money);

	int getLevel() const;
	void setLevel(int level);

	int getEXP() const;
	void setEXP(int exp);

private:
	int Level;
	int EXP;
	int HP;
	int MP;
	int Attack;
	int MagicPower;
	int Defense;
	int Money;
};

