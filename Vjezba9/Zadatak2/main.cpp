#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<char> a(2);
    cout << a.is_empty() << endl;
    a.pushBack('a');
    a.pushBack('b');
    cout << a.is_empty() << endl;
    a.popBack();
    a.popBack();
    cout << a.is_empty() << endl;
   
}