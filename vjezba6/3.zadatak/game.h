#include <vector>
#include "player.h"

using namespace std;

class Game
{
    vector <Player> players;
public:
    Game();
    void calculate(Player p1, Player p2);
    ~Game();
};
