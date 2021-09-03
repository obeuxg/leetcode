#include <iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> Q(arr.begin(),arr.end());
        vector<int>result;
        for(int i=1;i<=k&&!Q.empty();++i)
        {
            result.push_back(Q.top());
            Q.pop();
        }
        return result;
    }
};
int main() {
    vector<int>a={1,2,3,4,5,6,7,8,9,10};
    priority_queue<int,vector<int>,less<int>> b(a.begin(),a.end());
    while(!b.empty())
    {
        int x=b.top();
        b.pop();
        cout<<x<<'\n';
    }
    return 0;
}
