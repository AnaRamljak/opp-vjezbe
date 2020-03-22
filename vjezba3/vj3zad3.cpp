#include<iostream>
#include <string>
using namespace std;

void remove_subs(string& str, string substr)
{
    int l = 0;
    while (l = str.find(substr) != str.npos)
    {
        l = str.find(substr);
        str.erase(l, substr.size());
    }



}

int main()
{
    string str = "so many books, so little time. ";
    string substr = "so";
    remove_subs(str, substr);
    cout << str;

}
