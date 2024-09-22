#include "Item.h"

Item::Item() : BoostHP(5), BoostMP(0), BoostATT(0), BoostMGP(0)
{
}

Item::~Item()
{
}

int Item::getBoostHP() const
{
	return BoostHP;
}

void Item::setBoostHP(int hp)
{
	BoostHP = hp;
}

int Item::getBoostMP() const
{
	return BoostMP;
}

void Item::setBoostMP(int mp)
{
	BoostMP = mp;
}

int Item::getBoostATT() const
{
	return BoostATT;
}

void Item::setBoostATT(int at)
{
	BoostATT = at;
}

int Item::getBoostMGP() const
{
	return BoostMGP;
}

void Item::setBoostMGP(int mgp)
{
	BoostMGP = mgp;
}

std::string Item::getName() const
{
	return Name;
}

void Item::setName(std::string name)
{
	Name = name;
}

std::string Item::getDescription() const
{
	return Description;
}

void Item::setDescription(std::string description)
{
	Description = description;
}

