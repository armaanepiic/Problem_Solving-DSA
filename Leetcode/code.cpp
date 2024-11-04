// Arman Hossain C193033
// Programming is fun with emotion
#include <bits/stdc++.h>
using namespace std;

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
            if (nums[mid] > nums[mid-1] && nums[mid] < nums[mid + 1])
                l = mid;
            else if (nums[mid] > nums[mid - 1])
                l = mid + 1;
        }
        cout << "mid = " << mid << endl
             << "l = " << l << endl
             << "r = " << r << endl;
    }
    return l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {1,2,3,1};
    cout << findPeakElement(nums);

    return 0;
}