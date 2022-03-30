#pragma once
#include <iostream>

using namespace std;

class Player
{
private :
	string name;
	char symbol;
	int winCount = 0;
	int loseCount = 0;

public:
	Player();
	Player(string a, char b);

	void setName(string a);
	void setSymbol(char a);

	string getName();
	char getSymbol();
	int getWin();
	int getLose();

	void Observer(string name);
};