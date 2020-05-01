class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), p = 1;
        
        if (!n) return 0;
            
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[p] = nums[i];
                p++;
            }
        }
        
        nums.erase(nums.begin() + p, nums.end());
        
        return p;
        
    }
};