#include<iostream>
using namespace std;

class money {
	int kn;
	int lp;
public:
	money(int kn,int lp);
	money(int kn);
	void setKn(int kn);
	int getKn();
	void setLp(int lp);
	int getLp();
	money operator+(money& other);
	friend ostream& operator<<(ostream& os,money& other);
	money operator-=(money& other);
	money operator+=(money& other);
	operator double();


};
