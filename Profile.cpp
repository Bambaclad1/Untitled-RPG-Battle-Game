#include "Profile.h"
#include "Player.h"
#include <iostream>
#include <windows.h>
#include <vector>

void Profile::PlayerProfile()
{
    std::cout << R"(
__________.__                              __________                _____.__.__          
\______   \  | _____  ___.__. ___________  \______   \_______  _____/ ____\__|  |   ____  
 |     ___/  | \__  \<   |  |/ __ \_  __ \  |     ___/\_  __ \/  _ \   __\|  |  | _/ __ \ 
 |    |   |  |__/ __ \\___  \  ___/|  | \/  |    |     |  | \(  <_> )  |  |  |  |_\  ___/ 
 |____|   |____(____  / ____|\___  >__|     |____|     |__|   \____/|__|  |__|____/\___  >
                    \/\/         \/                                                    \/ 
    )" << "\n";
	Sleep(500);
    std::cout << "\nWelcome, hero " << player.Name << "!\n";
    std::cout << "You are currently level " << player.getLevel() << " and you currently have " << player.getEXP() << " EXP.\n";
    std::cout << "Stats: " << "HP: " << player.getHP() << "  MP: " << player.getMP() << "  Attack: " << player.getAttack() << "  Magic Power: " << player.getMagicPower() << "  Defense: " << player.getDefense() << "  Money: " << player.getMoney();

    std::cin.ignore();
    std::cin.ignore();

}