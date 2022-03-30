#include "Player.h"

Player::Player(string a, char b)
{
	setName(a);
	setSymbol(b);
}

void Player::setName(string a)
{
	name = a;
}

void Player::setSymbol(char a)
{
	symbol = a;
}

string Player::getName()
{
	return name;
}

char Player::getSymbol()
{
	return symbol;
}

int Player::getWin()
{
	return winCount;
}

int Player::getLose()
{
	return loseCount;
}

void Player::Observer(string name)
{
	if (name == this->name)
	{
		winCount += 1;
		cout << this->name << " Win!!!" << endl;
	}
	else
	{
		loseCount += 1;
		cout << this->name << " Lose!!!" << endl;
	}
}