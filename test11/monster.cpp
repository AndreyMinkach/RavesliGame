#include "monster.h"

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
    { "dragon", 'D', 20, 4, 100 },
    { "witch", 'w', 5, 2, 30 },
    { "orc", 'o', 4, 2, 25 },
    { "slime", 's', 1, 1, 10 }
};

Monster::Monster(Monster::Type type)
    : Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold)
{}

Monster Monster::getRandomMonster()
{
    int num = getRandomNumber(0, MAX_TYPES - 1);
    return Monster(static_cast<Type>(num));
}

