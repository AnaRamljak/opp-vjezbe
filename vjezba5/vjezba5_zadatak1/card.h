#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class card {
	
	string symbol;
	string value;

public:
	card();
	card(string csymbol, string cvalue);
	void setsymbol(string csymbol);
	string getsymbol();
	void setvalue (string cvalue);
	string  getvalue();
	~card();
	
};
