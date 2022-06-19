#include "chess.h"
#include "figures.h"

void display(){
    char** graySquare = reverse(whiteSquare);

    char** casilla1 = join(graySquare,whiteSquare);
    char** repeat_c1 = repeatH(casilla1,4);
    char** rep_tab = repeatV(repeat_c1,2);

    char** rook_knight = join(rook,knight);
    char** bishop_queen = join(bishop,queen);
    char** king_bishop = join(king,bishop);
    char** knight_rook = join(knight,rook);
    char** m1 = join(rook_knight,bishop_queen);
    char** m2 = join(king_bishop,knight_rook);
    char** m3 = join(m1,m2);

    char** tab_white_01 = superImpose(m3,rep_tab);

    char** rep_tab2 = reverse(rep_tab);
    char** list_pawn_1 = join(pawn,pawn);
    char** list_pawn_2 = repeatH(list_pawn_1,4);
    char** list_pawn_3 = superImpose(list_pawn_2,rep_tab2);

    char** tab_white_02 = up(tab_white_01,list_pawn_3);


    char** normal = join(graySquare,whiteSquare);
    char** normal2 = repeatH(normal,4);
    char** reversed = reverse(normal);
    char** reversed2 = repeatH(reversed,4);
    char** result= up(normal2,reversed2); 
    char** middle = repeatV(result,2);

    char** rep_tab3 = reverse(rep_tab2);
    char** pawn_rev = reverse(pawn);
    char** list_pawn_black_1 = join(pawn_rev,pawn_rev);
    char** list_pawn_black_2 = repeatH(list_pawn_black_1,4);
    char** list_pawn_black_3 = superImpose(list_pawn_black_2,rep_tab3);

    char** tab_black_01 = reverse(tab_white_01);
    char** tab_black_02 = up(list_pawn_black_3,tab_black_01);

    char** general = up(middle,tab_black_02);
    char** general_2 = up(tab_white_02,general);

    interpreter(general_2);

}