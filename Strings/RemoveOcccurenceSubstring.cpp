#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            int idx = s.find(part);
            s.erase(idx, part.length());
        }
        return s;
    }
};
int main(){
    string s1 = "daabcbaabcbc", s2="abc";
    Solution a;
    cout<<a.removeOccurrences(s1,s2)<<endl;
    return 0;
};