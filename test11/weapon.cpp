#include "weapon.h"

#include <iostream>

Sword::PlayerSword Sword::playerSword[Sword::MAX_TYPES]
{
    { "Wooden Sword", 7, 40},
    { "Iron Broadsword", 10, 80},
    { "Platinum Broadsword", 16, 120},
    { "Light's Bane", 17, 210},
    { "Blood Butcherer", 22, 500},
    { "Fiery Greatsword", 36, 1000}
};

Staff::PlayerStaff Staff::playerStaff[Staff::MAX_TYPES]
{
    { "Topaz", 15, 100},
    { "Sapphire", 17, 200},
    { "Emerald Edge", 19, 270},
    { "Amber", 20, 400},
    { "Ruby", 24, 500},
    { "Diamond", 30, 800}
};

Sword Sword::buySword()
{
     int ans;
     std::cout<<"What do you want to buy:\n1)Wooden Sword, 7, 40\n2)Iron Broadsword, 10, 80\n3)Platinum Broadsword, 16, 120\n4)Light's Bane, 17, 210\n5)Blood Butcherer, 22, 500\n6)Fiery Greatsword, 36, 1000"<<std::endl;
     std::cin>>ans;
     switch (ans)
     {
     case 1:
     {
         Sword p = Sword(static_cast<Type>(0));
         std::cout<<"You buy Blood sword, 5, 100"<<std::endl;
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


Staff Staff::buyStaff()
{
    int ans;
     std::cout<<"What Staff you want to buy:\n1)Topaz, 15, 100\n2)Sapphire, 17, 200\n3)Emerald, 19, 270\n4)Amber, 20, 400\n5)Ruby, 24, 500\n6)Diamond, 30, 800"<<std::endl;
     std::cin>>ans;
     switch (ans)
     {
     case 1:
     {
         Staff p = Staff(static_cast<Type>(0));
         std::cout<<"You buy Topaz, 15, 100"<<std::endl;
         return p;
     }
     case 2:
     {
         Staff p = Staff(static_cast<Type>(1));
         std::cout<<"You buy Sapphire, 17, 200";
         return p;
     }
     case 3:
     {
         Staff p = Staff(static_cast<Type>(2));
         std::cout<<"You buy Emerald, 19, 270";
         return p;
     }
     case 4:
     {
         Staff p = Staff(static_cast<Type>(3));
         std::cout<<"You buy Amber, 20, 400";
         return p;
     }
     case 5:
     {
         Staff p = Staff(static_cast<Type>(4));
         std::cout<<"You buy Ruby, 24, 500";
         return p;
     }
     case 6:
     {
         Staff p = Staff(static_cast<Type>(5));
         std::cout<<"You buy Diamond, 30, 800";
         return p;
     }
     }
}

Staff::Staff()
{}

Staff::Staff(Staff::Type type)
    : Item(playerStaff[type].name, playerStaff[type].damage, playerStaff[type].cost)
{}
