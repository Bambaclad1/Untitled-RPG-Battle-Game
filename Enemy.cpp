#include "Enemy.h"

Enemy::Enemy() : HP(50), Attack(1), Defense(1), Money(0){

}

Enemy::~Enemy()
{
}

int Enemy::getHP() const
{
	return HP;
}

void Enemy::setHP(int hp)
{
	HP = hp;
}

int Enemy::getAttack() const
{
	return Attack;
}

void Enemy::setAttack(int attack)
{
	Attack = attack;
}

int Enemy::getDefense() const
{
	return Defense;
}
void Enemy::setDefense(int defense)
{
	Defense = defense;
}
std::string Enemy::Name = "Slime";  // You can set an initial value here

