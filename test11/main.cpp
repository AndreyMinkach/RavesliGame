#include "monster.h"
#include "logic.h"

int main()
{
    srand(static_cast<unsigned int>(time(0)));
        rand();

        std::cout << "Enter your name: ";
        std::string playerName;
        std::cin >> playerName;

        Player player = Player::chooseRace();
        player.setName(playerName);

        system("cls");

        std::cout << "Welcome, " << player.getName() << '\n';

        while (!player.isDead() && !player.hasWon())
        {
            fightMonster(player);
        }
        if (player.isDead())
        {
            std::cout << "You died at level " << player.getLvl() << " and with " << player.getGold() << " gold.\n";
        }
        else
        {
            std::cout << "You won the game with " << player.getGold() << " gold!\n";
        }

        return 0;
    }
