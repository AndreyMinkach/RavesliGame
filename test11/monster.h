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

    Monster(Type type)
        : Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold)
    {
    }

    static Monster getRandomMonster()
    {
        int num = getRandomNumber(0, MAX_TYPES - 1);
        return Monster(static_cast<Type>(num));
    }

};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
    { "dragon", 'D', 20, 4, 100 },
    { "witch", 'w', 5, 2, 30 },
    { "orc", 'o', 4, 2, 25 },
    { "slime", 's', 1, 1, 10 }
};

#endif // MONSTER_H
