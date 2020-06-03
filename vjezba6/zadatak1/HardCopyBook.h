#pragma once
#include<iostream>
#include<string>
#include "Book.h"

using namespace std;

class HardCopyBook : public Book
{
private:
	int pages;
public:
	HardCopyBook();
	HardCopyBook(string a, string t, int y, int p) : Book(a, t, y)  , pages(p) {}
	int getPages();
	void setPages(int p);
	int getSize() { return 0; }
	~HardCopyBook();
};
