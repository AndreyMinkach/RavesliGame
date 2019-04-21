#ifndef MONSTERCLASSTYPEENUM_H
#define MONSTERCLASSTYPEENUM_H

#include <string>

enum class Type
{
    DRAGON,
    WITCH,
    ORC,
    SLIME,
    MAX_TYPES
};

std::string fromEnumToString(Type temp)
{
    std::string m;
    switch (temp)
    {
    case Type::DRAGON :
    {
        return m = "Dragon";
    }
    case Type::WITCH :
    {
        return m = "Witch";
    }
    case Type::ORC :
    {
        return m = "Ork";
    }
    case Type::SLIME :
    {
        return m = "Slime";
    }
    }
}

#endif // MONSTERCLASSTYPEENUM_H
