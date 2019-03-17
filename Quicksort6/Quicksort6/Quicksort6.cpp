
// : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <fstream>
#include "Quicksort6.h"
#include "MyParser.h"
#include <string>
#include <iostream>
#include <istream>
#include <cstdlib>
#include <ostream>

using namespace std;

int main()
{
	int count=0;
	int rows=0;
	string myList[10000];
    char filename[30];
	ifstream fin;
	const char TEXT_FILENAME[] = " words-out.txt";
    SList<string> list;
	
 

	cout << "Enter a filename: ";
	cin >> filename;
    
	Parser MyParser(filename);

	int i = 0;
	while ( MyParser.hasTokens())
	{
		myList[i++] = MyParser.nextToken();
        count++;
	}

	  		
         
		 
	//fin.open(filename);
 
	//if (!fin) {
	//	cout << "Error opening file.";
	//	return 0;
	//}
 
	//while (getline(fin,array[rows]) && rows <10000) {
	//	cout << array[rows];
    //	rows++;
	//}

	//while (getline(fin,names[rows])) {
	//	rows++;
	//}

	//for (int i = 0; !fin.eof(); i++)
	//{
	//	fin>>array[i];
	//}

	//cout<<"Unsorted:"<<endl;
	//for(int i=0; i<100; i++)
	//{
	//	cout <<array[i] <<endl;
	//}
	




   //int i = left + 1, j + right - 2;
  // for(fin.eof)
  // {
	//    while( a[i] < pickPivot) i++;
	//	while( pickPivot < a[j] ) j--;
	//	if( i < J)
	//		swap( a[i], a[j] );
	//	else 
	//		break;
  // }
	//if ( fin.eof() ) {
    // return false;
	//list.quickSort1(myList, 1, 100);
   //}//endif
   //return true;
      
	list.quickSort1(myList, MAX_LENGTH, sizeof(string));
	cout<<"couunt:"<< count<<endl;
	cout<<"Variation 1	Median"<<endl;
	cout<<"======================"<<endl;
	cout<<"Total # of comparison : "<< comparisons <<"     Average # of comparisons : "<<comparisons<<endl;

	for (int i =1; i<11; i++)
	{
		if (myList[i] != myList[i+1])
		{
			cout<<myList[i]<<endl;
		}
	}
	char te;
	cin >> te;

	fin.close();
	return 0;

}//end main
