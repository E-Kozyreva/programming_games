#include <iostream>
using namespace std;

int main();

char restart_game(){

	int user_answer;

	cout << "Do you want to play again?" << endl;
	cout << "1.Yes\n2.No." << endl;
	cout << "Your answer: ";
	cin >> user_answer;

	switch (user_answer){
	case 1:
		cout << endl;
		return main();
		break;
	case 2:
		cout << "Okay, bye!" << endl;
		break;
	default:
		cout << endl;
		cout << "This answer is wrong. " << endl;
		cout << "Please, print 1 or 2.\n" << endl;
		return restart_game();
		break;
	}

	return 0;
}


int main(){

	cout << "**Played an exciting game**" << endl;
	restart_game();

	return 0;
}
