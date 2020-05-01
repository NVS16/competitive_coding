#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, temp;
    vector<int> nums;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }


    vector<int> pre(n), suff(n);

    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - nums[i - 1]) <= 2) pre[i] += pre[i - 1] + 1;
        if (abs(nums[n - i - 1] - nums[n - i]) <= 2) suff[n - i - 1] += suff[n - i] + 1;
    }


    int minRes = INT_MAX, maxRes = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (pre[i] + suff[i] + 1< minRes) minRes = pre[i] + suff[i] + 1;
        if (pre[i] + suff[i] + 1> maxRes) maxRes = pre[i] + suff[i] + 1;
    }

    cout << minRes << " " << maxRes << '\n';


}

int main()
{
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}