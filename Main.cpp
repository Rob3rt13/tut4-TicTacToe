#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main()
{
	int userSelectedNumber;
	TicTacToe board = TicTacToe();
	bool status = false;

	while (!status)
	{
		cout << "Player1(o): Enter a number between 1 and 9." << endl;
		cin >> userSelectedNumber;

		board.Getmove(userSelectedNumber, 'o');
		board.Board();

		if (board.Winner('o'))
		{
			cout << "Player1(o) has won the game!!" << endl;
			status = true;
			continue;
		}

		cout << "Player2(x): Enter a number between 1 and 9." << endl;
		cin >> userSelectedNumber;

		board.Getmove(userSelectedNumber, 'x');
		board.Board();

		if (board.Winner('x'))
		{
			cout << "Player2(x) has won the game!!" << endl;
			status = true;
			continue;
		}
	}

	system("pause");
	return 0;
}