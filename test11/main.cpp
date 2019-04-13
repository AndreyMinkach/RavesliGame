#include "monster.h"
#include "logic.h"

int main()
{
    srand(static_cast<unsigned int>(time(0)));
        rand();

        std::cout << "Enter your name: ";
        std::string playerName;
        std::cin >> playerName;

        Player p = Player::chooseRace();
        p.setName(playerName);

        system("cls");

        std::cout << "Welcome, " << p.getName() << '\n';

        while (!p.isDead() && !p.hasWon())
        {
            fightMonster(p);
        }
        if (p.isDead())
        {
            std::cout << "You died at level " << p.getLvl() << " and with " << p.getGold() << " gold.\n";
            std::cout << "Too bad you can't take it with you!\n";
        }
        else
        {
            std::cout << "You won the game with " << p.getGold() << " gold!\n";
        }

        return 0;
    }
