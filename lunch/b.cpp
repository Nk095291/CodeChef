#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];


        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == -1)
            {
                bool flag2 = false;
                for (int j = 1; j <= k; j++)
                {
                    if (i == 0)
                    {
                        if (ar[i + 1] != j)
                        {
                            ar[i] = j;
                            flag2 = true;
                        }
                    }
                    else if (i == n - 1)
                    {
                        if (ar[i - 1] != j)
                        {
                            ar[i] = j;
                            flag2 = true;
                        }
                    }
                    else
                    {
                        if (ar[i - 1] != j && ar[i + 1] != j)
                        {
                            ar[i] = j;
                            flag2 = true;
                        }
                    }
                    if (flag2)
                        break;
                }
                if (!flag2)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << ar[i] << " \n"[i == n - 1];
        }
        else
            cout << "NO\n";
    }
}
