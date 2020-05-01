#include <iostream>
#include <vector>

using namespace std;

int maxSections(vector<int> &nums)
{
    int n = nums.size(), maxSum = 0;
    vector<int>left(n), right(n);

    for (int i = 1; i < n; i++) {
        if (nums[i] >= nums[i - 1])
            left[i] = left[i - 1] + 1;
        if (nums[n - i - 1] >= nums[n - i])
            right[n - i - 1] = right[n - i] + 1;
    }

    for (int i = 0; i < n; i++) {
        maxSum = max(maxSum, left[i] + right[i]);
    }

    return maxSum + 1;
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

    cout << maxSections(nums) << '\n';

    return 0;
}