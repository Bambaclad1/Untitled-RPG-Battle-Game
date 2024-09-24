#pragma once
#include "Item.h"
#include <vector>
#include "Player.h"

class Inventory
{
public:
	Inventory();
	~Inventory();

	void InventoryGUI(Player& player);
	void Potion();
	void addItem(const Item& item); 

private:
	std::vector<Item> items;


};

