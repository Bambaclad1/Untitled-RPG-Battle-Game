#include "Player.h"

Player::Player() : HP(50), Attack(3), Defense(1), MP(10), Money(0), Level(1), EXP(0), MagicPower(1) {

}

Player::~Player()
{
}

int Player::getHP() const
{
	return HP;
}

void Player::setHP(int hp)
{
	HP = hp;
}
int Player::getMP() const
{
	return MP;
}

void Player::setMP(int mp)
{
	MP = mp;
}

int Player::getAttack() const
{
	return Attack;
}

void Player::setAttack(int attack)
{
	Attack = attack;
}

int Player::getMagicPower() const
{
	return MagicPower;
}

void Player::setMagicPower(int magicpower)
{
	MagicPower = magicpower;
}

int Player::getDefense() const
{
	return Defense;
}
void Player::setDefense(int defense)
{
	Defense = defense;
}
int Player::getMoney() const
{
	return Money;
}
void Player::setMoney(int money)
{
	Money = money;
}
int Player::getLevel() const
{
	return Level;
}
void Player::setLevel(int level)
{
	Level = level;
}
int Player::getEXP() const
{
	return EXP;
}
void Player::setEXP(int exp)
{
	EXP = exp;
}
std::string Player::Name = "Hero";  // You can set an initial value here


