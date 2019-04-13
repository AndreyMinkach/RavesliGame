#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

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

#endif // WEAPON_H
