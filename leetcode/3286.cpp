#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int k = 0, n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i]) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    for (int i = k; i < n; i++) {
        nums[i] = 0;
    }

    for (int num:nums) {
        cout << num << " ";
    }

    cout << '\n';
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

    moveZeroes(nums);

    return 0;
}