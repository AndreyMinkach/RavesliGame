#ifndef LOGIC_H
#define LOGIC_H

#include "creature.h"
#include "player.h"
#include "monster.h"

static int killedEnem = 0;

void playerGoShop(Player &p)
{

}

void attackMonster(Player &p ,Monster &m)
{
    if(p.isDead())
        return;

    m.reduceHealth(p.getDamage());
    std::cout<< "You hit the " << m.getName() << " for " << p.getDamage() <<" damage.\n";
    if(m.isDead())
    {
        system("cls");
        std::cout<< "You kill the " << m.getName()<<std::endl;
        p.lvlUp();
        p.addGold(m.getGold());
        killedEnem++;
    }
}

void attackPlayer(Monster &m, Player &p)
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

void fightMonster(Player &p)
{
    Monster m = Monster::getRandomMonster();
    std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";

    while (!m.isDead() && !p.isDead())
    {
        std::cout<<"(F)ight or (R)un?\n";
        std::string choice;
        std::cin>>choice;

        if(choice == "R" || choice == "r")
        {
            if(getRandomNumber(1,2) == 1)
            {
                std::cout<<"Bad luck, you must fight this round.\n";
                attackMonster(p ,m);
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
           attackMonster(p,m);
           attackPlayer(m, p);
        }
        else if(choice == "stat")
        {
            showStat(p);
        }
        else if (choice == "shop" || choice == "s")
        {
            playerGoShop(p);
        }
        else {
            std::cout<<"Mistake in input\n";
        }
    }
}

#endif // LOGIC_H