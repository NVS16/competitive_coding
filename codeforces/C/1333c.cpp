#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, sum, ctr = 0;
    
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        for (int l = 1; l <= n; l++) {
            sum = 0;
            for (int k = i; k < l; k++) {
                sum += nums[k];
            }
            if (sum) ctr++;
        }
    }

    cout << ctr << endl;
}

int main()
{
    solve();
    return 0;
}