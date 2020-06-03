#pragma once
#include<iostream>
#include <string>

using namespace std;

class Book
{
public:
	string author;
	string title;
	int year;

	Book();
	Book(string a,string t,int y) : author(a),title(t),year(y) {}
	string getAuthor();
	void setAuthor(string a);
	string getTitle();
	void setTitle(string t);
	int getYear();
	void setYear(int y);
	virtual int getSize() = 0;
	~Book();
};
