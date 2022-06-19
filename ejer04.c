#include "chess.h"
#include "figures.h"

void display(){
  char** two_combo = join(graySquare,whiteSquare);
  char** piece_01 = superImpose(knight,graySquare);
  interpreter(piece_01);
}