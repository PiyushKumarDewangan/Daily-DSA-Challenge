#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int tar)
    {
        int st = 0, end = nums.size() - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (nums[mid] == tar)
            {
                return mid;
            }
            if (nums[st] <= nums[mid])
            {
                if (nums[st] <= tar && tar <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            {
                if (nums[mid] <= tar && tar <= nums[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    Solution s;
    int ans = s.search(nums, target);
    cout << ans << endl;
    return 0;
}