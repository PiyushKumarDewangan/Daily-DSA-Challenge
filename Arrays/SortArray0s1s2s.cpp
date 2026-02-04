#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// vector <int> Count(vector<int> &arr)
// {
//     int zeros = 0, ones = 0, twos = 0;
//     //O(n)
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             zeros++;
//         }
//         else if (arr[i] == 1)
//         {
//             ones++;
//         }
//         else
//         {
//             twos++;
//         }
//     }
//     int idx = 0;
//     //O(n)
//     for (int i = 0; i < zeros; i++)
//     {
//         arr[idx++] = 0;
//     }
//     for (int i = 0; i < ones; i++)
//     {
//         arr[idx++] = 1;
//     }
//     for (int i = 0; i < twos; i++)
//     {
//         arr[idx++] = 2;
//     }
   
//     return arr;
// }
// int main()
// {
//     vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
//     vector <int> ans = Count(arr);
//      for (int x : ans)
//         cout << x << " ";
//     return 0;
// }
void sortColors(vector<int>& nums){
    int low = 0, mid =0, high = nums.size();
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}