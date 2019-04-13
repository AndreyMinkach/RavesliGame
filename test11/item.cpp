#include "item.h"

Item::Item()
    : mName("No name"), mCost(0), mDamage(0)
{}

Item::Item(const std::string &name, const int &cost, const int &damage)
    : mName(name), mCost(cost), mDamage(damage)
{}
