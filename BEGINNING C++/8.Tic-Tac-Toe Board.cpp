#include <iostream> 
using namespace std;


int main(){
	
	const int ROWS = 3;
	const int COLUMS = 3;
	char board[ROWS][COLUMS] = {
				                     {'O', 'X', 'O'},
				                     {' ', 'X', 'X'},
				                     {'X', 'O', 'O'},
	                           }; 
  
	cout << "Here's the tic-tac-toe board:" << endl;
	for (int i = 0; i < ROWS; ++i){
		for (int j = 0; j < COLUMS; ++j){
			cout << board[i][j];
		}
		cout << endl;
	}
  
	cout << endl << "'X' moves to the empty location.";
	cout << endl << endl;
	board[1][0] = 'X';
  
	cout << "Now the tic-tac-toe board is:" << endl;
	for (int i = 0; i < ROWS; ++i){
		for (int j = 0; j < COLUMS; ++j){
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << endl << "'X' wins!";

	return 0;
}
