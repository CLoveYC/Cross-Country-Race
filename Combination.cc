// C++ program to find out all combinations of
// positive numbers that add upto given number
#include<bits/stdc++.h>
using namespace std;

/* arr - array to store the combination
	index - next location in array
	num - given number
	reducedNum - reduced number */
void findCombinationsUtil(int arr[], int index, int num, int reducedNum, int numPeo)
{
	// Base condition
	if (reducedNum < 0)
		return;

	// If combination is found, print it
	if (reducedNum == 0 && index >= numPeo && numPeo+2 >= index )
	{
		vector<int> temp;
		for( int i = 0; i < index; i++)
			temp.push_back(arr[i]);
		reverse( temp.begin() , temp.end() );
		for( int i = 0 ; i < index ; i++ )
			cout << temp[i] << " ";
		cout << endl;
		return;
	}

	// Find the previous number stored in arr[]
	// It helps in maintaining increasing order
	int prev = (index == 0)? 1 : arr[index-1];

	// note loop starts from previous number
	// i.e. at array location index - 1
	for (int k = prev; k <= num ; k++)
	{
		// next element of array is k
		arr[index] = k;
		
		// call recursively with reduced number
		findCombinationsUtil(arr, index + 1, num, reducedNum - k , numPeo);
	}
}

/* Function to find out all combinations of
positive numbers that add upto given number.
It uses findCombinationsUtil() */
void findCombinations(int n , int numPeo)
{
	// array to store the combinations
	// It can contain max n elements
	int arr[n];

	//find all combinations
	findCombinationsUtil(arr, 0, n, n, numPeo);
}

// Driver code
int main()
{
	int n, numPeo;
	cin >> n >> numPeo;
	findCombinations(n , numPeo );
	return 0;
}
