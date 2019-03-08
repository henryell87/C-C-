


#include <iostream>


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
	}
}