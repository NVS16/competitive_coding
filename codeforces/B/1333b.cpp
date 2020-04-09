#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    bool one = false, mone = false, zero = false;
    cin >> n;

    // cout << n;

    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++) 
        cin >> A[i];
    for (int i = 0; i < n; i++) 
        cin >> B[i];

    // cout << A[0] << " " << B[0];

    if (A[0] != B[0]) {
        cout << "NO\n";
        return;
    }

    if (A[0] == 0) zero = true;
    else if (A[0] == 1) one = true;
    else mone = true;

    for (int i = 1; i < n; i++) {
        if (B[i] > A[i]) {
            if (!one) {
                cout << "NO\n";
                return;
            }
        } else if (B[i] < A[i]) {
            if (!mone) {
                cout << "NO\n";
                return;
            }
        }
        if (A[i] == 0) zero = true;
        else if (A[i] == 1) one = true;
        else mone = true;
    }

    cout << "YES\n";
}

int main()
{
    int T;

    cin >> T;

    while (T--) solve();

    return 0;
}