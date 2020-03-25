#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, len;
    cin >> N;
    string s;
    while (N--) {
        cin >> s;
        len = s.length();
        if (len > 10) {
            cout << s[0] << len - 2 << s[len - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}