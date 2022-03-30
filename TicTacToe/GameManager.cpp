#include "GameManager.h"

GameManager::GameManager(Board* board, Player* player1, Player* player2)
{
	board = board;
	player[0] = player1;
	player[1] = player2;
}

void GameManager::play()
{
	for (int i = 0; i < board->getSize(); i++)
	{
		int coord;
		Giliran(i);
		
		cout << "Player Turn " << giliran->getName() << endl;
		cout << "Input : "; cin >> coord;
		input(coord);
		board->makeBoard();

		if (board->isWin())
		{
			gameOver(1);
			break;
		}

		if (i == board->getSize())
		{
			gameOver(0);
		}

	}
}

void GameManager::gameOver(int status)
{
	if (status == 0)
	{
		cout << "Draw!!!";
		giliran = NULL;
	}
	else
	{
		notifyWinner();
	}
}

void GameManager::input(int coord)
{
	board->placesymbol(coord, giliran->getSymbol());
}

Player GameManager::Giliran(int a)
{
	if ((a + 1) % 2 == 0)
	{
		giliran = player[1];
	}
	else
	{
		giliran = player[0];
	}
	return *giliran;
}

void GameManager::notifyWinner()
{
	player[0]->Observer(giliran->getName());
	player[1]->Observer(giliran->getName());
}