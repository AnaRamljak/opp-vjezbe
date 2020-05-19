#include <iostream>
#include "money.h"

using namespace std;

int main() {

	money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);
	money racun = juha + becki + salata + pivo;
	racun -= pivo;
	racun += babic;
	cout << racun << endl;

	double d = racun;
	cout << "tip double " << d << endl;
}