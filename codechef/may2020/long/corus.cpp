#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int N, Q, temp;
    string str;

    cin >> N >> Q >> str;

    unordered_map<int, int> mp;

    for (char ch:str) {
        mp[ch - 'a']++;
    }

    int res;

    for (int i = 0; i < Q; i++) {
        res = 0;
        cin >> temp;
        for (auto p:mp) {
            if (p.second > temp) res += p.second - temp;
        }
        cout << res << '\n';
    }
}

int main()
{
    int T;

    cin >> T;

    while (T--) solve();

    return 0;
}