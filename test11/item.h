#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item
{
public:
    std::string mName;
    int mCost;
    int mDamage;

    Item();

    Item(const std::string &name, const int &cost, const int &damage);
};

#endif // ITEM_H
