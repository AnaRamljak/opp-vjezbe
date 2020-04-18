#include <iostream>
#include <string>
#include <vector>
#include "card.h"
using namespace std;

class player {

	int numofpoints;
	string name;
	vector <card> hand;
public:
	player();
	player(string cname);
	void setname(string nname);
	string getname();
	void sethand(vector <card> chand);
	vector<card> gethand();
	void printhand(vector<card>chand);
	int points(vector<card>handd);
	~player();

};
