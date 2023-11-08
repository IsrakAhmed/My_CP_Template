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

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {
        char a,b;
        cin >> a >> b;

        ll ax = (ll) a;
        ll bx = (ll) b;
        ll diff = abs(bx - ax);

        for(ll i = 1; i <= diff; i++)
        {
            if(diff % i == 0)
            {
                printf("%lld ",i);

                if(94 % i == 0)
                {
                    printf("%lld\n",94/i);
                }
                else
                {
                    printf("%lld\n",(94/i) + 1);
                }
            }
        }
        printf("\n");

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


