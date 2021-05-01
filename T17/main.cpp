#include <iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //unordered_map<char,vector<char>>dict;
        vector<string>combinations;
        string combination;
        if(digits.size()==0)
            return combinations;
        unordered_map<char, vector<char>> dict{
                {'2', {'a','b','c'}},
                {'3', {'d','e','f'}},
                {'4', {'g','h','i'}},
                {'5', {'j','k','l'}},
                {'6', {'m','n','o'}},
                {'7', {'p','q','r','s'}},
                {'8', {'t','u','v'}},
                {'9', {'w','x','y','z'}}
        };
        backtrack(digits,dict,combinations,combination,0);
        return combinations;
    }
    void backtrack(string digits,unordered_map<char,vector<char>>dict,
                   vector<string>&combinations,string &combination,
                   int index)
    {
        if(combination.size()==digits.size())
        {
            combinations.push_back(combination);
            return ;
        }
        for(char a:dict[digits[index]])
        {
            combination.push_back(a);
            backtrack(digits,dict,combinations,combination,index+1);
            combination.pop_back();
        }

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
