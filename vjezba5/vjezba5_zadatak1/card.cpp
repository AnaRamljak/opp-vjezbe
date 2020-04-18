#include "card.h"

card::card()
{
	
}

card::card(string csymbol, string cvalue)
{
	symbol = csymbol;
	value = cvalue;
	cout << "constructor-card" << endl;
}

void card::setsymbol(string csymbol)
{ 
	symbol = csymbol; 
}
string card::getsymbol() 
{
	return symbol; 
};
void card::setvalue(string cvalue) 
{
	value = cvalue;
}
string card::getvalue()
{ 
	return value; 
}

card::~card()
{
	
	cout << "destructor-card" << endl;
	
}