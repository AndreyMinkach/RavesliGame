#include "creature.h"

char Creature::getSymbol() const
{
    return mSymbol;
}

void Creature::setSymbol(char symbol)
{
    mSymbol = symbol;
}

int Creature::getHealth() const
{
    return mHealth;
}

void Creature::setHealth(int health)
{
    mHealth = health;
}

int Creature::getDamage() const
{
    return mDamage;
}

void Creature::setDamage(int damage)
{
    mDamage = damage;
}

int Creature::getGold() const
{
    return mGold;
}

void Creature::setGold(int gold)
{
    mGold = gold;
}

void Creature::reduceHealth(int healthToReduce)
{
     mHealth -= healthToReduce;
}

bool Creature::isDead()
{
   {
        return mHealth <= 0;
    }
}

void Creature::addGold(int goldToAdd)
{
    mGold += goldToAdd;
}

std::string Creature::getName() const
{
    return mName;
}

void Creature::setName(const std::string &name)
{
    mName = name;
}
