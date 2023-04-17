#include<bits/stdc++.h>
using namespace std;

double circle_tire = 1.1;
double lap_tire = 1.2;

double sigma( int n , int lap )
{
	double total_time = 0;
	for( int i=1 ; i!=n+1 ; i++ )
		total_time += pow( circle_tire , i-1 )*pow(lap_tire , lap-1);
	return total_time;
}

int main()
{

	int n;
	int best_lap = 1;
	cin >> n;
	for( int lap = 1 ; lap <= n ; lap++ ) // if lap = 2, n = 1 1
	{
		double temp = sigma( n , lap );
		cout << temp << " ";
	}
}







//#include <iostream>
//#include <cmath>
//#include <climits>
//
//using namespace std;
//
//int main() {
//    int n;
//    double circle_tire_ratio, lap_tire_ratio, lap_time;
//    cin >> n >> circle_tire_ratio >> lap_tire_ratio >> lap_time;
//
//    double best_time = INT_MAX;
//    int best_m = 1;
//
//    for (int m = 1; m <= n; m++) {
//        double total_time = 0;
//        for (int i = 1; i <= m; i++) {
//            double time = lap_time * pow(circle_tire_ratio, i - 1);
//            total_time += time;
//        }
//        if (total_time < best_time) {
//            best_time = total_time;
//            best_m = m;
//        }
//    }
//
//    cout << "Best m: " << best_m << endl;
//    cout << "Best time: " << best_time << endl;
//    return 0;
//}
// n = 2
// best_m = 1
// 2 -> 
// 1 1
