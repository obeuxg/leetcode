#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int max=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> DP(n,vector<int>(m,0));
        for(int i=0;i<n;++i) {
            for (int j = 0; j < m; ++j) {
                if (i == 0 || j == 0) {
                    DP[i][j] = matrix[i][j] - '0';
                    if(DP[i][j]==1)
                    max = max > 1 ? max : 1;
                } else {
                    if (matrix[i][j] == '1') {
                        int s1 = DP[i - 1][j - 1];
                        int s2=DP[i ][j - 1];
                        int s3=DP[i-1 ][j ];
                        int min=s1;
                        min=min<s2?min:s2;
                        min=min<s3?min:s3;
                        DP[i][j]=min+1;
                        max = max > DP[i][j] ? max : DP[i][j];
                    } else
                        DP[i][j] = 0;
                }
            }
        }
        cout<<"n="<<n<<"\tm="<<m<<'\n';
        for(auto &a:DP)
        {
            for(auto &b:a)
                cout<<b<<'\t';
            cout<<'\n';
        }
        return max*max;
    }
};
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>>temp(n,vector<char>(m,0));
    int t;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>t;
            temp[i][j]=t+'0';
        }
    }

    Solution A;
    cout<<A.maximalSquare(temp);
    return 0;
}
