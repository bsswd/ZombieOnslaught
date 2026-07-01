#include "..\Public\OneToOneBattle.h"

#include <iostream>
#include <ostream>

std::string OneToOneBattle::DeclareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttackerName)
{
    auto attacker = fighter1->getName() == firstAttackerName ? fighter1 : fighter2;
    auto defender = attacker == fighter1 ? fighter2 : fighter1;
    
    while (true)
    {
        defender->setHealth(defender->getHealth() - attacker->getDamagePerAttack());
        if (defender->getHealth() <= 0)
        {
            return attacker->getName();
        }
    
        std::swap(attacker, defender);
    }
}