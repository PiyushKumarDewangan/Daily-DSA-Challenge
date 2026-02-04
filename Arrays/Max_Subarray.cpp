#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//Kadane's Algorithm O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currSum=0, maxSum=INT_MIN;
       for(int val:nums)
       {
        currSum+=val;
        maxSum=max(currSum, maxSum);
        if(currSum<0)
        {currSum=0;}
       } 
       return maxSum;
    }
};

//Brute force approach O(n^2)
// int n=5;
// int arr[5]={1,2,3,4,5};
// int maxSum=INT_MIN;
// for (int st = 0; st < n; st++)
// {
//     int currSum=0;
//     for (int end = st; end < n; end++)
//     {
//         currSum+=arr[end];
//         maxSum=max(currSum,maxSum);
//     }
// }
// cout<<"Max subarray sum="<<maxSum<<endl;   
