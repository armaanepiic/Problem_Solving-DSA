class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major_element = 0, count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(count == 0) {
                major_element = nums[i];
            }
            if(major_element == nums[i]) 
                count++;
            else count--;
        }
        return major_element;
    }
};