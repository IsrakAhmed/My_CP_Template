
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

#define ll long long
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0
#define gcd __gcd

using namespace std;

int main(){

    ll t;
    cin >> t;

    for(ll i = 0; i < t; i++){
        double k;
        scanf("%lf",&k);

        double x = sqrt((k*k) - 1);
        double y = sqrt(4 - (k*k));

        printf("%.4lf\n",(x/y));

    }

    return 0;
}
