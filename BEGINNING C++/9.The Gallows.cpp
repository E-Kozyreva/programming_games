#include <iostream>
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctime> 
#include <cctype> 
using namespace std;


int main(){

	const int MAX_WRONG = 8;
	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];

	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";
	cout << "Welcome to Hangman. Good luck!" << endl;

	while ((wrong < MAX_WRONG) && (soFar != THE_WORD)){
		cout << endl << endl;
		cout << "You have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left." << endl;
		cout << "You're used the following letters:";
		cout << endl << used << endl;
		cout << "So far, the word is: ";
		cout << endl << soFar << endl;

		char guess;
		cout << endl << "Enter your guess: ";
		cin >> guess;
		guess = toupper(guess);

		while (used.find(guess) != string::npos){
			cout << endl;
			cout << "You're already guessed " << guess;
			cout << endl << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}
		used += guess;
		if (THE_WORD.find(guess) != string::npos){
			cout << "That's rigt! " << guess;
			cout << " is in the word." << endl;
			for (int i = 0; i < THE_WORD.length(); ++i)
				if (THE_WORD[i] == guess)
					soFar[i] = guess;
		}
		else {
			cout << "Sorry, " << guess;
			cout << " isn't in the word" << endl;
			wrong++;
		}
	}
	if (wrong == MAX_WRONG)
		cout << endl << "You're been hanged!";
	else {
		cout << endl << "You're guessed it!";
		cout << "The word was: " << THE_WORD << endl;
	}


	return 0;
}
