#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

struct Item
{
    std::string mName;
    int mCost;
    int mDamage;

    Item();

    Item(const std::string &name, const int &cost, const int &damage);

};

#endif // ITEM_H
