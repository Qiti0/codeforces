#include <bits/stdc++.h>
using namespace std;
vector<int> ve;
string op = "01";
void slove()
{
    ve.clear();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    if (n & 1)
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        int n1 = 0, n0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                n0++;
            else
                n1++;
        }
        if (n1 != n0)
        {
            cout << -1 << "\n";
            return;
        }
        for (int i = 0, j = (int)s.size() - 1; i <= j; i++, j--)
        {
            if (cnt > 300)
            {
                cout << -1 << "\n";
                return;
            }
            if (s[i] == s[j] && s[i] == '0')
            {
                s.insert(j + 1, op);
                ve.push_back(j + 1);
                j = (int)s.size() - 1;
                i = 0;
                cnt++;
            }
            else if (s[i] == s[j] && s[i] == '1')
            {
                s.insert(i, op);
                ve.push_back(i);
                i = 0;
                j = (int)s.size() - 1;
                cnt++;
            }
        }
    }
    cout << ve.size() << "\n";
    for (auto it : ve)
        cout << it << " ";
    cout << "\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}