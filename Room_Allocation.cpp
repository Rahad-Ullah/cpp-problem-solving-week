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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int totalRooms = 0;

        for (int i = 0; i < n; i++)
        {
            int rooms = ceil(arr[i] / 2.0);
            totalRooms += rooms;
        }

        cout << totalRooms << endl;
    }

    return 0;
}