#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    void ston(string s,vector<int>&nums)
    {
        for(int i=0;i<s.size();++i)
        {
            nums[i]=s[i]-'0';
        }
    }
    int max(int a,int b)
    {
        return a>b?a:b;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>DP(n+1,0);
        vector<int>nums(n);
        ston(s,nums);
        if(nums[0]==0)
            return 0;
        else
            DP[1]=1;
        DP[0]=1;
        for(int i=1;i<n;++i)
        {
            int temp=nums[i]+nums[i-1]*10;
            if(temp>10&&temp<=26)
            {
                DP[i+1]=DP[i]+DP[i-1];
            }
            else if(nums[i]==0)
            {
                DP[i+1]=DP[i-1];
                DP[i]=DP[i-1];
            }
            else if(temp>26||temp<=10)
            {
                DP[i+1]=DP[i];
            }
        }
        return DP[n];
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
