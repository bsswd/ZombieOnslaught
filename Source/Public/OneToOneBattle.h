#pragma once

#include <string>
#include "../Public/Fighter.h"

class OneToOneBattle
{
public:
    std::string DeclareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttackerName);    

};