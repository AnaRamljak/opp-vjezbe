#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include "deck.h"
#include "player.h"
using namespace std;

int main()
{
	int numpl, points;
	cout << "enter number of players" << " ";
	cin >> numpl;
	if (numpl == 2)
	{
		player pl1, pl2;
		deck d;
		d.shuffle();
		cout << "name first player" << " ";
		cin >> pl1.name;
		pl1.hand = d.dealcard();
		pl1.printhand();
		points = pl1.points(pl1.hand);
		cout << points << "\n";
		cout << "name second player" << " ";
		cin >> pl2.name;
		pl2.hand = d.dealcard();
		pl2.printhand();
		points = pl2.points(pl2.hand);
		cout << points << "\n";


	}
	if (numpl == 4)
	{
		player pl1, pl2, pl3, pl4;
		int points;
		deck d;
		d.shuffle();
		cout << "name first player" << " ";
		cin >> pl1.name;
		pl1.hand = d.dealcard();
		pl1.printhand();
		points = pl1.points(pl1.hand);
		cout << points << "\n";
		cout << "name second player" << " ";
		cin >> pl2.name;
		pl2.hand = d.dealcard();
		cout << pl2.name << "\n";
		pl2.printhand();
		points = pl2.points(pl2.hand);
		cout << points << "\n";
		cout << "name third player" << " ";
		cin >> pl3.name;
		pl3.hand = d.dealcard();
		pl3.printhand();
		points = pl3.points(pl3.hand);
		cout << points << "\n";
		cout << "name fourth player" << " ";
		cin >> pl4.name;
		pl4.hand = d.dealcard();
		pl4.printhand();
		points = pl4.points(pl4.hand);
		cout << points << "\n";


	}
}