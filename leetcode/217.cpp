#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
    int n = nums.size();
    /* naive approach */
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (nums[j] == nums[i]) {
    //             return true;
    //         }
    //     }
    // }

    // return false;

    /* map datastructure */
    // unordered_map<int, int> table;

    // for (int num:nums) {
    //     if (table.find(num) == table.end()) {
    //         table[num] = 1;
    //     } else {
    //         return true;
    //     }
    // }

    // return false;

    /* hash table quicker implementation */

    return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();


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

    cout << containsDuplicate(nums) << '\n';

    return 0;
}