#include "chess.h"
#include "figures.h"

void display(){
  char** two_combo = join(graySquare,whiteSquare);
  char** combined= repeatH(two_combo,4); 

  char** rook_knight = join(rook,knight);
  char** bishop_queen = join(bishop,queen);
  char** king_bishop = join(king,bishop);
  char** knight_rook = join(knight,rook);
  char** m1 = join(rook_knight,bishop_queen);
  char** m2 = join(king_bishop,knight_rook);
  char** m3 = join(m1,m2);
  char** imposed = superImpose(m3,combined);
  interpreter(imposed);

}