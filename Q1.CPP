// C++ Program to replace every element with the greatest element on right side
#include<iostream.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

/* Function to replace every element with the
next greatest element */
void nextGreatest(int arr[], int size)
{
	//Initialise maxFromRight with -1
	int maxFromRight = -1;
	int n = size;
	// run loop from last and replace maxFromRight with the element in the array
	for(int i= n-1; i>=0;i--) {
	int temp = maxFromRight;
	if(arr[i]> maxFromRight){
		//replacing only array element with maxFromRight in case element is bigger
		maxFromRight = arr[i];
	}
	arr[i] = temp;
	}
	return;
}

/* A utility Function that prints an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {16, 17, 4, 3, 5, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	nextGreatest (arr, size);
	cout << "The modified array is: \n";
	printArray (arr, size);
	return (0);
}
