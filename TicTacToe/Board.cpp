#include "Board.h"

Board::Board(int a)
{
	if (a < 3)
	{
		a = 3;
	}
	this->size = a * a;
	papan = new char[size];

	for (int i = 0; i < size; i++)
	{
		papan[i] = ' ';
	}
}

Board::~Board()
{
	delete[] papan;
}

char Board::board2d(int x, int y)
{
	return papan[x + (int)sqrt(size) * y];
}


int Board::getSize()
{
	return size;
}

void Board::makeBoard()
{
	for (int i = 0; i < size; i++)
	{
		cout << papan[i] << ' ';
		if ((i + 1) % (int)sqrt(size) == 0)
		{
			cout << endl;
		}
	}
}

void Board::resetBoard()
{
	for (int i = 0; i < size; i++)
	{
		papan[i] = ' ';
	}
}

void Board::placesymbol(int coord, char symbol)
{
	int tempCoord = coord;
	if (!(isFilled(coord)))
	{
		papan[coord] = symbol;
	}
	else
	{
		while (tempCoord == coord)
		{
			cout << "Filled" << endl;
			cout << "Input :  "; cin >> tempCoord;
		}
		papan[tempCoord] = symbol;
	}
}

bool Board::isFilled(int coord)
{
	return papan[coord] != ' ';
}

bool Board::isWin()
{
	int streak = 0;
	int vstreak = 0;
	for (int i = 0; i < size; i++)
	{
		if (papan[i] == papan[i + 1] && papan[i] != ' ')
		{
			streak += 1;
		}
		else if ((i + 1) % (int)sqrt(size) == 0)
		{
			streak = 0;
		}

		if (streak == ((int)sqrt(size) - 1))
		{
			return 1;
			break;
		}
	}

	for (int i = 0; i < (int)sqrt(size); i++)
	{
		for (int j = 0; j < (int)sqrt(size); j++)
		{
			if (board2d(i, j) == board2d(i, j + 1) && board2d(i, j) != ' ')
			{
				vstreak += 1;
			}

			if (vstreak == 2)
			{
				return 1;
				break;
			}
		}
		vstreak = 0;
	}
	return 0;
}

