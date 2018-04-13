/*
Aisha Qureshi
03/08/2017
Content: dictionary doubly linked list
Compiles and works
*/

#ifndef DICTENTRY_
#define DICTENTRY_
#include <string>

typedef std::string wordType;
class DictEntry
{
private:
	wordType word;
	wordType definition;

public:
	wordType getWord() { return word; }
	void setWord(wordType _word) { word = _word; }	//get and set word from list
	wordType getDef() { return definition; }
	void setDef(wordType _def) { definition = _def; }	//just telling me that i can add def file as well and implement if i wanted
	bool operator < (const DictEntry &entry) const {
		return (word < entry.word);
	}

};

#endif
