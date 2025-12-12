#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int biggestRun = 0;
        for (int i = 0; i < n; i++)
        {
            int run;
            cin >> run;

            if (run > biggestRun)
            {
                biggestRun = run;
            }
        }
        cout << biggestRun << endl;
    }

    return 0;
}