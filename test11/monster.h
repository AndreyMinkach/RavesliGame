#ifndef MONSTER_H
#define MONSTER_H

#include "creature.h"
#include "randomnumber.h"

class Monster : public Creature
{
public:
    enum Type
    {
        DRAGON,
        WITCH,
        ORC,
        SLIME,
        MAX_TYPES
    };

    struct MonsterData
    {
        const char* name;
        char symbol;
        int health;
        int damage;
        int gold;
    };

    static MonsterData monsterData[MAX_TYPES];

    Monster(Type type);

    static Monster getRandomMonster();

};


#endif // MONSTER_H
