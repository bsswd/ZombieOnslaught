// Codewars task solution by bsswd (c)

#include <iostream>

#include "../Public/BoardGame.h"
#include "../Public/DefenceLogic.h"
#include "../Public/Fighter.h"
#include "../Public/OneToOneBattle.h"

int main(int argc, char* argv[])
{
    int solution(int number);
    
    
    //OneToOneBattle firstBattle;
    //DefenceLogic firstDefenceLogic;
    //BoardGame boardGameSession;
    
    //Fighter fighter1("Lew", 10, 2);
    //Fighter fighter2("Harry", 5, 4);
    
    //std::string firstDefenceResult = firstDefenceLogic.DefenseResult(10, 20.f, 5);
    //std::string firstBattleWinner = firstBattle.DeclareWinner(&fighter1, &fighter2, "Lew");
    
    //char boardGameSessionResult = boardGameSession.fightResolve('k', 'A');
    
    //std::cout << firstDefenceResult << std::endl;
    //std::cout << firstBattleWinner << std::endl;
    //std::cout << boardGameSessionResult << std::endl;
    
    std::cout << solution(20) << std::endl;
    
    
    
    return 0;
}

int solution(int number)
{
    int result = 0;    
    if (number <= 0) return 0;
    
    for (int i = number - 1; i > 0; i--)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            result += i;
            continue;
        }
        
        if (i % 3 == 0 || i % 5 == 0) result += i;
    }
   
    return result;
}





