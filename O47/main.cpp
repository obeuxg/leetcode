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
        vector<vector<int>>DP(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                DP[i][j]=max(DP[i][j-1],DP[i-1][j])+grid[i-1][j-1];
            }
        }
        return DP[n][m];
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
