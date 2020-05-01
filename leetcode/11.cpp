#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) 
{
    int i = 0, j = height.size() - 1, maxA = INT_MIN;

    while (i < j) {
        maxA = max(maxA, min(height[i], height[j]) * (j - i));
        if (height[i] < height[j]) i++;
        else j--;
    }

    return maxA;

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

    cout << maxArea(nums) << '\n';

    return 0;
}