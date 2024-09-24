#include "Inventory.h"
#include "Item.h"
#include <iostream>
#include <string>
#include "Player.h"

Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::InventoryGUI(Player& player)
{
	int menu = 0;

	while (true) {
		std::cout << std::endl << "Welcome to the inventory gui! Please pick a choice:\n";

		if (items.empty()) {
			std::cout << "Your inventory is empty.\n";
			break;
		}
		else {
			std::cout << "You have the following items:\n";

			for (size_t i = 0; i < items.size(); ++i) {
				std::cout << i + 1 << ". " << items[i].getName()
					<< " - " << items.at(i).getBoostHP() << " HP Boost\n";
			}
		}

		std::cout << "Enter your choice: ";
		std::cin >> menu;

		if (menu > 0 && menu <= items.size()) {

			for (size_t i = 0; i < items.size(); ++i){
				std::cout << i + 1 << ". " << items[i].getName();
			}

			std::cout << "\n" << "You selected: " << items[menu - 1].getName() << "\n";
			Item& selectedItem = items.at(menu - 1);
			player.setHP(player.getHP() + selectedItem.getBoostHP());
			std::cout << "Potion used! You got " << player.getHP() << " HP!";

			for (size_t i = 0; i < items.size(); ++i) {
				std::cout << i + 1 << ". " << items[i].getName();
			}
			items.erase(items.begin() + (menu - 1));

			break;
		}
		else {
			std::cout << "Invalid choice. Please try again.\n";
		}
	}
}

void Inventory::addItem(const Item& item)
{
	items.push_back(item);
}

void Inventory::Potion() {
	Item potion;
	potion.setName("Potion");
	potion.setDescription("Heals 20 HP!");
	potion.setBoostHP(20);
	addItem(potion);  // Add potion to inventory
}