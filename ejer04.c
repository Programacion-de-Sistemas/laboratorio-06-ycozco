#include "chess.h"
#include "figures.h"

void display(){


    char** test1 = join(graySquare,whiteSquare);
    char** test2 = join(rook,knight);
    char** impose1 = superImpose(test1,test1);
    char** impose2 = superImpose(test2,test2);
    char** ip = superImpose(rook,rook);
    char** impose3 = superImpose(impose1,ip);


  interpreter(impose3);

}