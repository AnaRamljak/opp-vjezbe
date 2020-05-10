#include "game.h"
#include <iostream>

using namespace std;

Game::Game()
{

}

void Game::calculate(Player p1, Player p2)
{
    int result = p1.getNumber() + p2.getNumber();
    string correct;
    if (result % 2)
        correct = "nepar";
    else
        correct = "par";

    if (p1.getCall() == correct)
    {
        p1.setWin();
    }
    else if (p2.getCall() == correct)
    {
        p2.setWin();
    }

    if (p1.getWin())
        cout << "Pobijedio/la je " << p1.getName();
    else if (p2.getWin())
        cout << "Pobijedio/la je " << p2.getName();
}

Game::~Game()
{

}
