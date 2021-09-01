#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int distinctSubseqII(string s) {
        int MOD=1000000007;
        int n=s.size();
        vector<int>dp(n+1);
        vector<int>last(26,-1);
        dp[0]=1;
        for(int i=0;i<n;++i)
        {
            int x=s[i]-'a';
            dp[i+1]=(dp[i]*2)%MOD;
            if(last[x]>=0)
            {
                dp[i+1]=(dp[i+1]-dp[last[x]])%MOD;
            }
            //dp[i+1]%=MOD;
            last[x]=i;
        }
        --dp[n];
        dp[n]%=MOD;
        if(dp[n]<0)
        {
            dp[n]+=MOD;
        }
        return dp[n];
    }
};
int main() {
    string  a="zchmliaqdgvwncfatcfivphddpzjkgyygueikthqzyeeiebczqbqhdytkoawkehkbizdmcnilcjjlpoeoqqoqpswtqdpvszfaksn";
    Solution x;
    cout<<x.distinctSubseqII(a);
    return 0;
}
