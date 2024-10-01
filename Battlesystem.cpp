#include "Battlesystem.h"
#include <iostream>
#include <windows.h>
#include "Enemy.h"
#include "Player.h"
#include <random>
#include "Profile.h"
#include "Inventory.h"

void Battlesystem::Story() {
	std::cout << "Pending loading story mode";
	for (int i = 0; i < 5; i++) {
		std::cout << ".";

		std::cout.flush();  // Ensure the dot is printed immediately
		Sleep(1000);        // Wait 1 second between dots
	}
	system("cls");
	std::cout << R"(
Long ago, in the year 1840, humans and monsters lived side by side, not as enemies, but as allies.
In this era, a rare few were born with a special gift: Mana.
Those blessed with Mana could wield extraordinary magic, harnessing the power of the elements and casting spells beyond imagination.
The gods themselves bestowed this gift upon the world, and it was seen as a divine blessing—a link between humanity and the heavens.
For a time, peace flourished.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
Long ago, in the year 1840, humans and monsters lived side by side, not as enemies, but as allies.
In this era, a rare few were born with a special gift: Mana.
Those blessed with Mana could wield extraordinary magic, harnessing the power of the elements and casting spells beyond imagination.
The gods themselves bestowed this gift upon the world, and it was seen as a divine blessing—a link between humanity and the heavens.
For a time, peace flourished.

But as fate would have it, peace is fragile.)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
An unimaginable plague struck without warning.
A virus like no sickness ever known—spread through the world, infecting the very essence of the monsters.
Once noble and majestic, they turned into savage creatures, their minds twisted by uncontrollable rage.
The humans, fearing for their lives, had no choice but to fight.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
Blood spilled across the land, and the balance shattered. Monsters were hunted down, slain by the thousands.
The gods, watching from their celestial thrones, grew enraged by the needless bloodshed.
In their anger, they revoked their blessing, stripping humanity of Mana. Magic was no longer a birthright.)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
A war erupted that would last for 30 years.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
By the year 1890, the world lay in ruin.
Nearly all of the Mana users—the once-cherished mages and sorcerers—were gone, their powers extinguished.
Only 5% survived, vanishing into the shadows, never to be seen again.
With magic fading from memory, humanity turned to technology.
Sharper blades, deadlier bows, impenetrable armor—warfare advanced without magic, and humans adapted to survive in a world overrun with monsters.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
Now it is the year 1900.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
You, an ordinary youth, struggle to scrape by in a harsh and unforgiving world.
Monsters still roam the land, and the only way to make a living is by hunting them.
You take up arms, desperate for coin, travelling from one dangerous region to the next, fighting for survival.
But there's something you’ve kept hidden—something you barely understand yourself.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
You possess Mana.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
Unlike others, your connection to the ancient magic has not been severed.
Yet, you've told no one. The mere whisper of Mana would stir fear and suspicion.
You keep your power hidden, slowly honing your abilities in secret, while making your way as a hunter of monsters.
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
But your journey will not be an easy one. The world is cruel, and your path is treacherous. As your magic grows, so too does the danger.
)";
	std::cout << R"(
Will you master the lost art of Mana and become a force to be reckoned with? Or will the monsters—and the secrets of the past—consume you first?
)";
	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << R"(
The future of the world may rest in your hands. But in a land where magic is feared, and trust is scarce, your greatest enemy might not be the monsters after all.
)";

	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");

	std::string name = "Hero";

	do {
		std::cout << "What will be the Hero's name?\n";
		std::getline(std::cin, name);

		if (name.empty()) {
			std::cout << "Please type a valid name for your hero.\n";
		}
	} while (name.empty());

	Player::Name = name;

	std::cout << "\nPress Enter to continue...";
	std::cin.ignore();
	system("cls");
	std::cout << "On your stroll, you have encountered a slime!\n";
}

