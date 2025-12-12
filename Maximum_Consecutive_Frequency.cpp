#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int freq[10001] = {0};

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 0 && arr[i] != arr[i - 1])
        {
            freq[arr[i]] = 0;
        }

        freq[arr[i]]++;
    }

    int maxNum = 0;
    int maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq[i] > maxNum)
        {
            maxNum = freq[i];
            maxIdx = i;
        }
    }

    cout << maxIdx << " " << maxNum;

    return 0;
}