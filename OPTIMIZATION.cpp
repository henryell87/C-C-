// Optimization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iostream>
#include <istream>
#include <cstdlib>
#include <ostream>
#include <fstream>
using namespace std;

void printintArray(int** array, int row, int col);
void printOptimalParens(int** kArray, int i, int j);


int _tmain(int argc, _TCHAR* argv[])
{
	int numbMat;
	int count = 0;
	int rows = 0;





	string myList[10000];
	char filename[30];
	fstream fin;
	const char TEXT_FILENAME[] = " optimization-out.txt";
	cout << "Enter a filename: ";
	cin >> filename;
	fin.open(filename);


	//if (!fin) {
	//	cout << "Error opening file.";
	//	return 0;
	//}

	//while (getline(fin,array[rows]) && rows <10000) {
	//	cout << array[rows];
	//	rows++;
	//}

	//while (getline(fin,int[rows])) {
	//	rows++;
	//}

	//for (int i = 0; !fin.eof(); i++)
	//{
	//	fin>>array[i];
	//}

	for (int i = 0; i<100; i++)
		//{
		//	cout <<array[i] <<endl;
		//}

	cout << "**********************************************************************" << endl
		<< "This is a matrix optimization program.  This program calculates" << endl
		<< "the optimal way to multiply a series of matrices together" << endl
		<< "*********************************************************************" << endl;
	cout << "Please enter the Number of Matricies: ";
	cin >> numbMat;

	int *p;
	int psize = numbMat + 1;
	p = new int[psize];

	cout << "------------------------------------------------------------------------" << endl
		<< "Now please enter dimensions.  \nFor example, if you were multiplying three matricies " << endl
		<< "with the dimensions 3x1  1x1000 and 1000x13, you would enter '3', '1', '1000', '13'." << endl
		<< "------------------------------------------------------------------------" << endl << endl;
	for (int i = 0; i < psize; i++)
	{
		cout << "dimension " << i << " : ";
		cin >> p[i];
	}

	//an array which holds the cost table
	int **cost;
	cost = new int*[psize];  // sets up an array of row pointers
	for (int i = 0; i < psize; i++)
	{
		cost[i] = new int[psize]; // allocates each row of the grades array
	}

	//an array which holds the splits
	int ** kArray;
	kArray = new int*[psize];
	for (int i = 0; i<(psize); i++)
	{
		kArray[i] = new int[psize];
	}

	for (int length = 1; length < numbMat; length++)
	{
		for (int i = 1; i<numbMat - length + 1; i++)
		{

			int j = i + length;
			int tempCost;
			int k = i;
			int minCost = cost[i][k] + cost[k + 1][j] + p[i - 1] * p[k] * p[j];
			int kay = i;
			for (; k<j; k++)
			{
				tempCost = cost[i][k] + cost[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (tempCost<minCost)
				{
					minCost = tempCost;
					kay = k;
				}
			}

			cost[i][j] = minCost;
			kArray[i][j] = kay;
		}
	}

	cout << "\nTotal Cost Table\n************************************" << endl;
	printintArray(cost, psize, psize);

	cout << "Corresponding K-Table\n***********************************" << endl;
	printintArray(kArray, psize, psize);

	cout << endl << endl;
	cout << "This parenthesis arrangement corresponds to the following multiplication chain" << endl;
	printOptimalParens(kArray, 1, numbMat);
	cout << endl;
	return 0;
}

void printintArray(int** array, int row, int col)
{
	for (int i = 1; i<row; i++)
	{

		for (int j = 1; j<col; j++)
			cout << array[i][j] << "\t|\t";
		cout << endl;
	}
}

void printOptimalParens(int** kArray, int i, int j)
{
	if (i == j)
	{
		cout << "A" << i << " ";
	}
	else
	{
		cout << "(";
		printOptimalParens(kArray, i, kArray[i][j]);
		printOptimalParens(kArray, kArray[i][j] + 1, j);
		cout << ")";
		getchar();
	}



}

	
