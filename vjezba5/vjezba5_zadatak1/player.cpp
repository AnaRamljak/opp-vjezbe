#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include "player.h"

using namespace std;
player::player()
{
	
}
player::player(string cname) 
{
	name = cname;
	cout << "constructor-player" << endl;
}
void player::setname(string nname)
{
	name = nname;
}
string player::getname()
{
	return name;
}
void player::sethand(vector <card> chand)
{
	hand = chand;
}
vector<card> player::gethand()
{
	return hand;
}
void player::printhand(vector<card>chand)
{
	for (int i = 0; i < 10; i++)
	{
		cout << chand[i].getvalue() << " " <<chand[i].getsymbol() << endl;
	}
	
}

int player::points(vector<card>handd)
{

	int points = 0, one = 0, two = 0, three = 0;
	for (int i = 0; i < 10; i++)
	{
		if (handd[i].getvalue() == "1")
		{
			one++;

		}
		if (handd[i].getvalue() == "2")
		{
			two++;
		}
		if (handd[i].getvalue() == "3")
		{
			three++;
		}



	}
	if (one == 3)
	{
		points = points + 3;
	}
	if (two == 3)
	{
		points = points + 3;
	}
	if (three == 3)
	{
		points = points + 3;
	}
	if (one == 4)
	{
		points = points + 4;
	}
	if (two == 4)
	{
		points = points + 4;
	}
	if (three == 4)
	{
		points = points + 4;
	}
	vector <int> kupe;
	vector <int> bastone;
	vector <int> spade;
	vector<int> dinare;
	for (int i = 0; i < 10; i++)
	{
		if (handd[i].getvalue() == "1")
		{
			if (handd[i].getsymbol() == "kupe")
				kupe.push_back(1);
			else if (handd[i].getsymbol() == "bastone")
				bastone.push_back(1);
			else if (handd[i].getsymbol() == "spade")
				spade.push_back(1);
			else if (handd[i].getsymbol() == "dinare")
				dinare.push_back(1);
		}
		else if (handd[i].getvalue() == "2")
		{
			if (handd[i].getsymbol() == "kupe")
				kupe.push_back(1);
			else if (handd[i].getsymbol() == "bastone")
				bastone.push_back(1);
			else if (handd[i].getsymbol() == "spade")
				spade.push_back(1);
			else if (handd[i].getsymbol() == "dinare")
				dinare.push_back(1);
		}
		else if (handd[i].getvalue() == "3")
		{
			if (handd[i].getsymbol() == "kupe")
				kupe.push_back(1);
			else if (handd[i].getsymbol() == "bastone")
				bastone.push_back(1);
			else if (hand[i].getsymbol() == "spade")
				spade.push_back(1);
			else if (hand[i].getsymbol() == "dinare")
				dinare.push_back(1);
		}



		if (kupe.size() == 3)
			points += 3;
		if (bastone.size() == 3)
			points += 3;
		if (spade.size() == 3)
			points += 3;
		if (dinare.size() == 3)
			points += 3;
		return points;

	}
}

player::~player()
{
	cout << "destructor-player";
}