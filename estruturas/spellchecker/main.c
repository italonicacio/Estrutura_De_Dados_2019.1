#include "spellchecker.h"


int main(void)
{
	struct SpellChecker spellChecker;
	char *fileName = "asciidict.txt";

	loadDictionary(&spellChecker, fileName);


	


	return 0;
}