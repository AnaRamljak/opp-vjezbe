#include <iostream>
#include "player.h"

using namespace std;

int main()
{
    int num;
    string name;
    cout << "Unesite ime prvog igraca\n";
    cin >> name;
    Player p1;
    p1.setName(name);

    string choice;
    cout << "Unesite odabir: par ili nepar\n";
    cin >> choice;
    p1.setChoice(choice);

    cout << "Unesite broj\n";
    cin >> num;
    p1.setNumber(num);

    cout << "Unesite ime drugog igraca\n";
    cin >> name;
    Player p2;
    p2.setName(name);

    if (p1.getChoice() == "nepar")
    {
        cout << "Preostali izbor,odnosno izbor igraca " << p2.getName() << " jest par\n";
        p2.setChoice("par");
    }
    else if (p1.getChoice() == "par")
    {
        cout << "Preostali izbor,odnosno izbor igraca " << p2.getName() << " jest nepar\n";
        p2.setChoice("nepar");
    }

    cout << "Unesite broj\n";
    cin >> num;
    p2.setNumber(num);

    int sum = p1.getNumber() + p2.getNumber();
    string winCh;
    if (sum % 2 == 0)
        winCh = "par";
    else
        winCh = "nepar";

    if (p1.getChoice() == winCh)
    {
        p1.setWin();
    }
    else if (p2.getChoice() == winCh)
    {
        p2.setWin();
    }

    if (p1.getWin())
        cout << "Pobijednik je " << p1.getName();
    else if (p2.getWin())
        cout << "Pobijednik je " << p2.getName();



}
