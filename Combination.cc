#include<bits/stdc++.h>
using namespace std;

void findCombinationsUtil(int arr[], int index, int num, int reducedNum, int numPeo)
{
	if (reducedNum < 0)
		return;

	if (reducedNum == 0 && index >= numPeo)
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

	int prev = (index == 0)? 1 : arr[index-1];

	for (int k = prev; k <= num ; k++)
	{
		arr[index] = k;
		
		findCombinationsUtil(arr, index + 1, num, reducedNum - k , numPeo);
	}
}

void findCombinations(int n , int numPeo)
{
	int arr[n];

	findCombinationsUtil(arr, 0, n, n, numPeo);
}


int main()
{
	int n, numPeo;
	cin >> n >> numPeo;
	findCombinations(n , numPeo );
	return 0;
}
