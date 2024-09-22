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

#include "Inventory.h"
#include "Item.h"
#include <iostream>
#include <string>

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
                    << " - " << items[i].getBoostHP() << " HP Boost\n";
            }

            std::cout << items.size() + 1 << ". Exit\n";
        }

        std::cout << "Enter your choice: ";
        std::cin >> menu;

        if (menu > 0 && menu <= items.size()) {
            std::cout << "You selected: " << items[menu - 1].getName() << "\n";
            Item& selectedItem = items[menu - 1]; 
            items.erase(items.begin() + (menu - 1));
            player.setHP(player.getHP() + 20);
            std::cout << player.getHP() << " DEBUG! Player has that HP RN!";
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