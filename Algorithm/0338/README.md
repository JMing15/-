# [338. Counting Bits](https://leetcode.com/problems/counting-bits/)

## 题目

Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.

Example 1: 

```
Input: 2
Output: [0,1,1]
```

Example 2: 

```
Input: 5
Output: [0,1,1,2,1,2]
```

Follow up:
- It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
- Space complexity should be O(n).
- Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.

## 题目大意
给定一个非负整数num，对于范围0≤i≤num范围的每个数字i，计算其二进制数中的1的数目，并将它们作为数组返回。

## 解题思路
- Bit Manipulation直觉想出利用位运算特性x&(x-1)，求出每个数字二进制1的个数，写出解法1
- 解法2只能wow（惊叹的意思）

