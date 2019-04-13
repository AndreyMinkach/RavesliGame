#ifndef LOGIC_H
#define LOGIC_H

#include "player.h"
#include "monster.h"

static int killedEnem = 0;

void playerGoShop();


void attackMonster(Player &p ,Monster &m);


void attackPlayer(Monster &m, Player &p);


void showStat(Player &p);

void fightMonster(Player &p);

#endif // LOGIC_H
