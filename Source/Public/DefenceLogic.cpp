#include "DefenceLogic.h"

#include <iostream>
#include <ostream>
#include <thread>

std::string DefenceLogic::DefenseResult(int ZombiesCount, float Distance, int AmmoCount)
{
    int ZombiesShot = 0;
    
    //Check for initial negative values
    if (ZombiesCount < 0 || AmmoCount < 0 || Distance < 0)   return "Parameters < 0 ";
    
    //Check for initial zero values
    if (ZombiesCount == 0)   return "Zombie count is 0. There nobodies to shoot";    
    if (Distance == 0.f)    return "Distance is 0. You are eaten. Sorry.";    
    if (AmmoCount == 0)     return "Ammo count is 0. Your rifle is empty. Soon you will be eaten";
    
    
    while (Distance > 0.f)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        Distance -= 0.5f;
        if (Distance <= 0.f && AmmoCount > 0)  return "You shot " + std::to_string(ZombiesShot) + " zombies before being eaten: overwhelmed.";
        
        if (ZombiesCount == 0)  return "You shot all " + std::to_string(ZombiesShot) + " zombies.";
        
        ZombiesShot++;
        ZombiesCount--;
        AmmoCount--;
        
        if (ZombiesCount > 0 && AmmoCount == 0) return "You shot " + std::to_string(ZombiesShot) + " zombies before being eaten: ran out of ammo.";
        
        // Debug output
        std::cout << "--- --- Iteration --- --- " << ZombiesShot << "\n";
        
        std::cout << "Zombies shot: " << ZombiesShot << "\n";
        std::cout << "Zombies left: " << ZombiesCount << "\n";
        std::cout << "Distance left: " << Distance << "\n";
        std::cout << "Ammo left: " << AmmoCount << "\n";
        
        std::cout  << "\n";
    }
    
    return "Unexpected behavior";
}