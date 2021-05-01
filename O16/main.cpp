#include <iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)
            return 0;
        int p;
        if(n<0)
             p=-n;
        else
             p=n;
        double result=pow(x,p);
        if(n<0)
            return 1.0/result;
        else
            return result;

    }
    double pow(double base,int u)
    {
        if(u==0)
            return 1;
        if(u==1)
            return base;
        double result=pow(base,u/2);
        result*=result;
        if(u%2==1)
            result*=base;
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
