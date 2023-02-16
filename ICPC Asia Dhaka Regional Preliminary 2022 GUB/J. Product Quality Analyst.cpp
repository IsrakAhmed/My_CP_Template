#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll t;
    cin >> t;

    for(ll i = 1; i <= t; i++){
        ll n,k;
        cin >> n >> k;

        vector <ll> time;
        ll sum = 0;
        for(ll x = 0; x < n; x++){
            ll temp;
            cin >> temp;
            time.push_back(temp);
            sum += temp;
        }

        ll diff = 0;
        ll maxx = time[0];
        for(ll x = 1; x < n; x++){
            ll temp = time[x];
            if(maxx < temp){
                diff += temp - maxx;
                maxx = temp;
            }
        }

        sum += diff * (k - 1);
        sum += (k - 1) * time[0];

        cout << "Case " << i << ": " << sum << endl;

    }

    return 0;
}



