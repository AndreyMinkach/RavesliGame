#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>

class Creature
{
public:

    Creature(const std::string &name, char symbol, int health, int damage, int gold);

    void reduceHealth(int healthToReduce);
    bool isDead();
    void addGold(int goldToAdd);

    std::string getName() const;
    void setName(const std::string &name);

    char getSymbol() const;
    void setSymbol(char symbol);

    int getHealth() const;
    void setHealth(int health);

    int getDamage() const;
    void setDamage(int damage);

    int getGold() const;
    void setGold(int gold);

private:
    std::string mName;
    char mSymbol;
    int mHealth;
    int mDamage;
    int mGold;


};

#endif // CREATURE_H
