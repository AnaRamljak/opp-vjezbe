#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include "deck.h"

using namespace std;

deck::deck() {
	string symbol[] = { "spade", "dinare", "bastone","kupe" };
	string value[] = { "1","2","3","4","5","6","7","11","12","13" };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10; j++) {
			card neww(symbol[i], value[j]);
			mac.push_back(neww);
		}
	}
}

void deck::shuffle() {
	int n = mac.size();
	for (int i = 0; i < n - 1; i++)
	{
		int j = i + rand() % (n - i);
		swap(mac[i], mac[j]);
	}
}

vector<card> deck::dealcard() {
	vector <card> newmac;
	for (int i = 0; i < 10; i++)
	{
		newmac.push_back(mac[i]);
	}
	mac.assign(mac.begin() + 10, mac.end());
	return newmac;


}