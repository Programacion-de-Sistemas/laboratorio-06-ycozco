#include "chess.h"
#include "figures.h"

void display(){

  char** normal = join(graySquare,whiteSquare);
  char** reversed = reverse(normal);
  char** combined = join(reversed,normal);
  char** result= repeatH(reversed,4); 
  interpreter(result);
}