void Battlesystem::Init() {
	Player player;
	Enemy enemy;

	int prevPlayerHP = player.getHP();
	int prevPlayerMP = player.getMP();
	turn = 1;
	Sleep(500);
	std::cout << R"(

__________         __    __  .__                     __                 __   
\______   \_____ _/  |__/  |_|  |   ____     _______/  |______ ________/  |_ 
 |    |  _/\__  \\   __\   __\  | _/ __ \   /  ___/\   __\__  \\_  __ \   __\
 |    |   \ / __ \|  |  |  | |  |_\  ___/   \___ \  |  |  / __ \|  | \/|  |  
 |______  /(____  /__|  |__| |____/\___  > /____  > |__| (____  /__|   |__|  
        \/      \/                     \/       \/            \/             

    )";
	Sleep(500);
}

void Battlesystem::EndingInit() {
	Player player;
	Enemy enemy;

	player.setHP(prevPlayerHP);
	player.setMP(prevPlayerMP);

}

void Battlesystem::Battle() {
	Player player;
	Enemy enemy;
	Profile profile;
	Inventory playerInventory;

	bool switching = true;
	int menu = 1;
	do {
		enemyTurn = true;
		isDefending = false;

		std::cout << "\n" << player.Name << " Has " << player.getHP() << " HP Left and " << player.getMP() << " MP Left.\n";
		std::cout << enemy.Name << " Has " << enemy.getHP() << " HP Left!\n";
		std::cout << "Current turn: " << turn << "\n" << "\n";

		std::cout << "What do you do?\n";
		std::cout << "1. Attack\n";
		std::cout << "2. Defend\n";
		std::cout << "3. Skill\n";
		std::cout << "4. Inventory\n";
		std::cout << "5. Stats\n";

		std::cin >> menu;

		if (std::cin.fail()) {
			std::cin.clear(); // clear input
			system("cls");
			std::cout << "Invalid input! Please enter a number between 1 and 5.\n";
			continue;
		}
		system("cls");

		if (enemy.getHP() <= 0) {
			std::cout << enemy.Name << " has been defeated!\n";
			EnemyDied = true;
			break;
		}
		else if (player.getHP() <= 0)
		{
			std::cout << player.Name << " has been defeated!\n";
			PlayerDied = true;
			break;
		}

		switch (menu) {
		case 1:
			Attack(enemy);
			switching = false;
			break;
		case 2:
			Defend();
			switching = false;
			break;
		case 3:
			Skill(enemy, player);
			switching = false;
			break;
		case 4:
			playerInventory.Potion();

			playerInventory.InventoryGUI(player);

			switching = false;
			break;
		case 5:
			system("cls");
			switching = true;
			profile.PlayerProfile();
			enemyTurn = false;
			break;
		default:
			std::cout << "You did something else instead. Now its the enemy's turn to battle! Oh no!" << std::endl;
			break;
		}

		if (enemy.getHP() <= 0) {
			std::cout << enemy.Name << " has been defeated!\n";
			EnemyDied = true;
			break;
		}
		else if (player.getHP() <= 0)
		{
			std::cout << player.Name << " has been defeated!\n";
			PlayerDied = true;
			break;
		}

		if (enemyTurn) {
			Enemyturn(player);
		}

		if (enemy.getHP() <= 0) {
			std::cout << enemy.Name << " has been defeated!\n";
			EnemyDied = true;
			break;
		}
		else if (player.getHP() <= 0)
		{
			std::cout << player.Name << " has been defeated!\n";
			PlayerDied = true;
			break;
		}


		turn++;
	} while (true); 
	Sleep(500);

	if (EnemyDied) {
		std::cout << "\nBattle won!";
	}
	else if (PlayerDied) {
		std::cout << "\nBattle loss.";
	}
	
}

void Battlesystem::Attack(Enemy& enemy) {
	int menu = 1;
	bool switching = true;

	while (switching) {
		std::cout << "How will you fight?\n";

		std::cout << "1. Punch\n";
		std::cout << "ATT | Punches the enemy. Does 2 damage, half on weak and double on crit. 40% chance crit, 20% miss.\n";
		std::cout << "\n";

		std::cout << "2. Kick\n";
		std::cout << "ATT | Kicks the enemy. 20% chance failing, 40% chance stun. Does 4 damage.\n";
		std::cout << "\n";

		std::cin >> menu;

		if (std::cin.fail()) {
			std::cin.clear(); // clear input
			system("cls");
			std::cout << "Invalid input! Please enter a number between 1 and 4.\n";
			continue;
		}
		system("cls");

		switch (menu) {
		case 1:
			Punch(enemy);
			switching = false;
			break;
		case 2:
			Kick(enemy);
			switching = false;
			break;
		}
	}
}

void Battlesystem::Punch(Enemy& enemy) {
	system("cls");
	std::cout << "Your fist was raging full of anger and power, ready to hit " << Enemy::Name << "!\n";
	int dmg = RandomizerAtt(2);
	Sleep(500);
	DealDamageToEnemy(enemy, dmg);
}

void Battlesystem::Kick(Enemy& enemy) { 
	system("cls");
	std::cout << "Your feet was prepared and ready to deliver a humongous kick to " << Enemy::Name << " !\n";
	int dmg = RandomizerKick(2);
	Sleep(500);
	DealDamageToEnemy(enemy, dmg);
}

void Battlesystem::DealDamageToEnemy(Enemy& enemy, int dmg){
	Player player;
	int att = player.getAttack();
	dmg = dmg * att;
	int hp = enemy.getHP();
	hp -= dmg;
	enemy.setHP(hp);
	std::cout << "\n" << "You dealt " << dmg << " Damage to " << Enemy::Name << "!\n";
	
	if (player.getAttack() >= 2 && dmg >= 0) {
		std::cout << "However because of your Attack stat being " << player.getAttack() << " points, it was multiplied by that. Nice!\n";
	}

	Sleep(1000);

}

void Battlesystem::Defend() {
	std::cout << "You decided to get ready and brace yourself for this moment!\n";
	Sleep(500);
	isDefending = true;
}

void Battlesystem::Skill(Enemy& enemy, Player& player) {
	int mp = player.getMP();
	int menu = 1;
	bool switching = true;

	while (switching) {
		std::cout << "What do you cast?\n";

		std::cout << "1. Firaga | 5MP \n";
		std::cout << "ATT/El | A basic fire ball being cast with fire elements. Does 5 damage, 40% Crit chance, 20% Miss chance.\n";
		std::cout << "\n";



		std::cin >> menu;

		if (std::cin.fail()) {
			std::cin.clear(); // clear input
			system("cls");
			std::cout << "Invalid input! Please enter a number between 1 and 4.\n";
			continue;
		}
		system("cls");

		switch (menu) {
		case 1:
			if (mp >= 5) {
				Firaga(enemy);
				mp -= 5;
				player.setMP(mp);
			}
			else
			{
				std::cout << "What a disaster.. Not enough MP!? Firaga failed!";
			}
			switching = false;
			break;
		case 2:
			Kick(enemy);
			switching = false;
			break;
		}
	}
}

void Battlesystem::Firaga(Enemy& enemy) {
	std::cout << "The magic power of your anchestors surround you, ready to cast a fireball to " << enemy.Name << "\n";
	int dmg = RandomizerAtt(5);
	Sleep(500);
	DealMagicDamageToEnemy(enemy,dmg);
}

void Battlesystem::DealMagicDamageToEnemy(Enemy& enemy, int dmg) {
	Player player;

	int MPatt = player.getMagicPower();
	dmg = dmg * MPatt;
	int hp = enemy.getHP();
	hp -= dmg;
	enemy.setHP(hp);
	std::cout << "\n" << "You dealt " << dmg << " Damage to " << Enemy::Name << "!\n";

	if (player.getMagicPower() >= 2 && dmg >= 0) {
		std::cout << "However because of your Magic stat being " << player.getAttack() << " points, it was multiplied by that. Nice!\n";
	}

	Sleep(1000);

}

int Battlesystem::RandomizerAtt(int damage) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 5);
	int choice = dis(gen);
	switch (choice) {
	case 1:
		damage = damage * 2;
		std::cout << "Critical Hit!\n";
		return damage;
	case 2:
		damage = damage * 2;
		std::cout << "Critical Hit!\n";
		return damage;
	case 3:
		return damage;
	case 4:
		return damage;
	case 5:
		damage = damage / 2;
		std::cout << "That didn't feel good.. Weak Hit!\n";
		return damage;
	}
}

