
#include "guess.h"

// Constructor
Guess::Guess(int max, int num)
{
	// Initialize member variables
	m = max;
	n = num;

	// Generate the n random numbers between 1 and m

	// Seed the random number generator with the current time in seconds
	srand(time(NULL));

	// Iterate n times with for loop
	for (int i = 0; i < n; i++)
		// Add the new random number between 1 and m to the vector of random numbers
		randomNumbers.push_back(rand() % m + 1);

}

// Returns how many numbers were guessed correctly
int Guess::getNumGuessedCorrectly(vector<int> guessedNumbers)
{
	// Make a copy of the vector of random numbers
	vector<int> copy = randomNumbers;

	// Initialize the number of correctly guessed numbers
	int numCorrect = 0;

	// Iterate through the guessed numbers
	for (int i = 0; i < n; i++)
	{
		// Loop through the random numbers
		for (unsigned int j = 0; j < copy.size(); j++)
		{
			// If the current guessed number matches the current random number
			if (guessedNumbers[i] == copy[j])
			{
				// Increment the number of correct numbers
				numCorrect++;
				// Remove this number from the copy
				copy.erase(copy.begin() + j);
				// Leave the loop, since the number was found
				break;
			}
		}
	}

	// Return the number of numbers guessed correctly
	return numCorrect;
}
