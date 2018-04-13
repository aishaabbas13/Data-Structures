/*
Aisha Qureshi
04/19/17

Simple spelling checker
Works and compiles
*/
#include <iostream>
#include <list>
#include <string>
#include <fstream>


using namespace std;

//use an iterator to search through list of words
bool compareWords(list<string> &dictionary, string &words)
{
	list<string>:: iterator it; 
	for ( it = dictionary.begin(); it != dictionary.end(); it++)
	{
		if (*it == words)
		{
			return 1;
		}
	}
	return 0;
}

//********************************************************************************************************************
int main()
{

	const int bucketSize = 1373;
	//variables to create and fill hash table
	string string1;		//needed to hash a string => hashStr(string1);
	hash<string> hashStr;		//hash string
	list<string> hashtable[bucketSize];
	
	//count misspelled words, dictionary words, and words in file
	int dictCounter = 0;
	int fileCounter = 0;
	int spellingCounter = 0;
	
	//for user input
	int choice;	
	


	//To read in files for the 3 text files dict, check, potter
	ifstream infile;
	string file = "dict.dat";
	ifstream infile2;
	string file2 = "check.txt";
	ifstream infile3;
	string file3 = "Potter.txt";
	
	//opens dict.txt
	infile.open(file);

	if (infile.is_open())
	{
		while (infile >> string1)
		{	//insert words to hash table with 1373 buckets
			hashtable[hashStr(string1) % bucketSize].push_back(string1);		
			dictCounter++;
		}
	}
	else
	{
		cout << "ERROR! FILE CANNOT OPEN!";	//read out this statement if file cannot be open
	}
	infile.close();
	cout << "File has finished reading in." << endl;

	// User can compare the potter AND check file to the dict.txt
	do
	{	//menu options
		cout << "What File would you like to compare to dict.txt?" << endl;
		cout << "1. check.txt" << endl;
		cout << "2. Potter.txt (BEWARE: will take a while to read through)" << endl;
		cout << "3. Exit" << endl;
		cin >> choice;
		
		switch (choice)
		{
		case 1:					//compare to check.txt
			infile2.open(file2);
			if (infile2.is_open())		
			{
				while (infile2 >> string1)
				{
					for (int i = 0; i < string1.size(); i++)
					{
						string1[i] = tolower(string1[i]);		//turn capital letters lower case
					}
					fileCounter++;
					
					if (compareWords(hashtable[hashStr(string1) % bucketSize], string1))
					{
						//checks if words are spelt correctly
					}
					else
					{	//lists misspelled words
						cout << "Misspelled: " << string1;
						cout << endl;
						spellingCounter++;
					}
				}
			}
			else
			{
				cout << "ERROR! FILE CANNOT OPEN!";	//read out this statement if file cannot be open
			}
			infile2.close();

			cout << "Dictionary words: " << dictCounter;
			cout << endl;
			cout << "File words: " << fileCounter;
			cout << endl;
			cout << "Misspelled words: " << spellingCounter;
			cout << endl;
			break;

		case 2:			//compare to Potter.txt
			infile3.open(file3);
			if (infile3.is_open())
			{
				while (infile3 >> string1)
				{
					for (int i = 0; i < string1.size(); i++)
					{
						string1[i] = tolower(string1[i]);		//capital letters to lowercase
					}
					fileCounter++;
					
					if (compareWords(hashtable[hashStr(string1) % bucketSize], string1))
					{
						//checks if words are spelt correctly
					}
					else
					{	//lists misspelled words
						cout << "Misspelled: " << string1;
						cout << endl;
						spellingCounter++;
					}
				}
			}
			else
			{
				cout << "ERROR! FILE CANNOT OPEN!";	//read out this statement if file cannot be open
			}
			infile3.close();

			cout << "Dictionary words: " << dictCounter;
			cout << endl;
			cout << "File words: " << fileCounter;
			cout << endl;
			cout << "Misspelled words: " << spellingCounter;
			cout << endl;
			break;

		case 3:
			exit(0);
			break;
		default:
			cout << "ERROR! INVALID OPTION" << endl;
		}
	} 
	while (choice != 3);

	//system("PAUSE");
	return 0;

}


