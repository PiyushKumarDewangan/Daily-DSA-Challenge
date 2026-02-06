#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool searchInRow(vector<vector<int>> &matrix,int target, int row)
    {   int n = matrix[0].size();
        int st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] > target)
                end = mid - 1;
            else
                st = mid + 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        if (m == 0)
            return false;
        int n = matrix[0].size();

        int stRow = 0, endRow = m - 1;

        while (stRow <= endRow)
        {
            int midRow = stRow + (endRow - stRow) / 2;

            if (matrix[midRow][0] <= target && matrix[midRow][n - 1] >= target)
            {
                return searchInRow(matrix, target, midRow); // valid for LeetCode 74
            }
            else if (target > matrix[midRow][n - 1])
            {
                stRow = midRow + 1;
            }
            else
            {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 31;
    Solution s;
    cout << s.searchMatrix(matrix, target);
    return 0;
}