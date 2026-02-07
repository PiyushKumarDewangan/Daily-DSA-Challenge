#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty())
            return ans;
            
        int m = matrix.size(), n = matrix[0].size();
        int sRow = 0, eRow = m - 1, sCol = 0, eCol = n - 1;
        while (sRow<=eRow && sCol<=eCol )
        {   //Top
            for (int j = sCol; j <= eCol; j++)
            {
                ans.push_back(matrix[sRow][j]);
            }
            //Right
            for (int i = sRow + 1; i <= eRow; i++)
            {
                ans.push_back(matrix[i][eCol]);
            }
            //Bottom
            for (int j = eCol - 1; j >= sCol; j--)
            {   if(sRow==eRow){break;}
                ans.push_back(matrix[eRow][j]);
            }
            //Left
            for (int i = eRow - 1; i >= sRow + 1; i--)
            {   if(sCol==eCol){break;}
                ans.push_back(matrix[i][sCol]);
            }
            sRow++;
            eRow--;
            sCol++;
            eCol--;
        }
        return ans;
    }
};
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    class Solution s;
    vector<int>ans1=s.spiralOrder(matrix);
    for(int val: ans1){
        cout<<val<<" ";
    }
    return 0;
}