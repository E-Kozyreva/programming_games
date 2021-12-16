#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int game(int GOLD_PIECES, int adventurers, int killed, int survivors, string leader)
{
	cout << "A brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue - " << leader << ".\n" << endl;
	cout << "Along the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << " and the ogres were defeated, but at a cost ";
	cout << "of the adventurers " << killed << " were vanqushed, ";
	cout << "leaving just " << survivors << " in the group.\n" << endl;
	cout << "The party was about to give up all hope, ";
	cout << "but while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So...the adventurers split " << GOLD_PIECES << " gold pieces. ";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course." << endl;

	return 0;
}


int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;

	string leader;

	// Get information
	cout << "Welcome to Lost Fortune.";
	cout << "Please, enter the following for you personalized adventure." << endl;
	cout << "Enter a number : ";
	cin >> adventurers;
  
	cout << "Enter a number, smaller than the first: ";
	cin >> killed;
	survivors = adventurers - killed;
  
	cout << "Enter your last name: ";
	cin >> leader;
	cout << endl;

	game(GOLD_PIECES, adventurers, killed, survivors, leader);

	return 0;
}
