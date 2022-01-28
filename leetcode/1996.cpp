//
// Created by chikee on 2022/1/28.
//
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 这道题有点像信封那道题，先按照攻击力降序排序，再按照防御力升序排序
     * 这样从前向后遍历，相同攻击力防御力一定不满足条件，只需要判断防御力即可
     * 这里需要维护max变量来记录最大的防御力
     * 如果当前的防御力小于max，那么当前的防御力的攻击力一定小于max的攻击力
     * @param p
     * @return
     */
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

