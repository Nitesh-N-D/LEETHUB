class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; // pointer to place non-val elements
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i; // number of elements not equal to val
    }
};