#include<iostream>
using namespace std;
int* expand(int* arr, int n)
{
	int* darr = new int[2 * n];
	for (int k = 0; k < n; ++k)
	{
		darr[k] = arr[k];
	}
	delete[] arr;
	return darr;
}
int* funk(int& n)
{
	int i = 0,a = 1;
	int* arr = new int[10];

	while (a != 0)
	{
		cout << "Enter elemet in array ";
		cin >> a;
		arr[i] = a;
		i++;
		if (i == n)
		{
			arr = expand(arr, n);
			n = n * 2;
		}

	}
	return arr;
}

int main()
{
	int n = 10;
	int* new_arr = funk(n);

	for (int i = 0; i < n; i++)
	{
		cout << new_arr[i] << " ";
	}
	delete[] new_arr;

}