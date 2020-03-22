#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> vec;
typedef vec::const_iterator iter;

void summ(vec v, int n)
{
	int sum = 0;
	vec v1;
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		sum = v.at(i) + v.at(j);
		cout << sum << " ";
		v1.push_back(sum);

	}
	iter max = max_element(v1.begin(), v1.end());
	iter min = min_element(v1.begin(), v1.end());
	cout << "\nmax " << *max << endl;
	cout << "min " << *min << endl;

}

int main()
{
	vec v;
	int el, n;
	iter min, max;
	cout << "enter size of vector ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "enter element of vector ";
		cin >> el;
		v.push_back(el);
	}

	summ(v, n);

}
