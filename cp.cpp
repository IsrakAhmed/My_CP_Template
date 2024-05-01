
/*

    Name        :   Israk Ahmed
    E-Mail      :   israkahmed7@gmail.com
    Github      :   github.com/IsrakAhmed
    LinkedIn    :   linkedin.com/in/israkahmed
    Institution :   University of Rajshahi

*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define asort(v) sort((v).begin(),(v).end())        //  Ascending Order Sort
#define dsort(v) sort((v).rbegin(),(v).rend())     //   Descending Order Sort
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define gcd __gcd
#define toLower(s) transform((s).begin(),(s).end(),(s).begin(),::tolower)       //  toLower(s);
#define toUpper(s) transform((s).begin(),(s).end(),(s).begin(),::toupper)       //  toUpper(s);
#define rmvChar(s,c) (s).erase(remove((s).begin(), (s).end(), c), (s).end())    //  remove specific character from string
#define rmvDuplicates(x) (x).erase(unique((x).begin(), (x).end()), (x).end());  //  works only for sorted string or vector
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define merge(v1,v2,m) merge(v1.begin(), v1.end(), v2.begin(), v2.end(),m.begin());     //  merge two vectors
#define reverseS(s) reverse(s.begin(), s.end())     //  reverse the string
#define nSum(n) (n * (n + 1)) / 2                   //  sum of first N positive integers
#define nmSum(n,m) ((n + m) * (m - n + 1)) / 2      //  sum of positive integers from N to M (N <= M)

ll random(ll low, ll high)
{
    // Generate random number
    return rand() % (high - low + 1) + low;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

vector<int> allPrimes(int n) {

    // find all prime numbers (max limit n)

    // sieve_of_eratosthenes

    vector<bool> sieve(n+1, true); // Initialize all numbers as potential primes
    vector<int> primes;

    for (int p = 2; p * p <= n; ++p) {
        if (sieve[p]) {
            // p is prime, mark its multiples as composite
            for (int i = p * p; i <= n; i += p) {
                sieve[i] = false;
            }
        }
    }

    // Collect primes
    for (int p = 2; p <= n; ++p) {
        if (sieve[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

void solution()
{
    ll t;
    cin >> t;

    while(t--)
    {

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
