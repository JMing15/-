# [342. Power of Four](https://leetcode.com/problems/power-of-four/)

## 题目

Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example 1: 

```
Input: 16
Output: true
```

Example 2: 

```
Input: 5
Output: false
```

Follow up:
- Could you solve it without loops/recursion?

## 题目大意
判断一个数是否为是否为4的n次方

## 解题思路
- 题目提示是否不使用循环求解
- 证明(4^n-1)%3==0:(1)4^n-1 = (2^n-1)*(2^n+1);(2)在一组连续的数中(2^n-1),(2^n),(2^n+1)中，一定有一个是3的倍数。其中2^n不是3的倍数，因此(2^n-1)，(2^n+1)中一定有一个数是3的倍数，因此4^n-1是3的倍数。

