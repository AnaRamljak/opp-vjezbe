#include <iostream>
#include <list>


using namespace std;

typedef std::list <int> li;
typedef std::list <int>::iterator iter;

using namespace std;
int len(li l)
{
	iter last;
	for (iter i = l.begin(); i != l.end(); i++)
	{
		if (*i % 2 == 0)
		{
			l.insert(i, 0);
		}

		if (*i % 2 != 0 && *i != 1)
		{
			last = i;
			*i++;
			l.insert(i, 1);
			*i--;

		}
	}
	for (iter i = l.begin(); i != l.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
	*last++;
	iter first;
	for (iter j = l.begin(); j != l.end(); j++)
	{
		if (*j == 0)
		{
			first = j;
			break;
		}
	}
	int n = 0;
	for (iter k = first; k != last; k++)
	{
		n++;
	}
	return n - 1;
}
int main()
{
	li l = { 8,7,55,2,7,6 };
	int n = len(l);
	cout << n << endl;
}
