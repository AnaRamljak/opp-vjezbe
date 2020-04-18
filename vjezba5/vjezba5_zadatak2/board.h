#pragma once
#include<iostream>
#include <string>
#include "Point.h"

using namespace std;

class Board{       
private:  
    char** matrix;
    int row;  
    int col;  
    char ch;
    
public:
    Board();
    Board(int r, int c);
    Board(const Board& b2) { row = b2.row; col = b2.col; }
    void draw_char(Point p,char ch);
    void draw_up_line(Point p, char ch);
    void draw_line(Point p1, Point p2, char ch);
    void display();
    ~Board();
};

