#include "Book.h"

using namespace std;

Book::Book()
{

}

string Book::getAuthor()
{
	return author;
}

void Book::setAuthor(string a)
{
	author = a;
}
string Book::getTitle()
{
	return title;
}

void Book::setTitle(string t)
{
	title = t;
}

int Book::getYear()
{
	return year;
}

void Book::setYear(int y)
{
	year = y;
}


Book::~Book()
{

}