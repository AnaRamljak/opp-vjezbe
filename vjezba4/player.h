#include <iostream>
#include <string>
#include <vector>
#include "card.h"
using namespace std;

class player {

public:

	int numofpoints;
	string name;
	vector <card> hand;
	void printhand();
	int points(vector<card>handd);


};
