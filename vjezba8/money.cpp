#include "money.h"
#include<iostream>

using namespace std;

money::money(int kn, int lp)
{
	this->kn=kn;
	this->lp=lp;
}
money::money(int kn)
{
	this->kn = kn;
	this->lp = 0;
}
void money::setKn(int kn) {
	this->kn = kn;
}
int money::getKn() {
	return kn;
}
void money::setLp(int lp) {
	this->lp = lp;
}
int money::getLp() {
	return lp;
}

money money:: operator+ (money& other)
{
	return money(kn + other.kn, lp + other.lp);

}
ostream& operator<<(ostream& os,money& other) {
	cout << other.kn << " kuna" <<  "," << other.lp << " lipa" << endl;
	return os;
}

money money:: operator-=(money& other)
{
	return money(kn -= other.kn, lp -= other.lp);
}

money money :: operator+=(money& other)
{
	money rac(kn += other.kn, lp += other.lp);
	if (lp > 100)
	{
		kn++;
		lp = lp - 100;
	}
	return rac;
}

money::operator double()
{
	return kn + lp / 100.0;
}
