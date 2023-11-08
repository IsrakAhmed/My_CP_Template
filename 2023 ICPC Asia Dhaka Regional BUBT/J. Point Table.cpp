#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())
#define dsort(v) sort((v).rbegin(),(v).rend())
#define pb push_back
#define gcd __gcd
#define sum(v) accumulate(v.begin(),v.end(),0)
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)
#define rmvChar(s,c) (s).erase(remove((s).begin(),(s).end(),c),(s).end())
#define rmvDuplicates(x) (x).erase(unique((x).begin(),(x).end()),(x).end())
#define all(x) (x).begin(),(x).end()

ll cnt(vector<ll> v,ll num)
{
    ll x = 0;
    for(ll i = 0; i < v.size(); i++){
        if(v[i] == num){
            x++;
        }
    }
    return x;
}

void solution()
{
    ll t;
    cin >> t;

    for(ll i = 1; i <=t; i++)
    {
        ll a,b,c;
        cin >> a >> b >> c;

        vector<ll> v;

        v.pb(a);
        v.pb(b);
        v.pb(c);

        printf("Case %lld: ",i);

        if(cnt(v,6) == 3 || cnt(v,6) == 2)
        {
            printf("invalidum\n");
        }
        else if(cnt(v,0) == 3 || cnt(v,0) == 2)
        {
            printf("invalidum\n");
        }
        else if(cnt(v,1) == 3)
        {
            printf("invalidum\n");
        }
        else if(cnt(v,6) == 1 && cnt(v,3) == 1 && cnt(v,0) == 1)
        {
            printf("perfectus\n");
        }
        else if(cnt(v,6) == 1 && cnt(v,1) == 2)
        {
            printf("perfectus\n");
        }
        else if(cnt(v,3) == 3 || cnt(v,2) == 3)
        {
            printf("perfectus\n");
        }
        else if(cnt(v,4) == 2 && cnt(v,0) == 1)
        {
            printf("perfectus\n");
        }
        else if(cnt(v,3) == 1 && cnt(v,4) == 1 && cnt(v,1) == 1)
        {
            printf("perfectus\n");
        }
        else if(cnt(v,2) == 1 && cnt(v,4) == 1 && cnt(v,1) == 1)
        {
            printf("perfectus\n");
        }

        else{
            printf("invalidum\n");
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}

