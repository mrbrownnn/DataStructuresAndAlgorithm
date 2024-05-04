#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string st, ed, k;
        cin >> n >> st >> ed;
        set<string> s;
        pair<string, int> u, v;
        queue<pair<string, int>> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            s.insert(k);
        }
        s.erase(st);
        u.first = st;
        u.second = 1;
        q.push(u);
        while (q.size())
        {
            u = q.front();
            q.pop();
            if (u.first == ed)
            {
                cout << u.second << endl;
                break;
            }
            v.second = u.second + 1;
            for (int i = 0; i < u.first.size(); i++)
            {
                k = u.first;
                for (char j = 'A'; j <= 'Z'; j++)
                {
                    k[i] = j;
                    if (s.find(k) != s.end())
                    {
                        s.erase(k);
                        v.first = k;
                        q.push(v);
                    }
                }
            }
        }
    }
}