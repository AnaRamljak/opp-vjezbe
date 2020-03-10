#include <iostream>

using namespace std;
int fnk(int* ar,int n)
{
    for(int i = 2; i < n; i++)
    {
        ar[i] = ar[i-1] + ar[i-2];
    }

}

int main()
{
    int n;
    cout<<"unesite broj elemenata niza";
    cin>>n;
    int* ar;
    ar=new int[n];
    ar[0]=1;
    ar[1]=1;
    fnk(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i] <<",";
    }
    delete [] ar;
    ar=0;
}
