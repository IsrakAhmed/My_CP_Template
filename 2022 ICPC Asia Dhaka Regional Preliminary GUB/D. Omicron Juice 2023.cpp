#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    ll t;
    cin >> t;

    for(ll i = 1; i <= t; i++)
    {

        vector <ll> glass;
        ll k;

        for(ll j = 0; j < 3; j++)
        {
            ll temp;
            cin >> temp;
            glass.push_back(temp);
        }
        cin >> k;

        if(glass[0] == glass[1] && glass[1] == glass[2])
        {
            cout << "Case " << i << ": Peaceful" << endl;
        }
        else
        {
            if((glass[0] < k && glass[1] < k && glass[2] < k) || ((glass[0] < k && glass[1] < k) || (glass[0] < k && glass[2] < k) || (glass[1] < k && glass[2] < k)))
            {
                cout << "Case " << i << ": Fight" << endl;
            }
            else
            {
                ll sum = accumulate(glass.begin(),glass.end(),0);

                if(sum % 3 != 0)
                {
                    cout << "Case " << i << ": Fight" << endl;
                }

                else if(sum % 3 == 0)
                {
                    ll z = 0;
                    for(ll j = 0; j < 3; j++)
                    {
                        if(((sum / 3) - glass[j]) % k == 0)
                        {
                            z++;
                        }
                    }
                    if(z == 3)
                    {
                        cout << "Case " << i << ": Peaceful" << endl;
                    }
                    else
                    {
                        cout << "Case " << i << ": Fight" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
