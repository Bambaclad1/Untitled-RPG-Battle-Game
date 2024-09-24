#pragma once
#include <iostream>
#include <string>

class Item
{
public:
	Item();
	~Item();

	Item(const std::string& name) : name(name) {}

	int getBoostHP() const;
	void setBoostHP(int hp);

	int getBoostMP() const;
	void setBoostMP(int mp);

	int getBoostATT() const;
	void setBoostATT(int at);

	int getBoostMGP() const;
	void setBoostMGP(int mgp);

	std::string getName() const;
	void setName(std::string name);

	std::string getDescription() const;
	void setDescription(std::string description);

private:
	std::string Name;
	std::string Description;
	int BoostHP;
	int BoostMP;
	int BoostATT;
	int BoostMGP;
	std::string name;

};


