#include <iostream>
#include <vector>
#include <string>
using namespace std;

//来自leetcode/algorithms/cpp/jewelsAndStones/JewelsAndStones.cpp的一种方法
//map 是STL中的一种容器，表示映射，有点像字典，这里的解法就是相当于给珠宝建立一个映射表，x->y，
//y位True或者False，x用字符的ASCII表示，map预留了256位，虽然填不满但是不影响使用
// for(auto c:J) 跟python的 for c in J 类似，注意如果是&c的话，对&c进行修改会影响J的值
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool map[256] = {false};
        for (auto c : J) {
            map[c]=true;
        }
        int cnt=0;
        for (auto c : S) {
            if (map[c])  cnt++;
        }
        return cnt;
    }
};

int main() {
    cout << "Hello, World!" << endl;

    string J = "aA";
    string S = "aAAbbbb";

    Solution solution;
    int count = solution.numJewelsInStones(J,S);

    cout << count << endl;

    return 0;

}