// Name: Maxwell Brohm
// Program Name: Random Number Guesser
// Date: 9/24/2024

#include <iostream>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	string name;
	int num;
	int random;
	random = 1 + (rand() % 10);
	cout << "Pick a number between 1 and 10!" << endl;
	cin >> num;
	if (random == num) {
		cout << "You picked the right number!" << endl;
	}
	else if (num == random + 1 || num == random - 1) {
		cout << "Sorry, you picked the wrong number, but you were close!" << endl;
		cout << "The number was: " << random << endl;
		cout << "Your number was: " << num << endl;
		cout << "Better luck next time!" << endl;
	}
	else {
		cout << "Sorry, you picked the wrong number!" << endl;
		cout << "The number was: " << random << endl;
		cout << "Your number was: " << num << endl;
		cout << "Better luck next time!" << endl;
	}

	return 0;
}
