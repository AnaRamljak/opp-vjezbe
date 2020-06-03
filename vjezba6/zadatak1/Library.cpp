#include"Library.h"
#include<iostream>

using namespace std;

Library::Library()
{

}

vector<Book*> Library:: getBooks()
{
	return Books;
}

void Library::setBooks(vector<Book*> b)
{
	Books = b;
}

vector <string> Library::getBookByAuthor(string a)
{
	vector <string> allBooks;

	for (auto i = Books.begin(); i != Books.end(); i++)
	{
		if ((*i)->getAuthor() == a)
		{
			allBooks.push_back((*i)->getTitle());

		}
	}

	return allBooks;
}

vector<Book*>Library::getBooksByTitle(string t)
{
	vector<Book*> Titles;
	for (vector<Book*>::iterator i = Books.begin(); i != Books.end(); i++)
	{
		if ((*i)->getTitle().find(t) != string::npos )
		{
			Titles.push_back(*i);
			
		}
	}
	return Titles;
}

int Library::getSize(string a)
{
	int size = 0;
	for (vector<Book*>::iterator i = Books.begin(); i != Books.end(); i++)
	{
		if ((*i)->getAuthor() == a)
		{
			size = size +  (*i)->getSize();
		}
	}
	return size;
	
}

Library::~Library()
{
}