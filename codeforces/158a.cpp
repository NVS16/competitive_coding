#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i;
    cin >> n >> k;
    vector<int> v(n);
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ctr = 0, kval = v[k - 1];
    if (kval > 0) {
        for (int i = k; i < n; i++) {
            if (v[i] == kval)
                ctr++;
            else break;
        }
    } else {
        ctr = -1;
        for (int i = k - 2; i >= 0; i--) {
            if (v[i] <= 0) {
                ctr -= 1;
            } else break;
        }
    }
    cout << ctr + k << endl;
    return 0;
}