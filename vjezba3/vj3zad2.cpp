#include <iostream>
#include <string>
#include<vector>
#include <cctype> 

using namespace std;

typedef vector <string> vec;
typedef vec::const_iterator iter;

void reverse(vec v, char ch, int i)
{
    reverse(v.rbegin(), v.rend());
    v.back().push_back(ch);

    if (islower(v.at(0).at(0)))
    {
        v.at(0).at(0) = toupper(v.at(0).at(0));
    }

    for (iter i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

}


int main()
{
    vec v;
    string str = "Standard template library.";
    string str1;
    int i;
    for (i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == ' ')
        {
            v.push_back(str1);
            str1.clear();
        }
        else
        {
            char c;
            c = str[i];
            if (isupper(c))
            {
                c = tolower(c);
            }
            str1.push_back(c);
        }

    }
    v.push_back(str1);
    char ch = str[i];
    reverse(v, ch, i);


}
