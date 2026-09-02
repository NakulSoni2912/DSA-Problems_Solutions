class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int j =i+1;
            if(nums[j] == nums[i])
            return nums[i];
        }
        return -1;
    }
};