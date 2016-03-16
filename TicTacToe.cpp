#include <iostream>
using namespace std;
#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
	Reset();
}



TicTacToe:: ~TicTacToe()
{
}



void TicTacToe::Board()
{
	cout << "   |   |   " << endl;
	cout << " " << blocknums[0][0] << " | " << blocknums[0][1] << " | " << blocknums[0][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << blocknums[1][0] << " | " << blocknums[1][1] << " | " << blocknums[1][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << blocknums[2][0] << " | " << blocknums[2][1] << " | " << blocknums[2][2] << endl;
	cout << "___|___|___" << endl << endl;
}



bool TicTacToe::ValidMove(int row, int column)
{
	if (blocknums[row][column] == ' ')
	{
		return true;
	}

	return true;
}


void TicTacToe::Getmove(int num, char sym)
{
	switch (num)
	{
	case 1:
	{
		if (ValidMove(0, 0))
		{
			blocknums[0][0] = sym;
		}
		break;
	}
	case 2:
	{
		if (ValidMove(0, 1))
		{
			blocknums[0][1] = sym;
		}
		break;
	}
	case 3:
	{
		if (ValidMove(0, 2))
		{
			blocknums[0][2] = sym;
		}
		break;
	}
	case 4:
	{
		if (ValidMove(1, 0))
		{
			blocknums[1][0] = sym;
		}
		break;
	}
	case 5:
	{
		if (ValidMove(1, 1))
		{
			blocknums[1][1] = sym;
		}
		break;
	}
	case 6:
	{
		if (ValidMove(1, 2))
		{
			blocknums[1][2] = sym;
		}
		break;
	}
	case 7:
	{
		if (ValidMove(2, 0))
		{
			blocknums[2][0] = sym;
		}
		break;
	}
	case 8:
	{
		if (ValidMove(2, 1))
		{
			blocknums[2][1] = sym;
		}
		break;
	}
	case 9:
	{
		if (ValidMove(2, 2))
		{
			blocknums[2][2] = sym;
		}
	}
	}
}



bool TicTacToe::Winner(char sym)
{
	int row;
	int column;
	int count = 0;

	for (row = 0; row <= 3; row++)
	{
		count = 0;

		for (column = 0; column <= 3; column++)
		{
			if (blocknums[row][column] == sym)
			{
				count++;
			}
			if (count >= 3)
			{
				return true;
			}
		}
	}

	for (column = 0; column <= 3; column++)
	{
		count = 0;
		for (row = 0; row <= 3; row++)
		{
			if (blocknums[row][column] == sym)
			{
				count++;
			}
			if (count >= 3)
			{
				return true;
			}
		}
	}

	if (blocknums[0][0] == sym &&
		blocknums[1][1] == sym &&
		blocknums[2][2] == sym)
	{
		return true;
	}

	return false;
}



void TicTacToe::Reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			blocknums[i][j] = ' ';
		}
	}
}
