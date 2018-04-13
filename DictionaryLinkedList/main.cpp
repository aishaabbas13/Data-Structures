/*
Aisha Qureshi
03/08/2017
Content: dictionary doubly linked list
Compiles and works
*/


#include <iostream>
#include <fstream>
//#include "DictEntry.h"
#include "dictionary.h"

using namespace std;

int main()
{
	//variables
	list<DictEntry> dictList, findList;
	dictionary diction;
	wordType word, fword;

	//open files
	ifstream infile, infile2;		
	infile.open("dictionary.txt");
	infile2.open("findwords.txt");
	ofstream outfile("revsorted.txt");

	//if file does not open
	if (!infile.is_open() || !infile2.is_open())
	{
		cout << "ERROR! FILE CANNOT OPEN!";
	}

	//sort dictionary.txt
	while(infile >> word)
	{ 
		DictEntry* insert = new DictEntry();
		insert -> setWord(word);
		dictList.push_back(*insert);
	}	
	
	infile.close();
	dictList.sort();
	
	cout << "Reading in dictionary file..." << endl;
	cout << "Sorting list of entries..." << endl;
	cout << "Reading in comparison list..." << endl;

	while (infile2 >> fword)
	{ 
		int countFor = diction. searchForward(dictList, fword),		// call function to count AMOUNT OF SEARCHES TO FIND WORD
			countBack = diction.searchBackward(dictList, fword);
		
		if (countFor == false || countBack == false)
		{
			cout << fword << " :Not found in forward search "  << endl;		//if search of word is not found in the dictionary.txt file
			cout << fword << " :Not found in backward search " << endl;
		}
		
		else
		{	//output amount of forward and backward searches
			cout << fword <<": " << "Forward search found in: " << countFor << " searches." << endl;
			cout << fword << ": " << "Backward search found in: " << countBack << " searches." << endl;
		}
	}
	infile2.close();
	
	diction.revPrintList(outfile, dictList);	//prints reverse of list to revsorted.txt
	outfile.close();

	system("PAUSE");
	return 0;
}
