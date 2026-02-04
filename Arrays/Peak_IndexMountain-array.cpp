#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st =1, end=arr.size()-2;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if (arr[mid-1]< arr[mid]){
                st = mid + 1;
            }else {
                end = mid-1;
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> nums = {0,3,8,10,11,5,2};
    Solution s;
    int ans1 = s.peakIndexInMountainArray(nums);
    cout << ans1 << endl;
    return 0;
}