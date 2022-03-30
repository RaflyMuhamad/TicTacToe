#include <iostream>
#include "GameManager.h"

int main()
{
	Board board(3);
	Player a("Ayato", 'x');
	Player b("Keqing", 'o');
	GameManager gamemanager(&board, &a, &b);

	int choice = 0;
	while (choice != 99)
	{
		cout << "1. Play" << endl;
		cout << "2. Skor P1" << endl;
		cout << "3. Skor P3" << endl;
		cout << "99. Exit" << endl;
		cout << "Input [] : "; cin >> choice;
		switch (choice)
		{
		case 1:
			gamemanager.play();
			break;
		case 2:
			cout << "Skor " << a.getName() << " adalah " << a.getWin() << " - " << a.getLose() << endl;
			break;
		case 3:
			cout << "Skor " << b.getName() << " adalah " << b.getWin() << " - " << b.getLose() << endl;
			break;
		default:
			cout << "Input salah";
		}
	}
}