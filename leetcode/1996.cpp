//
// Created by chikee on 2022/1/28.
//
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>> &p) {
        sort(p.begin(), p.end(),[](const auto& a,const auto& b){if(a[0]!=b[0]) return a[0]>b[0];return b[1]>a[1];});
        int ans=0,max_def=0;
        for(auto& v:p){
            if(max_def<=v[1]){
                max_def=v[1];
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};

