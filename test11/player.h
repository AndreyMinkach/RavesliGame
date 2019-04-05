#ifndef PLAYER_H
#define PLAYER_H

#include "creature.h"
#include <windows.h>

class Player : public Creature
{

private:
    enum Type
    {
        Mag,
        ORC,
        OGR,
        PALADIN,
        ELF,
        TROLL,
        HUMANN,
        MAX_TYPES
    };
    struct PlayerData
    {
        const char* name;
        char symbol;
        int health;
        int damage;
        int gold;
    };
    int mLvl = 1;
     static PlayerData playerData[MAX_TYPES];
public:
    Player(Type type)
        : Creature(playerData[type].name, playerData[type].symbol, playerData[type].health, playerData[type].damage, playerData[type].gold)
    {}

    void lvlUp()
    {
        mLvl++;
        mDamage++;
    }

    static Player chooseRace()
    {
        std::cout<<"Choose the class of your player\n 1)Mag, 7 hlt, 7 dmg, 100 gold\n 2)Orc, 15 hlt, 3 dmg, 20 gold\n 3)Ogr, 10 hlt, 4 dmg, 25 gold\n 4)Paladin, 20 hlt, 2 dmg, 50 gold\n 5)Elf, 10 hlt, 5 dmg, 40 gold\n 6)Troll, 12 hlt, 4 dmg, 10 gold\n 7)Humann, 10 hlt, 4 dmg, 50 gold\n";
        int ch;
        std::cin>>ch;
        switch (ch)
        {
        case 1:
        {
            Player p = Player(static_cast<Type>(0));
            return p;
        }
        case 2:
        {
            Player p = Player(static_cast<Type>(1));
            return p;
        }
        case 3:
        {
            Player p = Player(static_cast<Type>(2));
            return p;
        }
        case 4:
        {
            Player p = Player(static_cast<Type>(3));
            return p;
        }
        case 5:
        {
            Player p = Player(static_cast<Type>(4));
            return p;
        }
        case 6:
        {
            Player p = Player(static_cast<Type>(5));
            return p;
        }
        case 7:
        {
            Player p = Player(static_cast<Type>(6));
            return p;
        }
        }
    }

    bool hasWon()
    {
        return mLvl >= 20;
    }

    void setLvl(int lvl)
    {
        mLvl = lvl;
    }

    int getLvl() const
    {
        return mLvl;
    }

};
Player::PlayerData Player::playerData[Player::MAX_TYPES]
{
    { "mag", 'm', 7, 7, 100 },
    { "orc", 'o', 15, 3, 20 },
    { "ogr", 'g', 10, 4, 25 },
    { "paladin", 'p', 20, 2, 50 },
    { "elf", 'e', 10, 5, 40 },
    { "troll", 't', 12, 4, 10 },
    { "humann", 'h', 10, 4, 50 }
};

#endif // PLAYER_H
