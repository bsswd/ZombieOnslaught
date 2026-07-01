#include "../Public/DefenceLogic.h"

#include <iostream>
#include <ostream>
#include <thread>

std::string DefenceLogic::DefenseResult(unsigned zombies, float distance, unsigned ammo)
{
    int zombiesShot = 0;
    
    //Check for initial negative values
    if (zombies < 0 || ammo < 0 || distance < 0)   return "Parameters < 0 ";
    
    //Check for initial zero values
    if (zombies == 0)   return "Zombie count is 0. There nobodies to shoot";    
    if (distance == 0)    return "Distance is 0. You are eaten. Sorry.";    
    if (ammo == 0)     return "Ammo count is 0. Your rifle is empty. Soon you will be eaten";
    
    while (distance > 0)
    {
        if (zombies == 0)  return "You shot all " + std::to_string(zombiesShot) + " zombies.";
        if (zombies > 0 && ammo == 0) return "You shot " + std::to_string(zombiesShot) + " zombies before being eaten: ran out of ammo.";
        
        zombiesShot++;
        zombies--;
        ammo--;
        
        // Debug output
        std::cout << "--- --- Iteration --- --- " << zombiesShot << "\n";
        
        std::cout << "Zombies shot: " << zombiesShot << "\n";
        std::cout << "Zombies left: " << zombies << "\n";
        std::cout << "Distance left: " << distance << "\n";
        std::cout << "Ammo left: " << ammo << "\n";
        
        std::cout  << "\n";
        
        distance -= 0.5f;
        
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    return "You shot " + std::to_string(zombiesShot) + " zombies before being eaten: overwhelmed.";
}