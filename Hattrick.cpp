#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[7];
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }

        int flag = 0;
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] == 'W' && arr[i + 1] == 'W' && arr[i + 2] == 'W')
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}