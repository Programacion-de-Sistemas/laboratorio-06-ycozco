#include "chess.h"
#include "figures.h"

void display(){
  char** two_combo = join(graySquare,whiteSquare);
  char** combined= repeatH(two_combo,4); 
  interpreter(combined);
}