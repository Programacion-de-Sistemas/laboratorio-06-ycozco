#include "chess.h"
#include "figures.h"

void display(){
    char** casilla1 = join(graySquare,whiteSquare);
    char** repeat_c1 = repeatH(casilla1,4);
    char** rep_tab = repeatV(repeat_c1,2);

    char** rook_inv = reverse(rook);
    char** knight_inv = reverse(knight);
    char** bishop_inv = reverse(bishop);
    char** queen_inv = reverse(queen);
    char** king_inv = reverse(king);

    char** rook_knight = join(rook_inv,knight_inv);
    char** bishop_queen = join(bishop_inv,queen_inv);
    char** king_bishop = join(king_inv,bishop_inv);
    char** knight_rook = join(knight_inv,rook_inv);
    char** m1 = join(rook_knight,bishop_queen);
    char** m2 = join(king_bishop,knight_rook);
    char** m3 = join(m1,m2);

    char** tab_01 = superImpose(m3,rep_tab);
    interpreter(tab_01);
}