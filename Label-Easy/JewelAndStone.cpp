//
// Created by zhangpx on 19-1-29.
// Source : https://leetcode.com/problems/jewels-and-stones/description

/***************************************************************************************
 *
 * You're given strings J representing the types of stones that are jewels, and S
 * representing the stones you have.  Each character in S is a type of stone you have.
 * You want to know how many of the stones you have are also jewels.
 *
 * The letters in J are guaranteed distinct, and all characters in J and S are letters.
 * Letters are case sensitive, so "a" is considered a different type of stone from "A".
 *
 * Example 1:
 *
 *
 * Input: J = "aA", S = "aAAbbbb"
 * Output: 3
 *
 *
 * Example 2:
 *
 *
 * Input: J = "z", S = "ZZ"
 * Output: 0
 *
 *
 * Note:
 *
 *
 * 	S and J will consist of letters and have length at most 50.
 * 	The characters in J are distinct.
 ***************************************************************************************/


/****************usage****************
string J = "aA";
string S = "aAAbbbb";

Solution solution;
int count = solution.numJewelsInStones(J,S);

cout << count << endl;
***********************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution_1 {
    int count = 0;
public:
    int numJewelsInStones(string J, string S) {
        for(int m=0;m<S.length();m++)
        {

            for (int n=0;n<J.length();n++)
            {
                if (S[m] == J[n])
                    count += 1;
            }
        }
        return count;
     }
};


//S中的元素跟J中的元素依次比较，只要发现相等就可以break了，开始对S的下一个元素进行鉴定
//如果J的元素个数比较多，那么这种方式会更有效率
class Solution_2 {

    int count = 0;
    int flag = 0;
public:
    int numJewelsInStones(string J, string S) {
        for(int m=0;m<S.length();m++)
        {
            flag = 0;
            for (int n=0;n<J.length();n++)
            {
                if (S[m] == J[n])
                {
                    flag=1;
                    break;
                }
            }
            if (flag==1)
                count += 1;
        }
        return count;
    }
};


class Solution_3 {
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
