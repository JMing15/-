# [60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)

## 题目

The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

1. "123"
2. "132"
3. "213"
4. "231"
5. "312"
6. "321"

Given n and k, return the kth permutation sequence.

Note:
- Given n will be between 1 and 9 inclusive.
- Given k will be between 1 and n! inclusive.

Example 1:
```
Input: n = 3, k = 3
Output: "213"
```

Example 2:
```
Input: n = 4, k = 9
Output: "2314"
```

## 题目大意
按照从小到大的顺序列出n!序列，求其第k个序列

## 解题思路
- DFS深度优先遍历，但是超时，再想想别的方法

