#include<bits/stdc++.h>
#include<string>
using namespace std;

int rou=1.2, per=1.1; // 趟 / 圈

int best( int need )
{
	for(int i = need ; i != 0 ; i--)
	{ 
	} 
}

struct count{
	int time;
	int man;
};
// n,man -> cin each man time -> n -> ? for n -> 1
// time/(5,3,2)

string round( int n , int man )
{
	
	vector<int> man_time(n);
	vector<struct count> v;
	for( int i=0 ; i<man ; i++)
		cin >> man_time[i];
		
	// 5 3 -> 2
	// 3 1 1
	// 2 2 1
	
	// 8 4 -> 3
	// 4 1 1 1
	// 3 2 1 1
	// 2 2 2 1
	
	// 7 2 -> 3
	// 6 1
	// 5 2
	// 4 3
	
	

	
	stringstream ss;
	ss << time << "(" << man << ")";
	string s = ss.str();
	return s;
}


int main()
{
	int n=1; // 圈數 
	int man=1; // 人數 
	
	cout << "請輸入 圈數、人數" << endl;
	cin >> n >> man;
	
	// cout << n << " " << man << " " << max  << " " << min << " " << rou << " " << per;
		
	cout << round( n , man);	
	
	
}
