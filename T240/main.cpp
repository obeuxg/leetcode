#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(n==0)
            return false;
        int m=matrix[0].size();
        int i=0;
        int j=m-1;
        while(i<n&&j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            if(matrix[i][j]>target)
                --j;
            else
                ++i;
        }
        return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
