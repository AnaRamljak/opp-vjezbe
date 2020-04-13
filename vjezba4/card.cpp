#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include "player.h"
#include "deck.h"

card::card(string csymbol, string cvalue)
{
	symbol = csymbol;
	value = cvalue;
}