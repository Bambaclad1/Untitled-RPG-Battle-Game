#include "Player.h"

Player::Player() : HP(20), Attack(0), Defense(10), MP(5), Money(0), Item("") {

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

int Player::getDefense() const
{
	return Defense;
}
void Player::setDefense(int defense)
{
	Defense = defense;
}
std::string Player::Name = "Hero";  // You can set an initial value here


