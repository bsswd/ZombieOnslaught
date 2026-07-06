// Codewars task solution by bsswd (c)

#include <iostream>

#include "../Public/BoardGame.h"
#include "../Public/DefenceLogic.h"
#include "../Public/Fighter.h"
#include "../Public/OneToOneBattle.h"

int main(int argc, char* argv[])
{
    //OneToOneBattle firstBattle;
    //DefenceLogic firstDefenceLogic;
    BoardGame boardGameSession;
    
    //Fighter fighter1("Lew", 10, 2);
    //Fighter fighter2("Harry", 5, 4);
    
    //std::string firstDefenceResult = firstDefenceLogic.DefenseResult(10, 20.f, 5);
    //std::string firstBattleWinner = firstBattle.DeclareWinner(&fighter1, &fighter2, "Lew");
    
    char boardGameSessionResult = boardGameSession.fightResolve('k', 'A');
    
    //std::cout << firstDefenceResult << std::endl;
    //std::cout << firstBattleWinner << std::endl;
    std::cout << boardGameSessionResult << std::endl;
    
    return 0;
}





