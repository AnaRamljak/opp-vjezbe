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
		string name;
		d.shuffle();

		cout << "name first player" << " ";
		cin >> name;
		pl1.setname(name);
		name = pl1.getname();
		cout << name;
		pl1.sethand(d.dealcard());
		pl1.printhand(pl1.gethand());
		points = pl1.points(pl1.gethand());
	    cout << points << endl;

		cout << "name second player" << " ";
		cin >> name;
		pl2.setname(name);
		name = pl2.getname();
		cout << name;
		pl2.sethand(d.dealcard());
		pl2.printhand(pl2.gethand());
		points = pl2.points(pl2.gethand());
		cout << points << endl;


	}
	if (numpl == 4)
	{
		player pl1, pl2, pl3, pl4;
		int points;
		deck d;
		string name;
		d.shuffle();

		cout << "name first player" << " ";
		cin >> name;
		pl1.setname(name);
		name = pl1.getname();
		cout << name;
		pl1.sethand(d.dealcard());
		pl1.printhand(pl1.gethand());
		points = pl1.points(pl1.gethand());
		cout << points << endl;

		cout << "name second player" << " ";
		cin >> name;
		pl2.setname(name);
		name = pl2.getname();
		cout << name;
		pl2.sethand(d.dealcard());
		pl2.printhand(pl2.gethand());
		points = pl2.points(pl2.gethand());
		cout << points << endl;

		cout << "name third player" << " ";
		cin >> name;
		pl3.setname(name);
		name = pl3.getname();
		cout << name;
		pl3.sethand(d.dealcard());
		pl3.printhand(pl3.gethand());
		points = pl3.points(pl3.gethand());
		cout << points << endl;

		cout << "name fourth player" << " ";
		cin >> name;
		pl4.setname(name);
		name = pl4.getname();
		cout << name;
		pl4.sethand(d.dealcard());
		pl4.printhand(pl4.gethand());
		points = pl4.points(pl4.gethand());
		cout << points << endl;


	}
}