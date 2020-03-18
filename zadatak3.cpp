#include <iostream>

using namespace std;

int& funk(int* niz, int i)
{
    return niz[i];
}
int main()
{
    int n = 4;
    int niz[] = { 1,2,3,4 };
    int i = 2;
    funk(niz, i) += 1;
    for (int i = 0; i < n; i++)
    {
        cout << niz[i] << ",";
    }
}