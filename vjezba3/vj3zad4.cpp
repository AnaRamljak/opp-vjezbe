#include<iostream>
#include<string>
#include <vector>

using namespace std;

typedef vector <string> vect;

void find_max(string s, string& max)
{
    if (s.size() > max.size())
    {
        max = s;
    }
}

void find(string s, string str1, string& max)
{

    bool f = false;

    if (str1.find(s) != str1.npos)
    {
        f = true;
    }
    if (f)
    {
        find_max(s, max);
    }

}

int main()
{
    string str = "objektno orjentirano programiranje - predmet druge godine";
    string str1 = "najdrazi predmet - objektno programiranje";
    string s, max = "";
    int n = str.size();
    for (int i = 0; i <= n; i++)
    {
        if (str[i] == ' ' || str[i] == str[n])
        {
            find(s, str1, max);
            s.clear();

        }
        else
        {
            s.push_back(str[i]);
        }

    }
    cout << max;
}
