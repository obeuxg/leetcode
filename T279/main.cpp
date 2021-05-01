#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int min(int a,int b)
    {return a<b?a:b;}
    int numSquares(int n) {
        vector<int>f(n+1,INT16_MAX);
        vector<int>iss(n+1,-1);
        f[0]=0;
        unordered_set<int> is;
        for(int i=0;i<=sqrt(n);++i)
        {
            iss[i*i]=1;
            is.insert(i*i);
        }
        for(int i=0;i<=n;++i)
        {
            for(auto &a:is)
            {
                if(a<=i)
                f[i]=min(f[i-a]+1,f[i]);
            }
        }
        return f[n];
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
