// Aisha Qureshi

// CSCI2421 001

/* Homework 1: Design an ADT for a one-person
guessing game that chooses n random integers
in the range from 1 to m and asks the user to guess them.
The same integer might be chosen more than once.*/

// Program Compiles and works.


// 1/25/2017

#include <iostream>
#include <vector>
#include "guess.h"
#include <string>

using namespace std;

int main()
{
	// For if the user wants to play again
	string playAgain = "Yes";

	// Number of integers to generate
	int n;

	// Biggest random number that can be calculated in the range
	int m;

	// Temporary storage for each number being read in
	int num;

	// Vector of numbers guessed by the player
	vector<int> guessedNumbers;

	// While loop if the player wants to keep playing
	while (playAgain == "Yes" || playAgain == "yes" || playAgain == "y" || playAgain == "Y")
	{
		// Ask the player for the number of integers to generate
		cout << "Enter the number of random integers to generate:" << endl;
		cin >> n; // Player's input

		// Ask the player for the biggest random integer for the range
		cout << "Enter the maximum for the range of integers you would like to guess from:" << endl;
		cin >> m; // Player's input

		// Ask the player for their guess
		cout << "Enter your guesses for the " << n
			<< " integers in the range from 1 to " << m
			<< " that have been selected:" << endl;

		// Clear the vector of guessed numbers
		guessedNumbers.clear();

		// Iterate m times using for loop
		for (int i = 0; i < n; i++)
		{
			// Read in the next integer/guess entered by the user
			cin >> num;
			// Add this integer to the vector of guessed numbers
			guessedNumbers.push_back(num);
		}

		// Create the Guess object with the maximum number and the number of integers
		Guess g(m, n);

		// Read the number of correctly guessed numbers
		int numGuessedCorrectly = g.getNumGuessedCorrectly(guessedNumbers);

		// While loop that not all of the integers were guessed correctly
		while (numGuessedCorrectly < n)
		{
			// Tell the player how many numbers they guessed correctly
			cout << numGuessedCorrectly << " of your guesses are correct. Guess again." << endl;

			// Ask the player for the numbers
			cout << "Enter your guesses for the " << n
				<< " integers in the range from 1 to " << m
				<< " that have been selected:" << endl;

			// Clear the vector of guessed numbers
			guessedNumbers.clear();

			// Iterate m times
			for (int i = 0; i < n; i++)
			{
				// Read in the next integer entered by the player
				cin >> num;
				// Add this integer to the vector of guessed integers
				guessedNumbers.push_back(num);
			}

			// Get the number of correctly guessed numbers
			numGuessedCorrectly = g.getNumGuessedCorrectly(guessedNumbers);
		}

		// The player has guessed all of the numbers correctly; ask if they want to play again
		cout << "You are correct! Play again? Yes/No" << endl;
		cin >> playAgain; // Player's input of "yes or no"
	}

	// Exit the program
	cout << "Good-bye!" << endl;

	return 0;
}
