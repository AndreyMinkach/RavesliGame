#ifndef LOGIC_H
#define LOGIC_H

#include "player.h"
#include "monster.h"
#include "item.h"

static int killedEnem = 0;

int checkCostOfItem(Player &p, Item &item);

void playerGoShop(Player &p);

void playerAttackTheMonster(Player &p ,Monster &m);

void monsterAttackPlayer(Monster &m, Player &p);

void showStat(Player &p);

void fightMonster(Player &p);

#endif // LOGIC_H
