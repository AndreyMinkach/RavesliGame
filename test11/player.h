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
    Player(Type type);


    void lvlUp();

    static Player chooseRace();

    bool hasWon();

    void setLvl(int lvl);

    int getLvl() const;

};


#endif // PLAYER_H
