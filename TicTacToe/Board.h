#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Board
{
private :
	char* papan;
	int boardsize;
public :
	Board();
	Board(int boardsize);
	~Board();

	char board2d(int x, int y);
	int getSize();
	void resetBoard();
	void makeBoard();

	void placesymbol(int coord, char symbol);
	bool isFilled();
	bool isWin();


};
