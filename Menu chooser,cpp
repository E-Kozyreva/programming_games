#include <iostream>
using namespace std;


int levels()
{
	int user_choice;
  
	cout << "Difficilty levels: " << endl;
	cout << "1. Easy." << endl;
	cout << "2. Normal." << endl;
	cout << "3. Hard." << endl;
	cout << "Your answer: ";
	cin >> user_choice;

	return user_choice;
}


int main()
{
	int choice;
	choice = levels();

	switch (choice)
	{
	case 1:
		cout << endl << "You picked Easy." << endl;
		break;
	case 2:
		cout << endl << "You picked Normal." << endl;
		break;
	case 3:
		cout << endl << "You picked Hard." << endl;
		break;
	default:
		cout << endl << "You made an illegal choice.\n" << endl;
		return main();
	}

	return 0;
}
