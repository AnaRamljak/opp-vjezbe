#include <iostream>
#include <list>

using namespace std;

typedef list <int> li;
typedef list<int> ::iterator iter;

void unstuffing_bit(li& l)
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
        if (sum == 5)
        {
            i++;
            l.erase(i++);
        }
    }

}

int main()
{

    li l = { 0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1 };
    unstuffing_bit(l);
    for (iter i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }

}