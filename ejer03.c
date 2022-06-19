#include "chess.h"
#include "figures.h"

void display(){

  char** normal = join(graySquare,whiteSquare);
  char** reversed = reverse(normal);
  char** result= up(normal,reversed); 
  char** result2 = repeatV(result,2);
  interpreter(result2);
}