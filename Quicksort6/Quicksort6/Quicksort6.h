#include <iostream>    // For NULL
#include <time.h>
#include <string>
using namespace std;

int pickPivot = 1; //Picks which pivot you want to use
int comparisons = 100;
const int MAX_LENGTH = 10000000;

template< class ItemType >
class SList
{
 public:
	 SList();
	 // Action Resposibilities
	 void quickSort1( ItemType list[] , int left, int right);
     void insertionSort( ItemType list[], int length);
	 void insertionSort(ItemType list[], int start, int finish);
	 void _swap(ItemType list[], int left, int right);
	 void _swap(ItemType left, ItemType right);

     void quickSort2( ItemType list[], int left, int right);
 private:
	 int random(ItemType list[], int left, int right);
	 int centerElm( ItemType list[], int left, int right );
	 int rightElm( ItemType list[], int left, int right );
	 int leftElm( ItemType list[], int left, int right );
	 int medianOfnine(ItemType list[], int left, int right);
	 int partition( ItemType list[], int left, int right );
	 ItemType& medianOf3(ItemType list[], int left, int right);

	 void insertItem(ItemType list[], int startIndex, int endIndex);
	// ItemType string[MAX_LENGTH];
	 int length;
 }; 


 template< class ItemType >
 SList< ItemType>::SList()
 {
	int length = 0;
 }

template< class ItemType >
void SList< ItemType >::quickSort1( ItemType list[], int left, int right)
{
	if (left + 10 <= right)
	{
		ItemType pivot = medianOf3(list,left,right);

		// partition 
		int i=left, j=right-1;
		for(;;)
		{
			while (list[++i] < pivot){}
			while (list[--j] > pivot)
				if (i <= j) 
				  _swap(list[i], list[j]);
			else
				break;
		}

		_swap(list[i], list[right - 1]); // restore piviot

        
  	  // recursion 
//	  if (left < j)
			quickSort1(list, left, i-1);
//	  if (i < right)
			quickSort1(list, i+1, right);
	}
	else
		insertionSort(list,left,right);

}

//This is an overloaded version of the function to allow sorting of
//a partial array from "start" to "finish"
template< class ItemType >
void  SList< ItemType >::insertionSort(ItemType list[], int start, int finish)
// Post: The elements in the array values are sorted by key.
{
	for (int count = start; count <= finish; count++)
		insertItem(list, start, count);
}
			
//Insertion sort, for use if listay contains less than 10 items
template< class ItemType >
void SList< ItemType >::insertionSort(ItemType list[], int length)
// Post: The elements in the array values are sorted by key.
{
	for (int count = 0; count < numValues; count++)
	insertItem(list, 0, count);
}
template< class ItemType >
void SList< ItemType >::insertItem(ItemType list[], int startIndex, int endIndex)
// Post: values[startIndex]..values[endIndex] are now sorted.
{
	bool finished = false;
	int current = endIndex;
	bool moreToSearch = (current != startIndex);

	while (moreToSearch && !finished)
	{
		if (list[current] < list[current-1])
		{	
			_swap(list[current], list[current-1]);
			current--;
			moreToSearch = (current != startIndex);
		}
		else
			finished = true;
	}
}

//Medain as pivot
template< class ItemType >
ItemType& SList< ItemType >::medianOf3( ItemType list[], int left, int right )
{
	int center = (left + right ) / 2;

	if (list[ center ] < list[ left])
	   _swap(list[ left ], list[ center ]);
	if (list[ right ] < list[ left])
	   _swap(list[ left ], list[ right ]);
	if (list[ right ] < list[ center])
	   _swap(list[ center ], list[ right ]);

   //place pivot at position right-1
	_swap( list[center], list[right-1]);
	return list[right-1];
}

//Medain as pivot
template< class ItemType >
int SList< ItemType >::centerElm( ItemType list[], int left, int right )
{
	int center = (left + right ) / 2;

	if (list[ center ] < list[ left])
	   _swap(list[ left ], list[ center ]);

 //Place piviot at position right - 1
	_swap( list[ center ], list[right - 1]);		
	return partition(list[right - 1], left, right);
}

//Right as pivot
template< class ItemType >
int SList< ItemType >::rightElm(ItemType list[], int left, int right)
{
    int center = (left + right ) / 2;
 	if (list[ right ] < list[ left])
	   _swap(list[ left ], list[ right ]);

//Place piviot at position right - 1
	_swap( list[ center ], list[right - 1]);		
	return partition(list[right - 1], left, right);
}

//Left as pivot
template< class ItemType >
int SList< ItemType >::leftElm(ItemType list[], int left, int right)
{
    int center = (left + right ) / 2;
 	if (list[ right ] < list[ center ])
	   _swap(list[ center ], list[ right ]);

//Place piviot at position right - 1
	_swap( list[ center ], list[right - 1]);		
	return partition(list[right - 1], left, right);
}

template<class ItemType>
void SList< ItemType >::_swap(ItemType list[], int left, int right)
{
	ItemType temp;

	temp = list[left];
	list[left] = list [right];
	list[right] = temp;
}

template<class ItemType>
void SList< ItemType >::_swap(ItemType left, ItemType right)
{
	ItemType temp;
	temp = left;
	left = right;
	right = temp;
}

//Random  as pivot
template< class ItemType >
int SList< ItemType >::random(ItemType list[], int left, int right)
{
	list[left] = left+(rand()%(right-left));
	return partition(list, left, right);
}


//Median of nine
template< class ItemType >
int SList< ItemType >::medianOfnine(ItemType list[], int left, int right)
{
	insertionSort(list, 9); //Does an insertion sort on the first nine elements
	right = left + 9;	//Changes right to left+9
	int middle = (left+right)/2; //Find the middle between left(1) and right(9)

	return middle;	//Returns middle

}



template< class ItemType >
int SList< ItemType >::partition( ItemType list[], int left, int right )
{
	int index, smallIndex;
	ItemType pivot;

	//_swap(listay, left, (left+right)/2);

	pivot = list[left];
	smallIndex = left;

	for(index = left + 1; index <= right; index++)
		if (list[index]<pivot)
		{
			smallIndex++;
			_swap(list, smallIndex, index);
		}

	_swap(list, left, smallIndex);

	return smallIndex;

}


//Quicksort version 2
template< class ItemType >
void SList< ItemType >::quickSort2(ItemType list[], int left, int right)
{
	int pivotPosition = 2;
	int length = right;

	if (length < 11)	//If the listay is less than return, insertion done after
		return;

	else
	{
		if (left < right)
		{
			switch (pickPivot)	//Switch used to determine which type of pivot you wan to use
			{
			case 1:
				pivotPosition = median(list, left, right);
				break;
			case 2:
				pivotPosition = random(list, left, right);
				break;
			case 3:
				pivotPosition =partition(list, left, right);
				break;
			case 4:
				pivotPosition = medianOfnine(list, left, right);
				break;
			default:
				break;
			}
			quickSort1(list, left, pivotPosition-1);
			quickSort1(list, pivotPosition+1, right);
		}
	}
}
