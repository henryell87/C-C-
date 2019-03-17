//FILE: MyParser.cpp
//@author Henry Ell
//This version of the parser uses a c-string to store each word
//The word is returned to caller of nextToken()
//Parser should handle the following types of words:
//	possessive words (e.g."table's" --> "table")
//	hyphenated words ("two-way")
//	words ending in multiple hyphens ("blah, blah,---that is,")
//  words followed by more than one occurrence of a delimiter ("the end.?")
//	one or more words enclosed in single or double quotes (e.g. 'faithful servant')
//  Delimiters are defined in header file as 
//		SEMICOLON 
//		COMMA     
//		EXCLAIM   
//		QUESTION  
//		NEWLINE   
//		PERIOD    
//		SPACE		
//		DOUBLEQUOTE 
//		APOSTROPHE
//		HYPHEN

#include "MyParser.h"

Parser :: Parser()
{}

Parser :: Parser(char* filename)
{
	infile.open(filename);
	if(!infile)
	{
		cout << "test file not found" << endl;
		exit(1);
	}
	outfile.open("words-out.txt");
}

string Parser :: nextToken()
{
	int i=0; 
	char ch;
	int wordcount=0;
	char* theWord;
	theWord = new char[132];

	while ( (ch = infile.get()) != EOF)
	{
		ch = tolower(ch);
		if ( isValidWordChar(ch) )
		{
			theWord[i++] =ch;	//ch is part of a word
		}
		else
		{
			if( ch == HYPHEN )	//can be hyphenated word ("ill-fated") but 
			{					//two or more hyphens in a row should be ignored

				//ADD CODE HERE
			}
			else 
			{
				if( isDelimiter(ch,infile) ) 
				{
					theWord[i] = '\0';	//terminate the string with null 
					cout << theWord << endl;
					outfile << theWord << endl;
					wordcount++;

					i=0;			//reset index variable for next word

					//if delimiter is followed by another delimiter (e.g. "hello!"), consume it
	
					//WRITE THIS CODE

					return theWord;
 
				}
				else
				{
					if( ch == APOSTROPHE)	//could be string like "dog's" or " 'fair' "
					{				
	
						//WRITE THIS CODE

					}							
				}
				
			}
		}
	}
	return "";
	cout << "\n number of words in the file is " << wordcount;

}//end Parse


/*
 * Private Functions
 */


//This function determines if a character is a lowercase alphabetic character 
bool Parser :: isValidWordChar(char ch)
{
	if( (ch <= 122 && ch >= 97))	//is between 'a' and 'z' 
	{
		return true;
	}
	else
		return false;

}

bool Parser :: isDelimiter(char ch, ifstream& infile)
{
	//other delimiters are handled as special cases in nextToken()
	if (ch == SEMICOLON || 
		ch == COMMA     || 
		ch == EXCLAIM   ||
		ch == QUESTION  ||
		ch == NEWLINE   ||
		ch == PERIOD    ||
		ch == SPACE		||
		ch == DOUBLEQUOTE     
		)
		return true;

	else return false;
}

bool Parser :: isHyphenatedWordChar(char ch, ifstream& infile)
{
		if( isValidWordChar(infile.peek()) )
				return true;    //must be a hyphenated word
		else
				return false;	
}
					 
bool Parser :: isPossessiveWord(char ch,ifstream& infile)
{
	//if character is apostrophe indicating possession, 
	//then consume the 's' and all characters
	//up to the next valid word character

	if(infile.peek() == 's')
	{
		while (ch != SPACE)
			ch = infile.get();

		//the space needs to be read again to delimit the word
		//that follows, so put it back into the stream
		infile.putback(ch);	
		return true;
	}
	else //could be contraction
		return false;				
}

bool Parser :: hasTokens()
{
	if (!infile.eof())
		return true;
	else
		return false;
}