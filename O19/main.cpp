#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size();
        int i=0,j=0;
        while(true)
        {
            if(i==n||j==m)
                break;
            if(s[i]==p[j]||s[i]=='.'||p[j]=='.')
            {
                ++i;
                ++j;
            }
            else
            {

            }
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
