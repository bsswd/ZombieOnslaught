#include "../Public/BoardGame.h"

#include <cctype>

char BoardGame::fightResolve(char defender, char attacker)
{
    /*  Player 1: p= Pikeman, k= Knight, a= Archer, s= Swordsman
     *  Player 2: P= Pikeman, K= Knight, A= Archer, S= Swordsman
     *
     *  Archers always win against swordsmens
     *  Swordsmen always win against pikemen
     *  Pikemen always win against knights
     *  Knights always win against archers 
     *
     *  As = A, aS = a
     *  Sp = S, sP = s
     *  Pk = P, pK = p
     *  Ka = K, kA = k
     */
    
    //Check for illegal move, two pieces from same player
    
    if (std::islower(defender) && std::islower(attacker) ||
        std::isupper(defender) && std::isupper(attacker))
            return -1;
    
    char victor;
    
    switch(tolower(attacker))
    {
        case 'a':
            victor = tolower(defender) == 'k' ? defender : attacker;
            break;
        case 'p':
            victor = tolower(defender) == 's' ? defender : attacker;
            break;
        case 's':
            victor = tolower(defender) == 'a' ? defender : attacker;
            break;
        case 'k':
            victor = tolower(defender) == 'p' ? defender : attacker;
            break;
        default:
            victor = attacker;
    }

    return victor;
}