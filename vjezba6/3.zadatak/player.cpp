#include "player.h"

using namespace std;

Player::Player(string n)
{
    name = n;
    win = 0;
    number = 0;
    call = "";
}

int Player::getWin()
{
    return win;
}

int Player::getNumber()
{
    return number;
}

void Player::setWin()
{
    win++;
}

void Player::setNumber(int n)
{
    number = n;
}

string Player::getCall()
{
    return call;
}

void Player::setCall(string choice)
{
    call = choice;
}

string Player::getName()
{
    return name;
}

Player::~Player()
{

}
