#include "player.h"
using namespace std;

Player::Player()
{
    win = 0;
    number = 0;
    choice = "";
}

string Player::getName()
{
    return name;
}

void Player::setName(string n)
{
    name = n;
}

int Player::getWin()
{
    return win;
}

void Player::setWin()
{
    win = 1;
}

int Player::getNumber()
{
    return number;
}


void Player::setNumber(int num)
{
    number = num;
}

string Player::getChoice()
{
    return choice;
}

void Player::setChoice(string ch)
{
    choice = ch;
}

Player::~Player()
{

}