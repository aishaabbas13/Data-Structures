/*
Aisha Qureshi
03/08/2017
Content: dictionary doubly linked list
Compiles and works
*/

#include "dictionary.h"
#include "DictEntry.h"
#include <fstream>
using namespace std;

dictionary::dictionary ()	//done
{			//default constructor
}

int dictionary::searchForward(list<DictEntry> &wordList, wordType &findString)		//done
{	
	list<DictEntry>:: iterator it;
	bool found = false;
	
	int count = 0;
	for (it = wordList.begin(); it != wordList.end(); it++)	//iterator to do linear search in list of words beginning to end
	{
		count++;
		if (it->getWord() == findString)		
		{
			found = true;	//break loop if word found
			break;
		}

	}
	if (found)
		return count;	//return the number of iterations of loop required to find word
	else
		return false;	//word not found
}

int dictionary::searchBackward(list<DictEntry> &wordList, wordType &findString)	//done
{
	list<DictEntry>::reverse_iterator it;	//reversed iterator
	bool found = false;

	int count = 0;
	for (it = wordList.rbegin(); it != wordList.rend(); it++)	//iterator to do linear search in list of words bottom to top of list
	{	
		count++;
		if (it->getWord() == findString)		
		{
			found = true;	//break loop if word found
			break;
		}
	}
	if (found)
		return count;	//return the number of iterations of loop required to find word
	else
		return false;	//word not found
}


void dictionary:: revPrintList(ostream& output, list<DictEntry> &wordList)	//done
{
	list<DictEntry>::reverse_iterator it;

	cout << "Printing reverse alphabetic list to file... " << endl;

	for (it = wordList.rbegin(); it != wordList.rend(); it++)
	{
		output << it-> getWord() << " " << endl;;		//print to revsorted file
		
		//cout << it->getWord() << " " << endl;	//print reverse to screen
	}
	
}
