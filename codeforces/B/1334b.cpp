#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n, p, q, ctr = 0;
    double num, x;

    vector<double> nums;

    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    p = n;

    while (p > 0) {
        num = accumulate(nums.begin() + (n - p), nums.end(), 0) / p;
        
        if (num >= x) {
            for (auto i = nums.begin() + (n - p); i != nums.end(); i++) {
                *i = num;
            }
            p = n;
        } else {
            p--;
        }
    }

    for (int t:nums) {
        if (t >= x) ctr++;
    }

    return 0;

}

int main()
{
    int T;

    cin >> T;

    while (T--) cout << solve() << '\n';

    return 0;
}