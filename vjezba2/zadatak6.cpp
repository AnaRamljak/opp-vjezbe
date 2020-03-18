#include <iostream>

using namespace std;

struct vector
{
    int* arr;
    int ph;
    int log;
};

void vector_new(vector& v)
{
    v.arr = new int(4);
    v.ph = 1;
    v.log = 0;
}

void vector_delete(vector& v)
{
    delete[] v.arr;
    v.arr = 0;
    v.ph = 0;
    v.log = 0;

}

void vector_push_back(vector& v, int el)
{
    if (v.ph == v.log)
    {
        int* darr = new int[v.ph * 2];
        for (int i = 0; i < v.ph; i++)
        {
            darr[i] = v.arr[i];
        }
        v.ph = v.ph * 2;
        delete[] v.arr;
        v.arr = 0;
        v.arr = darr;
    }
    v.arr[v.log] = el;
    v.log++;

}
int* vector_pop_back(vector& v)
{

    int* darr = new int[v.log];
    for (int j = 0; j < v.log - 1; j++)
    {
        darr[j] = v.arr[j];
    }
    delete[] v.arr;
    v.log--;
    return darr;
}

int vector_front(vector& v)
{
    return v.arr[0];
}

int vector_back(vector& v)
{
    return v.arr[v.log - 1];
}

int vector_size(vector& v)
{
    return v.log;
}

int main1()
{
    vector v;
    vector_new(v);
    vector_push_back(v, 1);
    vector_push_back(v, 2);
    vector_push_back(v, 3);
    vector_push_back(v, 4);
    vector_push_back(v, 5);
    vector_push_back(v, 6);
    vector_push_back(v, 7);
    for (int i = 0; i < v.log; i++)
    {
        cout << v.arr[i] << " ";
    }
    v.arr = vector_pop_back(v);
    v.arr = vector_pop_back(v);
    cout << "\n";

    for (int i = 0; i < v.log; i++)
    {
        cout << v.arr[i] << " ";
    }
    cout << "\n";
    int a = vector_front(v);
    cout << "first " << a << endl;
    int b = vector_back(v);
    cout << "last " << b << endl;
    int c = vector_size(v);
    cout << "size " << c;
    vector_delete(v);
}
