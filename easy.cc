#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n;
    while(cin >> n)
    {
        int s[100] = {0};
        for(int i = 0; i < n; i++) cin >> s[i];
 		
        double ans = 0;
 
        for(int j = 0; j < n; j+=3 )
        {
            for(int i = 0 ; i < s[j] ; i++ )
                ans = ans + 40 * pow(1.1, i) * pow(1.2, j/3);
            for(int i = 0 ; i < s[j+1] ; i++ )
                ans = ans + 44 * pow(1.1, i) * pow(1.2, j/3);
            for(int i = 0 ; i < s[j+2] ; i++ )
                ans = ans + 48 * pow(1.1, i) * pow(1.2, j/3);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
 
