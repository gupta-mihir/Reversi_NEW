#include <iostream>
#include "Reversi_NEW.h"

using namespace std;

		

int Reversi::numEmpty()  {
	return 3;	//return number of available spaces left
}
// Constructor initializes the board to all blanks
Reversi::Reversi() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++){
			board[i][j] = ' ';
		}
	}
}

//Priints the board and presents the menu of options, 1-4
void Reversi::printBoard() {
	for (int i = 0; i < 8; i++) {
		cout << "-----------------" << endl;
		for (int j = 0; j < 8; j++) {
			cout << board[i][j] << "|";
		}
		cout << endl;
	}
	cout << "-----------------" << endl;

} 

void Reversi::printMenu() {
		cout << "Menu: 1) Place a disk" << endl;
	cout << "      2) See movement rules" << endl;
	cout << "      3) Display possible moves" << endl;
	cout << "      4) Display best move" << endl;
	cout << endl << "Selection: ";
//	int x;
//	cin >> x;
//	menuSelect(x); 
}
//Returns the number of squares containing color
int Reversi::count(char color) {
	int counter = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == color) {
				counter++;
			}
		}
	}
	return counter;
}
//Sets the square at (row, col) to color 
void Reversi:: setDisk(int r, int c, char color) {
	board[r-1][c-1] = color;
	//count(color)
}
void Reversi::resetBoard() {
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++){
			board[i][j] = ' ';
		}
	}
	setDisk(4, 4, 'w');
	setDisk(4, 5, 'b');
	setDisk(5, 5, 'w');
	setDisk(5, 4, 'b');
}

void Reversi::menuSelect(int num) {
	if (num == 1) {

	int i, j;
	char color;
	cout << "State the row (0-7) and the col (0-7) of the square where you want to place a disk: ";
	cin >> i;
	cin >> j;
	cout << "Please specify your color (b or w): ";
	cin >> color;
	//To verify if the move is correct
	setDisk(i, j, color);
	if (board[i][j] == board[i-1][j]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
} 
else if (board[i][j] == board[i][j-1]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
} 
else if (board[i][j] == board[i-1][j-1]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else if (board[i][j] == board[i+1][j+1]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else if (board[i][j] == board[i+1][j]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else if (board[i][j] == board[i][j+1]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else if (board[i][j] == board[i+1][j-1]) {
	cout << "INVALID MOVE"<< endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else if (board[i][j] == board[i-1][j+1]) {
	cout << "INVALID MOVE" << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}
else{
	cout << "Good move!" << endl;
	printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
}


	
		

	}
	else if (num == 2) {
		cout << "Movement Rules for Reversi Othello: " << endl;
		cout << "A player must place their disk such that:" << endl;
		cout << "   1) It creates a straight line (horizontally, vertically or diagonally)" << endl;
		cout << "      between the newly placed disk and another of the player's disks." << endl;
		cout << "   2) There must be one or more of the opponent's disks between the" << endl;
		cout << "      current player's disks. [A disk must get flipped.] " << endl;	
	//	printBoard();	
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
	}
	else if (num == 3) {
	cout << "Not yet coded. " << endl ;
		
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
	}
	else if (num == 4) {
		cout << "Not yet coded. " << endl;
		printBoard();
		printMenu();
		int x;
		cin >> x;
		menuSelect(x);
		
		
	}
	else {
		cout << "ERROR: Please enter a number 1 - 4. ";
		cin >> num;
		menuSelect(num);
	}
}
void Reversi::gameWork() {
		resetBoard();
		printBoard();
		printMenu();
	
		int x;
		cin >> x;
		menuSelect(x);
}


