#include <iostream>
#include <vector>
#include "leetcode/1996.cpp"
using namespace std;
int main() {
    auto *s=new Solution();
    vector<vector<int>> v1={{5,5},{6,3},{3,6}};
    vector<vector<int>> v2={{2,2},{3,3}};
    vector<vector<int>> v3={{1,5},{10,4},{4,3}};
    vector<vector<int>> v4={{1,1},{2,1},{2,2},{1,2}};
    cout<<s->numberOfWeakCharacters(v1)<<endl;
    cout<<s->numberOfWeakCharacters(v2)<<endl;
    cout<<s->numberOfWeakCharacters(v3)<<endl;
    cout<<s->numberOfWeakCharacters(v4)<<endl;
    return 0;
}
