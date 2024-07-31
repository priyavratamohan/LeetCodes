class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            bool flag = true;
            if (mid - 1 >= 0 && nums[mid - 1] < nums[mid]) flag = false;
            if (mid + 1 < nums.size() && nums[mid + 1] < nums[mid]) flag = false;
            if (flag) return nums[mid];

            if (nums[mid] > nums[right]) { 
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return nums[0];
    }
};
