#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        string S;
        cin >> S;

        int balls = 0;
        int wickets = 0;
        int runs = 0;
        for(int j = 0; j < S.size(); j++)
        {
            if(S[j] == 'W')
            {
                wickets++;
                balls++;
            }
            else
            {
                int temp = (int) S[j];
                temp = temp - 48;

                runs += temp;
                balls++;
            }
        }

        int totalOvers = balls / 6;
        int fracBalls = balls % 6;

        if(totalOvers == 0 && fracBalls != 0)
        {
            printf("%d.%d Over ",totalOvers,fracBalls);
        }
        else if(totalOvers == 1 && fracBalls == 0)
        {
            printf("%d.%d Over ",totalOvers,fracBalls);
        }
        else
        {
            printf("%d.%d Overs ",totalOvers,fracBalls);
        }

        if(runs <= 1)
        {
            printf("%d Run ",runs);
        }
        else
        {
            printf("%d Runs ",runs);
        }

        if(wickets <= 1)
        {
            printf("%d Wicket.\n",wickets);
        }
        else
        {
            printf("%d Wickets.\n",wickets);
        }
    }

    return 0;
}
