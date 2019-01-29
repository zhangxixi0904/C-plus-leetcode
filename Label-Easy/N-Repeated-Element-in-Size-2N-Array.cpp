#include <unordered_map>
#include <vector>
//
// Created by zhangpx on 19-1-29.
// Source：https://leetcode-cn.com/problems/n-repeated-element-in-size-2n-array/
/****************************************************
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements
 is repeated N times.

Return the element repeated N times.



Example 1:

Input: [1,2,3,3]
Output: 3

Example 2:

Input: [2,1,2,5,3,2]
Output: 2

Example 3:

Input: [5,1,5,2,5,3,5,4]
Output: 5



Note:

    4 <= A.length <= 10000
    0 <= A[i] < 10000
    A.length is even

******************************************************/

/****************usage****************
int a[10] = {1,2,3,4,3,2,3,1,3,3};
//通过数组a的地址初始化，注意地址是从0到5（左闭右开区间）
vector<int> b(a, a+10);

Solution solution;
int count = solution.repeatedNTimes(b);

cout << count << endl;
***********************************/

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int> &A) {
        const int N = A.size() / 2;
        unordered_map<int, int> m;
        //这做法跟python一模一样，那auto的意义是什么？是为了省去自己判别A中元素类型吗？
        for (int a : A)
            m[a]++;
        for (auto x : m) {
            if (x.second == N)
                return x.first;
            return 0;
        }
    }
};

//题目中说明了这2N个元素中有N+1个各不相同的元素，其中有一个重复了N次，所以除了该元素外，
//不会再有两个相同元素存在，用随机方法也可以准确地找出来，而且比上面的遍历要快得多
class Solution_2 {
public:
    int repeatedNTimes(vector<int>& A) {
        int i = 0, j = 0, n = A.size();
        while (i == j || A[i] != A[j])
            i = rand() % n, j = rand() % n;
        return A[i];
    }
};


int repeatedNTimes2(vector<int>& A) {
    unordered_set<int> seen;
    for (int a: A) {
        if (seen.count(a))
            return a;
        seen.insert(a);
    }
}