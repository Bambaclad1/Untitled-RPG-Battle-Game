#include <iostream>
#include <limits>
#include <string>
#include "Enemy.h"
#include "Player.h"
#include "Battlesystem.h"
#include "Profile.h"
#include "Inventory.h"

int main()
{
	Profile profile;
	Player player;
	Battlesystem battleSystem;
	bool switching = true;
	int menu = 1;

	std::cout << "Welcome to Untitled RPG Battle Game.";
	std::cin.ignore();
	system("cls");

	while (switching) {
		std::cout << "Welcome to the main menu.\n";
		std::cout << "Please give a input.\n";
		std::cout << "1. Play Story Mode\n";
		std::cout << "2. Play Ladder mode\n";
		std::cout << "3. Play Custom Battle\n";
		std::cout << "4. Settings\n";
		std::cout << "5. Credits\n";
		std::cin >> menu;

		if (std::cin.fail()) {
			std::cin.clear(); // clear input
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			system("cls");
			std::cout << "Invalid input! Please enter a number between 1 and 5.\n";
			continue;
		}
		system("cls");

		switch (menu) {
		case 1:
			battleSystem.Story();
			battleSystem.Init();
			battleSystem.Battle();
			switching = false;
			return 1;
			break;
		case 2:
			std::cout << "In construction.";
			switching = false;
			return 1;
			break;
		case 3:
			std::cout << "In construction.";
			switching = false;

			return 1;
			break;
		case 4:
			std::cout << "In construction.";
			switching = false;
			return 1;
			break;
		}
	}
}