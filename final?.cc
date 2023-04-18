#include<bits/stdc++.h>
using namespace std;

double best_time = INT_MAX;
vector<int> ans;
void findCombinationsUtil(int arr[], int index, int num, int reducedNum, int numPeo, vector<int>& t)
{

	if (reducedNum < 0)
		return;

	if (reducedNum == 0 && index >= numPeo)
	{
		double time = 0;
		vector<int> temp;
		
		for( int i = 0; i < index; i++)
			temp.push_back(arr[i]); 
		reverse( temp.begin() , temp.end() );
//		for( int i=0 ; i<index ; i++ ) cout << temp[i] << " ";
//		cout << endl;
//		cout << index << endl;
		for( int cir = 0 ; cir < index ; cir++ )
			for(int i=0 ; i<temp[cir] ; i++)
			{
				time += t[cir%numPeo] * pow(1.1 , i) * pow(1.2, cir/numPeo);
//				cout << time << " " << t[cir%3] << " " << pow(1.1 , i) << " " << pow(1.2, cir/numPeo) << endl;
			}
//		cout << time << endl;
		if( time < best_time )
		{
			best_time = time;
			ans.clear();
			for(int i=0 ; i<index ; i++)
				ans.push_back(temp[i]);
		}
		return;
	}

	int prev = (index == 0)? 1 : arr[index-1];

	for (int k = prev; k <= num ; k++)
	{
		arr[index] = k;
		
		findCombinationsUtil(arr, index + 1, num, reducedNum - k , numPeo, t);
	}
}

void findCombinations(int n , int numPeo, vector<int>& t)
{
	int arr[n];

	findCombinationsUtil(arr, 0, n, n, numPeo, t);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n, numPeo = 0;
    cin >> n >> numPeo;
    vector<int> t;
    t.resize(numPeo,0);
    for(int i = 0 ; i < numPeo ; i++ )	cin >> t[i];
    
	findCombinations(n, numPeo, t );
	
	cout << best_time << endl;
	for( vector<int>::iterator i = ans.begin() ; i != ans.end() ; i++ ) cout << *i << " ";
 
    return 0;
}
 
