#include <iostream>

using namespace std;

bool solve()
{
    int n;
    bool flag = true;
    pair<int, int> curr, prev;

    cin >> n;

    prev.first = prev.second = 0;

    while (n--) {
        cin >> curr.first >> curr.second;

        if (curr.first < prev.first || curr.second < prev.second || curr.second > curr.first || (curr.first - prev.first < curr.second - prev.second))
            flag = false;
        
        prev = curr;
    }

    return flag;
}

int main()
{
    int T;

    cin >> T;

    while(T--) {
        solve() ? cout << "YES\n" : cout << "NO\n";
    };

    return 0;
}