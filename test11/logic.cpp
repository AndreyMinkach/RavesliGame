#include "logic.h"
#include "weapon.h"



void playerAttackTheMonster(Player &player, Monster &monster)
{
    if(player.isDead())
        return;

    monster.reduceHealth(player.getDamage());
    std::cout<< "You hit the " << monster.getName() << " for " << player.getDamage() <<" damage.\n";
    if(monster.isDead())
    {
        system("cls");
        std::cout<< "You kill the " << monster.getName()<<std::endl<<std::endl;
        player.lvlUp();
        player.addGold(monster.getGold());
        killedEnem++;
    }
}

void monsterAttackPlayer(Monster &m, Player &p)
{
    if(m.isDead())
        return;
        p.reduceHealth(m.getDamage());
        std::cout<< "The " << m.getName() << " hit you for " << m.getDamage() <<" damage.\n";
}

void showStat(Player &p)
{
    std::cout<<"You kill "<<killedEnem<<". Good job.\nYour damage is "<< p.getDamage()<<".\nYour lvl is " << p.getLvl()<<std::endl;
}


void playerGoShop(Player &p)
{
    int choice;
    std::cout<<"What do you want to buy:\n 1)Swords\n 2)Staff ";
    std::cin>> choice;

    switch (choice)
    {
    case 1:
    {
        Sword sword;
        checkCostOfItem(p, sword.mCost);
        break;
    }
    case 2:
        Staff staff = staff.buyStaff();
        checkCostOfItem(p, staff.mCost);
        break;
    }

}

void fightMonster(Player &player)
{
    Monster monster = Monster::getRandomMonster();
    std::cout << "You have encountered a " << monster.getName() << " (" << monster.getSymbol() << ").\n";

    while (!monster.isDead() && !player.isDead())
    {
        std::cout<<"(F)ight or (R)un?\n";
        std::string choice;
        std::cin>>choice;

        if(choice == "R" || choice == "r")
        {
            if(getRandomNumber(1,2) == 1)
            {
                std::cout<<"Bad luck, you must fight this round.\n";
                playerAttackTheMonster(player ,monster);
                continue;
            }
            else
            {
                std::cout<<"Good luck, you run away from monster!\n";
                return;
            }
        }
        else if(choice == "F" || choice == "f")
        {
           playerAttackTheMonster(player, monster);
           monsterAttackPlayer(monster, player);
        }
        else if(choice == "stat")
        {
            showStat(player);
        }
        else if (choice == "shop" || choice == "s")
        {
           playerGoShop(player);
        }
        else {
            std::cout<<"Mistake in input\n";
        }
    }
}



int checkCostOfItem(Player &p, Item &item)
{
    if(item.mCost > p.getGold())
    {
        std::cout<<"Not enough gold!";
    }
    else
    {

    }
}
