#include <iostream>
using namespace std;

struct circle {
    int x, y, r;
};

struct rect
{
    int x, y, width, height;
};

bool intersect(circle c, rect r)
{
    int Distance1 = abs(c.x - r.x);
    int Distance2 = abs(c.y - r.y);
    if (Distance1 > (r.width / 2 + c.r))
    {
        return false;
    }
    if (Distance2 > (r.height / 2 + c.r))
    {
        return false;
    }
    if (Distance1 <= (r.width / 2))
    {
        return true;
    }
    if (Distance2 <= (r.height / 2))
    {
        return true;
    }
    int Distance = (Distance1 - r.width / 2) ^ 2 + (Distance2 - r.height / 2) ^ 2;

    return (Distance <= (c.r ^ 2));
}

int main()
{
    circle c;
    rect r;
    cout << "enter x and y coordinates of circle ";
    cin >> c.x >> c.y;
    cout << "enter radius ";
    cin >> c.r;
    cout << "enter x and y coordinates of rectangle ";
    cin >> r.x >> r.y;
    cout << "enter height of rectangle ";
    cin >> r.height;
    cout << "enter width of recttangle ";
    cin >> r.width;
    bool a = intersect(c, r);
    if (a == true)
    {
        cout << "true";
    }
    else
        cout << "false";
}