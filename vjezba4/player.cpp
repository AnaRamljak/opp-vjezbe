#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include "player.h"

using namespace std;

void player::printhand()
{
	for (int i = 0; i < 10; i++)
	{
		cout << hand[i].value << " " << hand[i].symbol << "\n ";
	}
}

int player::points(vector<card>handd)
{

	int points = 0, one = 0, two = 0, three = 0;
	for (int i = 0; i < 10; i++)
	{
		if (handd[i].value == "1")
		{
			one++;

		}
		if (handd[i].value == "2")
		{
			two++;
		}
		if (handd[i].value == "3")
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
		if (handd[i].value == "1")
		{
			if (handd[i].symbol == "kupe")
				kupe.push_back(1);
			else if (handd[i].symbol == "bastone")
				bastone.push_back(1);
			else if (handd[i].symbol == "spade")
				spade.push_back(1);
			else if (handd[i].symbol == "dinare")
				dinare.push_back(1);
		}
		else if (handd[i].value == "2")
		{
			if (handd[i].symbol == "kupe")
				kupe.push_back(1);
			else if (handd[i].symbol == "bastone")
				bastone.push_back(1);
			else if (handd[i].symbol == "spade")
				spade.push_back(1);
			else if (handd[i].symbol == "dinare")
				dinare.push_back(1);
		}
		else if (handd[i].value == "3")
		{
			if (handd[i].symbol == "kupe")
				kupe.push_back(1);
			else if (handd[i].symbol == "bastone")
				bastone.push_back(1);
			else if (hand[i].symbol == "spade")
				spade.push_back(1);
			else if (hand[i].symbol == "dinare")
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