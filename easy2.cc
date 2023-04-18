#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n, numPeo;
    while(cin >> n >> numPeo)
    {
        int s[100] = {0};
        vector<int> t;
        for(int i = 0; i < n; i++) cin >> s[i];
 		for(int i = 0; i < numPeo ; i++ ) cin >> t[i];
        double ans = 0;
 
 		for( int k = 0 ; k < numPeo ; k++)
 			for( int j=0 ; j<n ; j+=3 )
 				for(int i=0 ; i<s[j+k] ; i++ )
 					ans += t[k] * pow(1.1, i) *pow(1.2, j/3);
 		
        cout << ans << endl;
    }
 
    return 0;
}
 
