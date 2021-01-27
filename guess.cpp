#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int secretNum = 7;
	int guess = 0;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = false;
	while (secretNum != guess && guessCount < guessLimit)
	{
		cout << "Enter guess: ";
		cin >> guess;
		guessCount++;
	}

	cout << "You win!" << endl;
	return 0;
}
