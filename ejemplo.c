#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = join(blackSquare,whiteSquare);
  char** blackKnightx = repeatH(blackKnight,4);
  interpreter(blackKnightx);
}