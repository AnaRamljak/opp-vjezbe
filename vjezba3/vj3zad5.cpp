#include <iostream>
#include<string>
#include <vector>
#include <random>
#include <ctime>



using namespace std;
typedef vector <string> vec;
typedef vector <string>::iterator iter;

void translate(string str)
{
    int i = 0, n = 0;
    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u')
    {
        str.push_back('h');
        str.push_back('a');
        str.push_back('y');

    }
    while (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
    {

        char ch = str.at(i);
        str.push_back(ch);
        i++;
        n++;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str.push_back('a');
            str.push_back('y');

        }


    }
    str.erase(0, n);
    cout << str << endl;

}
void funk(vec& v, int random)
{

    string new_str = "";
    string str = v.at(random);
    int n = str.size();
    for (int i = 0; i < n; i++)
    {

        if (str.at(i) == ' ' || i == n - 1)
        {
            translate(new_str);
            new_str = "";

        }
        if (str.at(i) != ' ')
            new_str.push_back(str.at(i));

    }


}

int main()
{
    int n;
    string str;
    vec v;

    srand((unsigned)time(0));

    cout << "enter number of strings ";
    cin >> n;
    cin.ignore(1, ' ');

    for (int i = 0; i < n; i++)
    {
        cout << "enter a string  ";
        getline(cin, str);
        v.push_back(str);
    }

    int random = rand() % n;
    funk(v, random);

}