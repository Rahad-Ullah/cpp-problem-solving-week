#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int oddSum = 0, evenSum = 0;

    for (int i = n.size() - 1; i >= 0; i--)
    {
        int num = n[i] - '0';
        if (i % 2 == 0)
        {
            evenSum += num;
        }
        else
        {
            oddSum += num;
        }
    }

    if (abs(evenSum - oddSum) % 11 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}