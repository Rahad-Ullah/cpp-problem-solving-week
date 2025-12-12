#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int counter = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > d)
            {
                counter++;
            }
        }
    }

    return 0;
}