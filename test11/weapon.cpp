#include "weapon.h"

#include <iostream>

Sword::PlayerSword Sword::playerSword[Sword::MAX_TYPES]
{
    { "Blood sword", 5, 100},
    { "Urizel", 10, 300},
    { "Force Edge", 10, 200},
    { "Soulreaver", 20, 500},
    { "Frostmourne", 10, 210},
    { "Ashbringer", 50, 1000}
};

Sword Sword::buySword()
{
    int ans;
     std::cout<<"What do you want to buy:\n1)Blood sword, 5, 10\n2)Urizel, 10, 300\n3)Force Edge, 10, 200\n4)Soulreaver, 20, 500\n5)Frostmourne, 10, 210\n6)Ashbringer, 50, 1000"<<std::endl;
     std::cin>>ans;
     switch (ans)
     {
     case 1:
     {
         Sword p = Sword(static_cast<Type>(0));
         std::cout<<"You buy Blood sword, 5, 100";
         return p;
     }
     case 2:
     {
         Sword p = Sword(static_cast<Type>(1));
         std::cout<<"You buy Urizel, 10, 300";
         return p;
     }
     case 3:
     {
         Sword p = Sword(static_cast<Type>(2));
         std::cout<<"You buy Force Edge, 10, 200";
         return p;
     }
     case 4:
     {
         Sword p = Sword(static_cast<Type>(3));
         std::cout<<"You buy Soulreaver, 20, 500";
         return p;
     }
     case 5:
     {
         Sword p = Sword(static_cast<Type>(4));
         std::cout<<"You buy Frostmourne, 10, 210";
         return p;
     }
     case 6:
     {
         Sword p = Sword(static_cast<Type>(5));
         std::cout<<"You buy Ashbringer, 50, 1000";
         return p;
     }
     }
}

Sword::Sword()
{}

Sword::Sword(Sword::Type type)
    : Item(playerSword[type].name, playerSword[type].damage, playerSword[type].cost)
{}

