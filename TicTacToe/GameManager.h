#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"

using namespace std;

class GameManager
{
private:
	Board	*board;
	Player	*player[2];
	Player	*giliran;
public:
	GameManager(Board* board, Player* player1, Player* player2);
	void play();
	void input(int coord);
	Player Giliran(int a);
	void gameOver(int status);
	void notifyWinner();
};
