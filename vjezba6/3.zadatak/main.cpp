#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    Game g;
    int num;
    string name, choice;
    cout << "Unesite ime prvog igraca\n";
    cin >> name;
    Player p1(name);

    cout << "par ili nepar\n";
    cin >> choice;
    p1.setCall(choice);

    cout << "Unesite broj koji igrac bira\n";
    cin >> num;
    p1.setNumber(num);

    cout << "Unesite ime drugog igraca\n";
    cin >> name;
    Player p2(name);

    if (p1.getCall() == "nepar")
    {
        p2.setCall("par");
    }
    else if (p1.getCall() == "par")
    {
        p2.setCall("nepar");
    }

    cout << "Unesite broj koji igrac bira\n";
    cin >> num;
    p2.setNumber(num);

    g.calculate(p1, p2);


}
