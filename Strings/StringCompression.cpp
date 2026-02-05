#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int j = 0;
        for (int i = 0; i < chars.size(); i++)
        {
            int count = 0;
            char ch = chars[i];
            while (i < chars.size() && chars[i] == ch )
            {
                count++;
                i++;
            }
            if (count == 1)
            {
                chars[j++] = ch;
            }
            else
            {
                chars[j++] = ch;
                string str = to_string(count);
                for(char digit : str){
                  chars[j++]=digit;
                }
            } i--;
        }
        chars.resize(j);
        return j;
    }
};
int main()
{
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c','d','d'};
    Solution a;
    cout << a.compress(chars) << endl;
    return 0;
}