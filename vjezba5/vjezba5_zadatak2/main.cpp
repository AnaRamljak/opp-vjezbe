#include<iostream>
#include "board.h"
#include "Point.h"

using namespace std;

int main()
{

    Board* b = new Board(20, 10);
    Board* b2= b;
    Point p1(2,2),p2(8,8),p3(2,8),p4(16,8),p5(17,4),p6(7,4);
    b->draw_line(p1, p2, 'x');
    b->draw_line(p3, p4, 'x');
    b->draw_char(p5,'x');
    b->draw_up_line(p6, 'x');
    b->display();


   
 
}