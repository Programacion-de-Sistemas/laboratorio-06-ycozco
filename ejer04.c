#include "chess.h"
#include "figures.h"

void display(){


    char** casilla1 = join(graySquare,whiteSquare);
    char** repeat_c1 = repeatH(casilla1,4);

    char** casilla2 = join(whiteSquare,graySquare);
    char** repeat_c2 = repeatH(casilla2,4);

    char** up_c = up(repeat_c1,repeat_c2);
    char** rep_tab = repeatV(up_c,2);

  char** rook_knight = join(rook,knight);
  char** bishop_queen = join(bishop,queen);
  char** king_bishop = join(king,bishop);
  char** knight_rook = join(knight,rook);
  char** m1 = join(rook_knight,bishop_queen);
  char** m2 = join(king_bishop,knight_rook);
  char** m3 = join(m1,m2);
    char** tab_01 = superImpose(m3,rep_tab);
    interpreter(tab_01);


}