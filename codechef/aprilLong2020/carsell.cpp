#include <iostream>
#include <vector>
#include <algorithm>

#define  vi vector<int>
#define Z 1000000007

using namespace std;

int findMaxProfit(vi &nums) 
{
    int maxProfit = 0, i = 0;

    sort(nums.begin(), nums.end(), greater<int>());

    for (int num: nums) {
        maxProfit = (maxProfit + max(0, num - i)) % Z;
        i++;
    }
    return maxProfit;
}

int main()
{
    int T, n, temp;

    cin >> T;

    while (T--) {
        cin >> n;
        vi nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << findMaxProfit(nums) << endl;
    }
    return 0;
}