#include <iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            ++m[s[i]];
        }
        char result=' ';
        for(int i=0;i<n;++i)
        {
            if(m[s[i]]==1)
            {
                //result=;
                return s[i];
            }
        }
        return result;
    }
};
int main() {
    string s;
    cin>>s;
    Solution A;
    cout<<A.firstUniqChar(s);
    return 0;
}
