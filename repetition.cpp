#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    getline(cin, str);

    int current_streak = 1, max_streak = 1;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            current_streak++;
        }
        else
        {
            if (current_streak > max_streak)
            {
                max_streak = current_streak;
            }
            current_streak = 1;
        }
    }

    if (current_streak > max_streak)
    {
        max_streak = current_streak;
    }

    cout << max_streak << "\n";

    return 0;
}