#include <iostream>
#include <string> 
using namespace std;

int main();

int user_verification(string username, string password){
	
	bool success;

	do {
		if (username == "S.Meier" && password == "civilization"){
			cout << "Hey, Sid." << endl;
		  success = true;
		}
		else if (username == "S.Miyamoto" && password == "mariobros"){
			cout << "What's up, Shigeru?" << endl;
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims"){
			cout << "How goes it, Will?" << endl;
			success = true;
		}
		else if (username == "guest" || password == "guest"){
			cout << "Welcome, guest." << endl;
			success = true;
		}
		else {
			cout << "Your login failed. Please, try again.\n" << endl;
			success = false;
			return main();
		}
	} while (!success);

	return 0;
}


int main(){

	string username;
	string password;

	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	cout << endl;

	user_verification(username, password);

	return 0;
}
