// C++ implementation to find all pairs possible from the given Array

#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;

// Function to print all possible pairs from the array
void printPairs(int arr[], int n)
{

	// Nested loop for all possible pairs
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "(" << arr[i] << ", "
				<< arr[j] << ")"
				<< ", ";
		}
	}
}

// Driver code
int main()
{
	int arr[] = { 1, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printPairs(arr, n);

	return 0;
}
