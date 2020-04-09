#include <iostream>
#include <vector>

using namespace std;

bool checkPossibility(vector<int>& nums) 
{
    int n = nums.size(), ctr = 0, index = 0;

    if (n == 1) return true;

    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            ctr++;
            if (ctr > 1) return false;
            index = i;
        }
    }

    if ((index < 2) || nums[index] >= nums[index - 2] || (index == n - 1) || nums[index - 1] <= nums[index + 1]) return true;



    return false;

}

int main()
{
    vector<int> nums;
    int num, n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    cout << checkPossibility(nums) << '\n';

    return 0;
}