#include "chess.h"
#include "figures.h"

void display(){
  char** graySquare = reverse(whiteSquare);
  char** two_combo = join(graySquare,whiteSquare);
  char** reversed = reverse(two_combo);
  char** combined= repeatH(reversed,4); 
  interpreter(combined);
}