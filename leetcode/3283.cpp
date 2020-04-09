#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) 
{
    int res = 0;

    for (int num:nums) {
        res ^= num;
    }

    return res;
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

    cout << singleNumber(nums) << '\n';

    return 0;
}