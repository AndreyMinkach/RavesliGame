#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>

class Creature
{
public:
    std::string mName;
    char mSymbol;
    int mHealth;
    int mDamage;
    int mGold;

    Creature(std::string name, char symbol, int health, int damage, int gold)
        :   mName(name), mSymbol(symbol), mHealth(health), mDamage(damage), mGold(gold)
    {}

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


};

#endif // CREATURE_H
