#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>result(n);
        for(auto a:bookings)
        {
            result[a[0]-1]+=a[2];
            if(a[1]<n)
                result[a[1]]-=a[2];
        }
        for(int i=1;i<n;++i)
        {
            result[i]+=result[i-1];
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
