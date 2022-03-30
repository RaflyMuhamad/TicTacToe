#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Board
{
private :
	char* papan;
	int size;
public :
	Board();
	Board(int size);
	~Board();

	char board2d(int x, int y);
	int getSize();
	void makeBoard();
	void resetBoard();

	void placesymbol(int coord, char symbol);
	bool isFilled(int coord);
	bool isWin();

};