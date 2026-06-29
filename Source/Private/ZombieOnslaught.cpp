// Codewars task solution by bsswd (c)

#include <iostream>
#include "../Public/DefenceLogic.h"

int main(int argc, char* argv[])
{
    std::cout << "Zombie Onslaught \n\n";
    
    DefenceLogic defenceLogic;
    
    std::cout << defenceLogic.DefenseResult(10,100.f,12);
    
    return 0;
}

