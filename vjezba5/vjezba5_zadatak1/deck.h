#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "card.h"
using namespace std;

class deck {

	vector <card> mac;

public:
	deck();
	void shuffle();
	vector<card> dealcard();


};
