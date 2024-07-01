#include <bits/stdc++.h>

using namespace std;

int main()
{

    string n, m;
    cin >> n >> m;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
        {
            n[i] = n[i] - 'A' + 97;
        }

        if (m[i] >= 'A' && m[i] <= 'Z')
        {
            m[i] = m[i] - 'A' + 97;
        }

        if (n[i] > m[i])
        {
            cout << "1\n";
            return 0;
        }
        if (n[i] < m[i])
        {
            cout << "-1\n";
            return 0;
        }
    }
    cout << "0\n";

    return 0;
}
