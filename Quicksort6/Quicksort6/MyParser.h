//Author: Henry Ell
//Spring 2010
//File: parser.h

#ifndef parser_h
#define parser_h

#include <iostream>
#include <fstream>
#include <ctype.h>
#include <string>
#include <stdlib.h>
using namespace std;

const char SPACE = ' ';
const char COMMA = ',';
const char SEMICOLON = ';';
const char QUESTION = '?';
const char EXCLAIM = '!';
const char PERIOD = '.';
const char NEWLINE = '\n';
const char APOSTROPHE = '\'';
const char DOUBLEQUOTE = '"';
const char HYPHEN = '-';

class Parser {
public:
	Parser();
	Parser(char* filename);
	string nextToken();	//returns a word
	bool hasTokens();	//determines when end of file reached

private:
	ofstream outfile;
	ifstream infile;
	
	//determines if a character is a lowercase alphabetic character
	bool isValidWordChar(char ch);
	
	//determines if a character is one of the defined delimiter characters
	bool isDelimiter(char ch, ifstream& infile);
	
	//determines if a character is a hyphen
	bool isHyphenatedWordChar(char ch, ifstream& infile);
	
	//pre:  character is apostrophe indicating possession
	//post: the 's' and all characters up to the next valid word character are consumed
	bool isPossessiveWord(char ch,ifstream& infile);
};

#endif