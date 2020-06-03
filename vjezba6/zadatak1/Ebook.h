#pragma once
#include<iostream>
#include <string>
#include "Book.h"

using namespace std;

class Ebook : public Book
{
private:
	string fileName;
	int MB;
public:
	Ebook();
	Ebook(string a, string t, int y, string FN, int mb) : Book(a, t, y), fileName(FN), MB(mb) {}
	string getfileName();
	void setFileName(string FN);
	int getSize();
	void setSize(int mb);
	~Ebook();
};