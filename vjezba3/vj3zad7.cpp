#include <iostream>
#include <list>

using namespace std;

typedef list <int> li;
typedef list<int> ::iterator iter;

void stuffing_bit(li& l)
{
    int sum = 0;
    for (iter i = l.begin(); i != l.end(); i++)
    {
        if (*i == 1)
        {
            sum++;
        }
        if (*i == 0)
        {
            sum = 0;
        }
        if (sum == 6)
        {
            l.insert(i, 0);
        }
    }

}
int main()
{
    int a = 0;
    li l;
    while (a == 1 || a == 0)
    {
        cout << "enter binary number ";
        cin >> a;
        if (a > 1 || a < 0)
        {
            break;
        }
        l.push_back(a);

    }
    stuffing_bit(l);
    for (iter i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }

}