#include <iostream>
#include <vector>
#include<stdlib.h>

using namespace std;

template<typename T>
bool fun(T a, T b)
{

	return a > b;
}


template<typename T> 
void sort(T arr[],int n)
{
	for (int i= 0;i< n-1;++i)
	{
		int j = i + 1;
		if (fun(arr[i], arr[j]))
		{
			swap(arr[i], arr[j]);
		}
	}
	for(int i=0;i<n;++i)
	{
		cout << arr[i] << ","  ;
	}
	cout << endl;
}

template<>
bool fun(char a, char b)
{

	return tolower(a) > tolower(b);
}


int main()
{
	int arr[] = { 1,5,2,8,6 };
	int n = 5;
	sort(arr, n);

	char array[] = { 'A', 'z', 'B', 'n', 'I' };
	sort(array,n);
	
}