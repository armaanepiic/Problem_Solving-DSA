// https://leetcode.com/problems/find-peak-element/

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1, mid;
        if (nums.size() == 1)
            return nums[0];
        while (l < r)
        {
            mid = (l + r) / 2;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;
            else
            {
                if (nums[mid] < nums[mid + 1])
                    r = mid;
                else if (nums[mid] > nums[mid - 1])
                    l = mid + 1;
            }
        }
        return l;
    }
};