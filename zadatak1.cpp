#include <iostream>

using namespace std;
void fun(int arr[], int n, int& minn, int& maxx)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minn)
        {
            minn = arr[i];
        }
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
}

int main()
{
    int n = 5;
    int arr[] = { 111,22,34,15,88 };
    int minn = arr[1];
    int maxx = arr[1];
    fun(arr, n, minn, maxx);
    cout << "minimalni element je " << minn << endl;
    cout << "maximalni element je " << maxx << endl;
}