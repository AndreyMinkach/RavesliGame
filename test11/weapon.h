#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
#include "player.h"

class Sword : public Item
{

public:
    enum Type
    {
        BLOODSWORD,
        URIZEL,
        FORCEEDGE,
        SOULREAVER,
        FROSTMOURNE,
        ASHBRINGER,
        MAX_TYPES
    };

    struct PlayerSword
    {
        const char* name;
        int damage;
        int cost;
    };
    static PlayerSword playerSword[MAX_TYPES];

    static Sword buySword();

    Sword();

    Sword(Type type);

};

class Staff : public Item
{
public:
    enum Type
    {
        TOPAZ ,
        SAPPHIRE ,
        EMERALD ,
        AMBER,
        RUBY ,
        DIAMOND ,
        MAX_TYPES
    };
    struct PlayerStaff
    {
        const char* name;
        int damage;
        int cost;
    };
    static PlayerStaff playerStaff[MAX_TYPES];

    static Staff buyStaff();

    Staff();

    Staff(Type type);

};

#endif // WEAPON_H
