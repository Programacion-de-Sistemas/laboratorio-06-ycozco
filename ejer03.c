#include "chess.h"
#include "figures.h"

void display(){
  char** graySquare = reverse(whiteSquare);
  char** normal = join(graySquare,whiteSquare);
  char** normal2 = repeatH(normal,4);
  char** reversed = reverse(normal);
  char** reversed2 = repeatH(reversed,4);
  char** result= up(normal2,reversed2); 
  char** result2 = repeatV(result,2);
  interpreter(result2);
}