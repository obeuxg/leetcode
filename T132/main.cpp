#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool check(string s,int start,int i)
    {
        int mid=(start+i+start)/2;
        for(int j=start;j<=mid;++j)
        {
            if(s[j]!=s[start+i+start-j])
                return false;
        }
        return true;
    }
    void dfs(vector<vector<string>>&result,vector<string>&temp,int start,string s)
    {
        if(start==s.size())
        {
            result.push_back(temp);
            return ;
        }
        for(int i=0;i+start<s.size();++i)
        {
            string f;
            for(int j=start;j<=start+i;++j)
                f.push_back(s[j]);
            if(check(s,start,i))
            {
                temp.push_back(f);
                dfs(result,temp,start+i+1,s);
                temp.pop_back();
            }
        }
    }
    int minCut(string s) {
        int ss=INT16_MAX;
        vector<vector<string>>result;
        vector<string>temp;
        dfs(result,temp,0,s);
        for(auto &aa:result)
        {
            if(result.size()<ss)
                ss=result.size();
        }
        return ss-1;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

