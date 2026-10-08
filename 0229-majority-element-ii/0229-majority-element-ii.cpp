class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el = 0;
        int count = 0;
        int el1 = 1;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                count++;
            }
            else if (nums[i] == el1) {
                count1++;
            }
            else if (count == 0) {
                el = nums[i];
                count = 1;
            }
            else if (count1 == 0) {
                el1 = nums[i];
                count1 = 1;
            }
            else {
                count--;
                count1--;
            }
        }
        int count2 = 0;
        int count3 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el)
                count2++;
            if (nums[i] == el1)
                count3++;
        }
        vector<int> ans;
        if (count2 > n / 3)
            ans.push_back(el);
        if (count3 > n / 3)
            ans.push_back(el1);
        return ans;
    }
};