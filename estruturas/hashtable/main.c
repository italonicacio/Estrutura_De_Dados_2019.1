#include "spellchecker.h"


int main(void)
{
	struct SpellChecker spellChecker;
	char fileName[20] = "asciidict.txt";
	InitSpellChecker(&spellChecker, fileName);
	


	return 0;
}