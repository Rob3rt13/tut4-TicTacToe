#include <iostream>
using namespace std;

class TicTacToe
{
public:

	TicTacToe(); //constructor
	~TicTacToe(); //destructor

	void Board();
	void Getmove(int num, char sym);
	bool Winner(char symbol);
	bool Draw();
	void Reset();
	bool ValidMove(int row, int column);

private:
	char blocknums[3][3];
};