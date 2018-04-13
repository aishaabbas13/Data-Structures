// Aisha Qureshi

#ifndef GUESS_H
#define GUESS_H

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

// Guess class definition
class Guess
{

public:

	// Constructor
	Guess(int max, int num);

	// Returns how many numbers were guessed correctly
	int getNumGuessedCorrectly(vector<int> guessedNumbers);

private:

	int m; // Biggest random number that can be generated
	int n; // Number of random integers to generate
	vector<int> randomNumbers; // Random numbers generated

};

#endif
