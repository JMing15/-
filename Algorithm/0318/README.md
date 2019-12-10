# [318. Maximum Product of Word Lengths](https://leetcode.com/problems/maximum-product-of-word-lengths/)

## 题目

Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. You may assume that each word will contain only lower case letters. If no such two words exist, return 0.

Example 1: 

```
Input: ["abcw","baz","foo","bar","xtfn","abcdef"]
Output: 16 
Explanation: The two words can be "abcw", "xtfn".
```

Example 2: 

```
Input: ["a","ab","abc","d","cd","bcd","abcd"]
Output: 4 
Explanation: The two words can be "ab", "cd".
```

Example 3: 

```
Input: ["a","aa","aaa","aaaa"]
Output: 0 
Explanation: No such pair of words.
```

## 题目大意
给定一个字符串数组，找出length(word[i]) * length(word[j])的最大值，但是这两个单词不含有公共字母。你可以假定每一个单词只含有小写字母，如果不存在这样的两个单词，返回0。

## 解题思路
- 从数组中找出2个不含有公共字母的字符串，且这两个字符串的长度乘积为最大值。
- 利用位运算&的性质，如果X&Y=0，说明X和Y的二进制位完全不同，利用这一性质，首先将字符串转化为二进制数，利用位运算&找出两个不包含公共字母的字符串，同时维护两者长度的最大值即可。
- 将字符串转化为二进制的具体方法如下：
```
a   => 1
ab  => 11
abc => 111
ac  => 101
ag  => 1000001
利用每个字母与a的偏移左移即可:mask |= 1 << (char - 'a')
```
