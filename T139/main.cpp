#include <iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> word;
        for(auto &a:wordDict)
        {
            word.insert(a);
        }
        int n=s.size();
        vector<bool>DP(n+1,false);
        DP[0]=true;
        for (int i = 1; i <= s.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (DP[j]&&(word.find(s.substr(j,i-j))!=word.end())) {
                    DP[i] = true;
                    break;
                }
            }
        }
        return DP[n];
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
