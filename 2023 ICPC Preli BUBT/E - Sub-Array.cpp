#include <iostream>
#include <vector>

using namespace std;

long long count(const vector<long long> &arr)
{
    long long n = arr.size();
    long long count = 0;

    for (long long i = 0; i < n; i++)
    {
        long long current = arr[i];
        long long j = i;

        while (j < n && arr[j] == current)
        {
            j++;
        }

        long long subarrayCount = (j - i) * (j - i + 1) / 2;

        count += subarrayCount;
        i = j - 1;
    }

    return n * (n + 1) / 2 - count;
}

int main()
{
    long long T;
    cin >> T;

    for (long long caseT = 1; caseT <= T; caseT++)
    {
        long long N;
        cin >> N;

        vector<long long> A(N);
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long result = count(A);
        cout << "Case " << caseT << ": " << result << "\n";
    }

    return 0;
}

