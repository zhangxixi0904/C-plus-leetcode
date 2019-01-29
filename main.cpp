#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int i = 0, j = 0, n = A.size();
        while (i == j || A[i] != A[j])
            i = rand() % n, j = rand() % n;
        return A[i];
    }
};


int main() {
    cout << "Hello, World!" << endl;

    string J = "aA";
    string S = "aAAbbbb";
    int a[10] = {1,2,3,4,3,2,3,1,3,3};
    //通过数组a的地址初始化，注意地址是从0到5（左闭右开区间）
    vector<int> b(a, a+10);

    Solution solution;
    int count = solution.repeatedNTimes(b);

    cout << count << endl;

    return 0;

}