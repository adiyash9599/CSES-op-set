#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    int m = 0;
    int missing = 0;
    while (n-- > 1)
    {
        int x;
        cin >> x;

        m += x;
    }
    if (m < sum)
    {
        missing = sum - m;
    }
    cout << missing << "\n";

    return 0;
}
