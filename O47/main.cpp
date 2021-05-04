#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int max(int a,int b)
    {
        return a>b?a:b;
    }
    int maxValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>DP(m+1,0);
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                DP[j]=max(DP[j-1],DP[j])+grid[i-1][j-1];
            }
        }
        return DP[m];
    }
};
int main() {
    //std::cout << "Hello, World!" << std::endl;
    int n,m;
    cin>>n>>m;
    vector<vector<int>>temp(n,vector<int>(m));
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>temp[i][j];
        }
    }
    Solution A;
    cout<<A.maxValue(temp);
    return 0;
}