int Battlesystem::RandomizerKick(int damage) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 5);
	int choice = dis(gen);
	switch (choice) {
	case 1:
		damage = damage * 2;
		std::cout << "Stunned him!\n";
		Sleep(500);
		std::cout << "Your foe will not be able to fight back for this turn!\n";
		enemyTurn = false;
		return damage;
	case 2:
		damage = damage * 2;
		std::cout << "Stunned him!\n";
		Sleep(500);
		std::cout << "Your foe will not be able to fight back for this turn!\n";
		enemyTurn = false;
		return damage;
	case 3:
		return damage;
	case 4:
		return damage;
	case 5:
		damage = 0;
		std::cout << "f#@k. you missed that one.. !\n";
		return damage;
	}
}

void Battlesystem::Enemyturn(Player& player) { // make enemy battle better
	Sleep(500);
	std::cout << "\n" << Enemy::Name << " readys his sword and slashes you in a slice! " << "\n";
	int dmg = 5;
	Sleep(500);


	std::cout << "\n";

	Sleep(500);
	DealDamageToPlayer(player, dmg);
}

void Battlesystem::DealDamageToPlayer(Player& player, int dmg) {
	if (isDefending) {
		std::cout << "Although, you were bracing yourself for damage so damage is halved!\n";
		dmg = dmg / 2;
	}
	int def = player.getDefense();

	dmg = dmg - def;
	std::cout << "You got " << dmg << " damage!" << "\n";
	std::cout << "(however, your player has " << def << " defense points, so damage was substracted from that.)\n";

	Sleep(500);
	int hp = player.getHP();
	hp -= dmg;
	player.setHP(hp);

}

 