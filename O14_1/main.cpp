#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int max(int a,int b)
    {
        return a>b?a:b;
    }
    int cuttingRope(int n) {
        vector<int>f(n+1,0);
        if(n<=3)
            return n-1;
        for(int i=1;i<=n;++i)
        {
            f[i]=i;
            for(int j=1;j<i;++j)
            {
                f[i]=max(f[i],f[j]*(i-j));
            }
        }
        return f[n];
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
