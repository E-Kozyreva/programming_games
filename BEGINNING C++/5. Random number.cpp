#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main();
int random_number_with_range(int min, int max);
int random_number();
int restart_program();

int select_function(){

	int answer, min, max;

	cout << endl << "Select a function:" << endl;
	cout << "1.A number in a certain range." << endl;
	cout << "2.A number without a range." << endl;
	cout << "Your answer: ";
	cin >> answer;

	if (answer == 1){

		cout << endl << "Enter the min number: ";
		cin >> min;
		cout << "Enter the max number: ";
		cin >> max;

		random_number_with_range(min, max);
	}
	else if (answer == 2)
		random_number();
	else
		return select_function();

	return 0;
}


int random_number_with_range(int min, int max){

	srand(static_cast<unsigned int>(time(0)));

	int random_number;

	random_number = min + rand() % (max - min);
	cout << "Your number: " << random_number << endl;

	restart_program();

	return 0;
}


int random_number(){

	srand(static_cast<unsigned int>(time(0)));
	
	int random_number;

	random_number = rand();
	cout << "Your number: " << random_number << endl;

	restart_program();

	return 0;
}


int restart_program(){

	int answer;

	cout << endl <<  "Do you want to generate a random number again?" << endl;
	cout << "1.Yes.\n2.No.\nYour answer: ";
	cin >> answer;

	if (answer == 1)
		return select_function();
	else
		cout << "Okay, bye!" << endl;;

	return 0;
}


int main(){

	int answer;

	cout << "Do you want to generate a random number?" << endl;
	cout << "1.Yes.\n2.No.\nYour answer: ";
	cin >> answer;

	switch (answer){
	case 1:
		select_function();
		break;
	case 2:
		cout << "Okay, bye!" << endl;
		break;
	default:
		return main();
		break;
	}

	return 0;
}
