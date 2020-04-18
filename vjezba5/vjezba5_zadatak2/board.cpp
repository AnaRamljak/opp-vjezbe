#include<iostream>
#include "board.h"
#include "Point.h"

Board::Board()
{

}

Board::Board(int r,int c)
{
	row = r;
	col = c;
    ch = 'o';
	matrix = new char*[row];
	for (int i = 0; i < row; ++i)
	{
		matrix[i] = new char[col];
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (i == 0 || j == 0 || i == row-1  || j == col-1 )
			{
				matrix[i][j] = ch;
			}
			else
			{
				matrix[i][j] = ' ';
			}
		}
	}

}

void Board::draw_char(Point p, char ch)
{
	int x = p.x, y = p.y;
	matrix[x][y] = ch;
	
}

void Board::draw_up_line(Point p, char ch)
{
	int x = p.x;
	int y = p.y;
	for (int i = 1; i <= y; i++)
	{
		matrix[x][i] = ch;

	}

}

void Board::draw_line(Point p1, Point p2, char ch)
{
	int x1 = p1.x, x2 = p2.x, y1 = p1.y, y2 = p2.y;

	if (x1 == x2 && y1 > y2)
	{
		for (int i = y2; i <= y1; ++i)
		{
			matrix[x1][i] = ch;
		}
	}

	if (x1 == x2 && y1 < y2)
	{
		for (int i = y1; i <= y2; ++i)
		{
			matrix[x1][i] = ch;
		}
	}

	if (x1 > x2 && y1 > y2)
	{
		for (int i = x2,j= y2; i<=x1 && j<= y1; ++i,++j)
		{
			matrix[i][j] = ch;
		}
	}

	if (x1 < x2 && y1 < y2)
	{
		for (int i = x1, j = y1; i <= x2 && j <= y2; ++i, ++j)
		{
			matrix[i][j] = ch;
		}
	}

	if (x1 > x2 && y1 < y2)
	{
		for (int i = x2, j = y1; i <= x1 && j <= y2; ++i, ++j)
		{
			matrix[i][j] = ch;
		}
	}

	if (x1 < x2 && y1 > y2)
	{
		for (int i = x1, j = y2; i <= x2 && j <= y1; ++i, ++j)
		{
			matrix[i][j] = ch;
		}
	}

	if (x1 > x2 && y1 == y2)
	{
		for (int i = x2; i <= x1 ; ++i)
		{
			matrix[i][y1] = ch;
		}
	}

	if (x1 < x2&& y1 == y2)
	{
		for (int i = x1; i <= x2; ++i)
		{
			matrix[i][y1] = ch;
		}
	}
	
	if (x1 == x2 && y1 == y2 && x1 > y1)
	{
		for (int i = x2, j = y2; i <= x1 && j <= y1; i++, j++)
		{
			matrix[i][j] = ch;
		}
	}

	if (x1 == x2 && y1 == y2 && x1 < y1)
	{
		for (int i = x1, j = y1; i <= x2 && j <= y2; i++, j++)
		{
			matrix[i][j] = ch;
		}
	}

	
}
void Board::display()

{
	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << this->matrix[j][i];

		}
		cout << endl;
	}
}

Board::~Board()
{
	for (int i = 0; i < row; i++)
		delete[] matrix[i];
	delete[] matrix;

}