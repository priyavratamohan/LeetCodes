class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
               c++;
            else if(nums[i]==0)
               {          
                c=0;
               }        
             if(c>max)
                   max=c;          
        }
        return max;
    }
};
