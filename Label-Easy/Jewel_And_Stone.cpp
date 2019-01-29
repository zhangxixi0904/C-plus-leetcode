//
// Created by zhangpx on 19-1-29.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
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

