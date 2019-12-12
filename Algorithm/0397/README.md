# [397. Integer Replacement](https://leetcode.com/problems/integer-replacement/)

## 题目

Given a positive integer n and you can do operations as follow:
   1. If n is even, replace n with n/2.
   2. If n is odd, you can replace n with either n + 1 or n - 1.
What is the minimum number of replacements needed for n to become 1?

Example 1: 

```
Input:
8

Output:
3

Explanation:
8 -> 4 -> 2 -> 1
```

Example 2: 

```
Input:
7

Output:
4

Explanation:
7 -> 8 -> 4 -> 2 -> 1
or
7 -> 6 -> 3 -> 2 -> 1
```

## 题目大意
给定以个正整数n，你需要做以下操作：
   1. 如果n是偶数，则n=n/2
   2. 如果n是奇数，则n=n+1或n=n-1
求n变为1最小的次数。

## 解题思路
- 当n为偶数时，可以直接用n=n/2
- 当n为奇数时，如何判断n=n+1或者n=n-1？

