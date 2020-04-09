#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string printOne(int m, bool flag) {
    string res("");

    while (m--) {
        flag ? res.append("B") : res.append("W");
        flag = !flag;
    }

    return res;
}

void printRes(vector<string> &res) {
    for (string s:res) cout << s << '\n';
}

void solve() 
{
    vector<string> res;
    string s;
    int n, m;

    bool flag = true;

    cin >> n >> m;

    res.push_back(printOne(m, true));
    res.push_back(printOne(m, false));

    for (int i = 2; i < n; i++) {
        flag ? s = printOne(m, true) : s = printOne(m, false);
        flag = !flag;
        res.push_back(s);
    }

    if (n % 2 == 0) {
        if (m % 2 == 0) {
            s = printOne(m, false);
            s[m - 2] = 'B';
            res[n - 1] = s;
        } else {
            res[n - 1][m - 1] = 'B';
        }
    } else {
        if (m % 2 == 0) {
            res[n - 1][m - 1] = 'B';
        }
    }

    printRes(res);


}

int main()
{
    int T;

    cin >> T;

    while (T--) solve();
}