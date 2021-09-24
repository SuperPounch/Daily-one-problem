//
// Created by 李啸 on 24/09/2021.
//

#ifndef DAILY_ONE_PROBLEM_LEETCODE_326_H
#define DAILY_ONE_PROBLEM_LEETCODE_326_H


class LeetCode_326 {
public:
    bool isPowerOfThree(int n) {
        while (n && n % 3 == 0) {
            n = n / 3;
        }
        return n == 1;
    }
};


#endif //DAILY_ONE_PROBLEM_LEETCODE_326_H
