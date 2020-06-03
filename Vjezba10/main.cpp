#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
bool greaterThan500(int i)
{
    return i > 500;
}

bool lessThan300(int i)
{
    return i < 300;
}

bool dwn(int x, int y)
{
    return y < x;
}

void numbers(vector <int> v)
{
    cout << "brojeva vecih od 500 ima: " << count_if(v.begin(), v.end(), greaterThan500) << endl;
    cout << "minimalni element je: " <<  *min_element(v.begin(), v.end()) << endl;
    cout << "maximalni element je: " << *max_element(v.begin(), v.end()) << endl;
    v.erase(remove_if(v.begin(), v.end(), lessThan300),v.end());
    sort(v.begin(), v.end(), dwn);
    ostream_iterator<int> os(cout, ",");
    copy(v.begin(), v.end(), os);
}

int main()
{
    vector <int> v;
    ifstream f("numbers.txt");
    
    if (!f)
    {
        throw "Datoteka ne postoji";
    }
    
   
    istream_iterator<int> is(f), eos;
    copy(is, eos, back_inserter(v));
    numbers(v);
      
    
}

