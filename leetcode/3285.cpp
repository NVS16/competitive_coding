#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) 
{
    int ans = INT32_MIN, a = 0;

    for (int x:nums) {
        a += x;
        ans = max(ans,a);
        a = max(a, 0);
    }

    return ans;
}

int main()
{
    int n, num;
    vector<int> nums;

    cin >> n;

    while (n--) {
        cin >> num;
        nums.push_back(num);
    }

    cout << maxSubArray(nums) << '\n';

    return 0;
}