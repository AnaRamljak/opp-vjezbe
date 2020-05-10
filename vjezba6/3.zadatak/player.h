#include <string>

using namespace std;

class Player
{
    string name;
    int win;
    int number;
    string call;
public:
    Player(string name);
    string getName();
    int getWin();
    void setWin();
    int getNumber();
    void setNumber(int number);
    string getCall();
    void setCall(string choice);
    ~Player();
};

