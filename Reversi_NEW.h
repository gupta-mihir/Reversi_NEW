#include <iostream>

using namespace std;

class Reversi {
	private:
		int rows;
		int cols;
		char board[8][8];
		

	public:
		// Constructor initializes the board to all blanks
		Reversi();
		//Returns the number of squares containing color
		int count(char color);
		//Sets the square at (row, col) to color 
		void setDisk(int r, int c, char color);
		void resetBoard();
		void printBoard();
		void printMenu();
		void menuSelect(int num);
		void gameWork();
		int numEmpty();
};
		

