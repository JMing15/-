# [136. Single Number](https://leetcode.com/problems/single-number/)

## 题目

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


Example 1: 

```
Input: [2,2,1]
Output: 1
```

Example 2: 

```
Input: [4,1,2,1,2]
Output: 4
```


## 题目大意


## 解题思路
* 题目要求时间复杂度为O(n)，空间复杂度为O(1),
* 题目强调有一个数字出现一次，其它数字出现两次，联想到异或运算的性质:x^x=0以及x^0=x，整个数组依次求异或，最终结果即为只出现一次的数字。
```
 a ^ b ^ a ^ b ^ c ^ c ^ d
=(a ^ a) ^ (b ^ b) ^ (c ^ c) ^ d
=0 ^ 0 ^ 0 ^ d
=d
```
