#include <iostream>
#include "Reversi_NEW.h"

using namespace std;

	 
int main(int argc, char** argv) {
	
	cout << "1 2 3 4 5 6 7 8 " << endl;

	Reversi play;
/*	play.resetBoard();
	play.printBoard();
	play.printMenu();	
*/
play.gameWork();	
	return 0;
}
