#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;


int random_number(){

	srand(static_cast<unsigned int>(time(0)));

	int random_number;
	random_number = rand() % 100 + 1;

	return random_number;
}



int main(){

	int secret_number, guess, tries = 0;

	cout << "Welcome to Guess My Number\n" << endl;

	secret_number = random_number();

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secret_number)
			cout << "To hight!\n" << endl;
		else if (guess < secret_number)
			cout << "Too low!\n" << endl;
		else {
			cout << endl << "That's it! ";
			cout << "You got it in " << tries << " guesses!" << endl;
		}
	} while (guess != secret_number);

	return 0;
}
