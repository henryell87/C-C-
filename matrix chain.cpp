// See the Cormen book for details of the following algorithm
#include<stdio.h>
#include<limits.h>

//#include "stdafx.h"
#include <string>
#include <iostream>

#include <tchar.h>
#include <ios>
#include "vector"
#define L 300  // big enough for most examples

int r(int i, int j, int s[L][L]);  // print =s
void putpre(int x);                // used by r
void putdig(int x);                // used by r
int newtemp(void);                 // used by r
void r2(int i, int j, int s[L][L]);// print par
void r3(int i, int j, int s[L][L]);// expression

using namespace std;
void printOptimalParens(int** kArray, int i, int j);

// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
//int MatrixChainOrder(int p[], int n)

void main(void) 
{

	int p[L];     // input array of dimensions
	int m[L][L];  // array of numbers of mults
	int s[L][L];  // array giving index opt sol
	int n = 0, i, ll, j, k, q;
	int res; // final result from seq of assigns
	for (i = 0; i < L; i++) {
		scanf_s("%i", &p[i]); // read up to a zero
		if (p[i] <= 0) break;
	}
	n = i - 1;

	/* For simplicity of the program, one extra row and one extra column are
	allocated in m[][].  0th row and 0th column of m[][] are not used */
	int m[350][350];

	int  LL;
	int arr[] = { 11, 48, 54, 42, 56, 13, 35, 57, 58, 26, 14, 38, 36, 32, 45, 47, 48, 48, 15, 27, 28, 49, 12, 35, 42, 36, 50, 48, 56, 27, 27, 37, 35, 39, 33, 41, 23, 55, 33, 49, 48, 45, 42, 59, 41, 11, 23, 33, 39, 46, 54, 29, 30, 21, 52, 48, 48, 44, 42, 59, 11, 45, 59, 36, 46, 42, 29, 42, 18, 49, 22, 18, 58, 12, 42, 52, 50, 52, 58, 24, 14, 55, 11, 33, 56, 12, 48, 53, 29, 26, 17, 37, 21, 20, 37, 19, 43, 41, 48, 36, 12, 16, 41, 26, 50, 24, 43, 29, 23, 17, 59, 26, 24, 16, 39, 19, 33, 22, 13, 22, 47, 46, 21, 42, 45, 45, 35, 42, 33, 33, 45, 43, 53, 53, 26, 21, 36, 29, 34, 51, 30, 20, 57, 55, 44, 13, 57, 19, 42, 56, 50, 32, 23, 22, 57, 52, 56, 49, 15, 24, 41, 28, 54, 17, 41, 46, 27, 39, 22, 57, 32, 13, 13, 37, 21, 45, 34, 20, 33, 34, 15, 31, 17, 18, 37, 53, 21, 22, 49, 45, 17, 33, 59, 58, 39, 44, 30, 37, 30, 34, 19, 18, 17, 39, 37, 19, 25, 43, 53, 28, 56, 46, 57, 37, 43, 19, 58, 26, 58, 33, 41, 31, 58, 28, 23, 34, 55, 26, 28, 51, 19, 26, 15, 47, 23, 42, 42, 15, 30, 32, 59, 48, 56, 13, 53, 16, 53, 11, 31, 12, 44, 59, 36, 11, 25, 25, 11, 25, 37, 49, 19, 44, 35, 48, 53, 27, 52, 23, 31, 20, 35, 51, 49, 13, 46, 52, 58, 46, 18, 18, 50, 14, 59, 38, 50, 18, 17, 51, 48, 28, 58, 57, 36, 27, 31, 43, 56, 20, 38, 26
	};

	/* m[i,j] = Minimum number of scalar multiplications needed to compute
	the matrix A[i]A[i+1]...A[j] = A[i..j] where dimention of A[i] is
	p[i-1] x p[i] */
	int size = sizeof(arr) / sizeof(arr[0]);

	//an array which holds the splits
	//int ** kArray;
	//kArray = new int*[size];

	//for (int i = 0; i < (size); i++)
	//{
		//kArray[i] = new int[size];
	//}
	// cost is zero when multiplying one matrix.
	for (i = 1; i < n; i++)
		m[i][i] = 0;

	// L is chain length.  
	for (LL = 2; L<n; LL++)
	{
		for (i = 1; i <= n - L + 1; i++)
		{
			j = i + L - 1;
			int k = i;
			m[i][j] = INT_MAX;
			//int k = i;
			for (k = i; k <= j - 1; k++)
			{
				// q = cost/scalar multiplications
				q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				//kArray[i][j] = k;
				
				if (q < m[i][j])
				{
					m[i][j] = q;
					s[i][j] = k;
					//kay = k;
				}
				//kArray[i][j] = kay;

			}
			
		}

	}
	// print p
	printf("The array p:\n\n");
	for (i = 0; i <= n; i++)
		printf("p[%i] =%3i, ", i, p[i]);
	// print m
	printf("\n\nThe array m:\n\n       ");
	for (i = 1; i <= n; i++)
		printf(" i=%2i  ", i);
	printf("\n");
	for (j = n; j >= 1; j--) {
		printf("j=%2i:", j);
		for (i = 1; i <= j; i++)
			printf("%7i", m[i][j]);
		printf("\n");
	}
	// print s
	printf("\nThe array s:\n\n       ");
	for (i = 1; i < n; i++)
		printf(" i=%2i  ", i);
	printf("\n");
	for (j = n; j >= 2; j--) {
		printf("j=%2i:", j);
		for (i = 1; i < j; i++)
			printf("%7i", s[i][j]);
		printf("\n");
	}
	printf("\n");
	res = r(1, n, s);
	printf("Final result is in T");
	putdig(res); printf("\n\n");
	r2(1, n, s); printf("\n\n");
	r3(1, n, s); printf("\n");
}
// r: function that calcs series of assigns
int r(int i, int j, int s[L][L]) {
	int k, arg1, arg2, res;
	if (i == j) return i;
	k = s[i][j];         // top-level split
	arg1 = r(i, k, s);   // temp left half
	arg2 = r(k + 1, j, s); // temp right half
	res = -newtemp();    // next temp
	// a negative number indicates a temp
	// next three lines output one equation
	putpre(res); putdig(res); putchar('=');
	putpre(arg1); putdig(arg1); putchar('*');
	putpre(arg2); putdig(arg2); putchar('\n');
	return res;
}
	//return m[1][n - 1];
//}


// putpre: neg is a temp; pos if an arg
void putpre(int x) {
	if (x < 0) putchar('T');
	else putchar('A');
}

// putdigit: spit one digit, without sign
void putdig(int x) {
	if (x < 0) x = -x;
	printf("%i", x);
}

 //newtemp: return next integer in order
int newtemp(void) {
static int i = 1;
return i++;
}

// r2: output paren form with extra parens
void r2(int i, int j, int s[L][L]) {
	int k;
	if (i == j) {
		printf("A%i", i);
		return;
	}
	k = s[i][j];
	printf("(");
	r2(i, k, s);
	printf(")*(");
	r2(k + 1, j, s);
	printf(")");
}

// r3: output paren form with fewer parens
void r3(int i, int j, int s[L][L]) {
	int k;
	if (i == j) {
		printf("A%i", i);
		return;
	}
	printf("(");
	k = s[i][j];
	r3(i, k, s);
	printf("*");
	r3(k + 1, j, s);
	printf(")");
}