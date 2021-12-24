#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int random_word(int NUM_WORDS){

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);

	return choice;
}


string shuffling_words(string the_word){
	
	string jumble = the_word;
	int length = jumble.size();

	for (int index = 0; index < length; ++index){

		int index_1 = (rand() % length);
		int index_2 = (rand() % length);
		char temp = jumble[index];

		jumble[index_1] = jumble[index_2];
		jumble[index_2] = temp;
	}

	if (the_word == jumble)
		return shuffling_words(jumble);
	else
		return jumble;
}


void player_invitation(string jumble){
	
	cout << "Welcome the Word Jumble!\n" << endl;
	cout << "Unscramble the letters to male a word." << endl;
	cout << "Enter 'hint' for a hint." << endl;
	cout << "Enter 'quit' to quit the game.\n" << endl;
	cout << "The jumble is: " << jumble << endl;
}


void end_of_the_game(string guess, string the_word){

	if (guess == the_word){
		cout << "\nThat's it! You guessed it!" << endl;
		cout << "Thanks for playing!" << endl;
	}
}


int main(){

	enum fields {WORD, HINT, NUM_FIELDS};

	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."}, 
		{"device", "This part of computer refers to the devices used to store information."}, 
		{"workload", "The amount of work expected from a worker in a specified time period."},
		{"forecast", "Prediction."},
		{"delay", "A situation in which something happens later than it should."},
		{"plant", "A building or factory where something is made."}
	};

	int choice = random_word(NUM_WORDS);
	string the_word = WORDS[choice][WORD];
	string the_hint = WORDS[choice][HINT];

	string jumble = shuffling_words(the_word);
	player_invitation(jumble);

	string guess;
	cout << "\n" << "Your guess: ";
	cin >> guess;

	while ((guess != the_word) && (guess != "quit")){
		if (guess == "hint")
			cout << the_hint << endl;
		else
			cout << "Sorry, that's not it." << endl;
		cout << "\n" << "Your guess : ";
		cin >> guess;
	}
	
	end_of_the_game(guess, the_word);

	return 0;
}
