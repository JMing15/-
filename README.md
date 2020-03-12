# LeetCode by Cpp
[LeetCode Online Judge] (https://leetcode.com/) is a website containing many **algorithm questions**. Most of them are real interview questions of **Google, Facebook, LinkedIn, Apple**, etc. This repo shows my solutions by Cpp. Please feel free to reference and **STAR** to support this repo, thank you!

## Data Structures

> 标识了 ✅ 的专题是完成所有题目了的，没有标识的是还没有做完所有题目的

- [LeetCode by Cpp](#leetcode-by-cpp)
  - [Data Structures](#data-structures)
  - [算法](#%e7%ae%97%e6%b3%95)
  - [一.目录](#%e4%b8%80%e7%9b%ae%e5%bd%95)
  - [分类](#%e5%88%86%e7%b1%bb)
  - [Array](#array)
  - [String](#string)
  - [Linked List](#linked-list)
  - [Stack](#stack)
  - [Backtracking](#backtracking)
  - [Dynamic Programming](#dynamic-programming)
  - [Bit Manipulation](#bit-manipulation)
  - [Union Find](#union-find)
  - [Others](#others)

## 算法
## 一.目录
| #     |  Tile | Solution | Acceptance | Difficulty | Frequency | 
|:----: | :---: | :------: | :--------: | :--------: | :-------: | 
| 0001  | Two Sum | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0001) | 45.1%      | 简单 | # |
| 0002  | Add Two Numbers | [GO]() | 31.8%      | 中等	 | # |
| 0003  | Longest Substring Without Repeating Characters  | [GO]() | 28.9%      | 中等 | # |
| 0006  | ZigZag Conversion | [GO]() | 33.3%      | 中等 | # |
| 0007  | Reverse Integer  | [GO]() | 25.5%      | 简单 | # |
| 0009  | Palindrome Number  | [GO]() | 45.0%      | 简单 | # |
| 0011  | Container With Most Water | [GO]() | 46.8%      | 中等 | # |
| 0013  | Roman to Integer | [GO]() | 53.3%      | 简单 | # |
| 0017  | Letter Combinations of a Phone Number  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0017) | 42.0%      | 中等 | # |
| 0020  | Valid Parentheses | [GO]() | 37.3%      | 简单 | # |
| 0021  | Merge Two Sorted Lists  | [GO]() | 49.0%      | 简单 | # |
| 0022  | Generate Parentheses  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0022) | 58.6%      | 中等 | # |
| 0026  | Remove Duplicates from Sorted Array | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0026) | 42.0%      | 简单 | # |
| 0027  | Remove Element    | [GO]() | 45.6%      | 简单 | # |
| 0031  | Next Permutation  | [GO]() | 31.1%      | 中等 | # |
| 0033  | Search in Rotated Sorted Array      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0033) | 33.2%      | 中等 | # |
| 0035  | Search Insert Position    | [GO]() | 41.2%      | 简单 | # |
| 0039  | Combination Sum    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0039) | 52.3%      | 中等 | # |
| 0040  | Combination Sum II    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0040) | 44.8%      | 中等 | # |
| 0046  | Permutations     | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0046) | 59.2%      | 中等	 | # |
| 0047  | Permutations II     | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0047) | 43.5%      | 中等	 | # |
| 0048  | Rotate Image     | [GO]() | 50.7%      | 中等	 | # |
| 0054  | Spiral Matrix    | [GO]() | 31.5%      | 中等	 | # |
| 0056  | Merge Intervals     | [GO]() | 36.7%      | 中等	 | # |
| 0057  | Insert Interval      | [GO]() | 31.8%      | Hard	 | # |
| 0059  | Spiral Matrix II      | [GO]() | 48.5%      | 中等	 | # |
| 0060  | Permutation Sequence      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0060) | 34.8%     | 中等	 | # |
| 0066  | Plus One       | [GO]() | 41.7%      | 简单	 | # |
| 0073  | Set Matrix Zeroes     | [GO]() | 40.9%      | 中等	 | # |
| 0074  | Search a 2D Matrix      | [GO]() | 35.3%      | 中等	 | # |
| 0077  | Combinations      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0077) | 51.3%      | 中等	 | # |
| 0078  | Subsets      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0078) | 55.2%     | 中等	 | # |
| 0079  | Word Search      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0079) | 33.2%    | 中等	 | # |
| 0080  | 	Remove Duplicates from Sorted Array II | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0080) | 41.4% | 中等	 | # |
| 0121  | Best Time to Buy and Sell Stock  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0121) | 49.5%  | 简单	 | # |
| 0141  | 环形链表  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0141) | 46.9%  | 简单	 | # |
| 0151  | Reverse Words in a String  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0151) | 18.5%  | 中等	 | # |
| 0152  | Maximum Product Subarray  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0152) | 30.4% | 中等	 | # |
| 0155  | Min Stack    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0155) | 39.7% | 简单	 | # |
| 0166  | Fraction to Recurring Decimal  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0155) | 25.3%  | 中等	 | # |
| 0167  | Two Sum II - Input array is sorted  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0167) | 51.9%  | 	简单	 | # |
| 0168  | Excel Sheet Column Title  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0168) | 29.9%  | 	简单	 | # |
| 0169  | Majority Element  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0169) | 54.9%  | 	简单	 | # |
| 0171  | Majority Element  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0171) | 52.8%  | 	简单	 | # |
| 0187  | Repeated DNA Sequences | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0187) | 37.4%  | 	中等	 | # |
| 0190  | Reverse Bits      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0190) | 41.4%     | 简单	 | # |
| 0191  | Number of 1 Bits      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0191) | 45.8%     | 简单	 | # |
| 0198  | SuHouse Robberbsets      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0198) | 41.4%     | 简单	 | # |
| 0201  | Bitwise AND of Numbers Range      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0201) | 36.8%     | 中等		 | # |
| 0206  | Reverse Linked List      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0206) | 59.8%     | 简单		 | # |
| 0231  | Power of Two      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0231) | 42.6%    | 简单		 | # |
| 0260  | Single Number III      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0260) | 58.9%    | 中等		 | # |
| 0268  | Missing Number     | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0268) | 49.7%    | 简单		 | # |
| 0318  | Maximum Product of Word Lengths    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0318) | 49.7%    | 中等		 | # |
| 0338  | Counting Bits    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0338) | 66.2%    | 中等		 | # |
| 0342  | Power of Four    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0342) | 40.9%    | 简单		 | # |
| 0389  | Find the Difference    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0389) | 	54.0%    | 简单		 | # |
| 0397  | Integer Replacement    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0397) | 		32.2%    | 中等		 | # |
| 1071  | 字符串的最大公因子    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/1071) | 		58.2%    | 中等		 | # |
| ----  | ------------------------| ------ | ---------- | ---------- | ---- |

## 分类
## Array
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  1    |  Two Sum | 简单 |       |        |         |
|  121  |  Best Time to Buy and Sell Stock  | 简单 |       |        |         |
|  167  |  Two Sum II - Input array is sorted | 简单 |       |        |         |
|  1013  |  将数组分成和相等的三个部分 | 简单 |       |        |         |

## String
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  151    |  Reverse Words in a String  |   中等   |       |        |         |
|  166    |  Fraction to Recurring Decimal  |   中等   |       |        |         |
|  187   |  Repeated DNA Sequences | 中等 |       |       |     |
|  1071   |  字符串的最大公因子 | 简单 |       |       |  ⭐   |

## Linked List
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  141   |  环形链表 | 简单 |       |        |         |
|  206   |  Two Sum II - Input array is sorted | 简单 |       |        |         |

## Stack
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  155 | Min Stack |  简单  |       |        |         |

## Backtracking
- 排列问题Permutation：第46题、第47题、第60题、
- 组合问题Combination：第17题、第39题、第40题、第77题
- 四方向搜索问题。第79题

| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  17   |  Letter Combinations of a Phone Number | 中等 |       |       |  ⭐   |
|  22   |  Generate Parentheses  | 中等 |       |       |  ⭐   |
|  39   |  Combination Sum  | 中等 |       |       |     |
|  40   |  Combination Sum II | 中等 |       |       |     |
|  46   |  Permutations   | 中等 |       |       |     |
|  47   |  Permutations II  | 中等 |       |       |     |
|  60   |  Permutation Sequence  | 中等 |       |       |     |
|  77   |  Combinations  | 中等 |       |       |     |
|  78   |  Subsets | 中等 |       |       |  ⭐   |
|  79   |  Word Search | 中等 |       |       |  ⭐   |

- 参考：
    - [回溯算法详解](https://mp.weixin.qq.com/s/nMUHqvwzG2LmWA9jMIHwQQ)

## Dynamic Programming
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  78   |  Subsets | 中等 |       |       |  ⭐   |
|  152  |  Maximum Product Subarray | 中等 |       |       |     |
|  198  |  House Robber | 中等 |       |       |  ⭐   |

- 参考：
    - [台阶问题](https://www.jianshu.com/p/0b1a3cf4442a)
    - [程序员小灰DP问题：台阶问题和金矿问题](https://mp.weixin.qq.com/s/3h9iqU4rdH3EIy5m6AzXsg)
    - [leetcode强盗问题](https://leetcode.com/problems/house-robber/discuss/156523/From-good-to-great.-How-to-approach-most-of-DP-problems)
    - [告别动态规划，连刷 40 道题，我总结了这些套路，看不懂你打我（万字长文） - 帅地的文章 - 知乎](https://zhuanlan.zhihu.com/p/91582909)
  
## Bit Manipulation
- 异或的特性。第136题。
```
x ^ 0 = x（136题）
x ^ x = 0（136题、389题） 
a ^ b = c => a ^ c = b => b ^ c => a （交换律）
a ^ b ^ c = a ^ (b ^ c) = (a ^ b) ^ c（结合律）（136题）
```

- 构造特殊的mask，将特殊为设置为0或1


- 有特殊意义的&位操作运算
```
x & 1 == 1or==0判断x的奇偶性，x&1>0为奇数
x &= (x-1) 将最低位（LSB）的1清零 (201题、231题、338题)
x & -x 得到最低位(LSB)的1
```

| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  78   |  Subsets | 中等 |       |       |  ⭐   |
|  136   |  Single Number | 简单 |       |       |  ⭐   |
|  187   |  Repeated DNA Sequences | 中等 |       |       |     |
|  190   |  Reverse Bits | 简单 |       |       |  ⭐    |
|  191   |  Number of 1 Bits | 简单 |       |       |  ⭐    |
|  201   |  Bitwise AND of Numbers Range | 中等 |       |       |  ⭐    |
|  232   |  Power of Two | 简单 |       |       |  ⭐    |
|  260   |  Single Number III | 中等 |       |       |  ⭐    |
|  268   |  Missing Number | 简单 |       |       |  ⭐    |
|  318   |  Maximum Product of Word Lengths | 中等 |       |       |      |
|  338   |  Counting Bits | 中等 |       |       |    ⭐  |
|  342   |  Power of Four | 简单 |       |       |      |
|  389   |  Find the Difference | 简单 |       |       |   ⭐   |
|  397   |  Integer Replacement | 中等 |       |       |      |

- 参考：
    - [位运算简介及实用技巧（一）：基础篇](http://www.matrix67.com/blog/archives/263)

## Union Find
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  547  |  Friend Circles | 中等 |       |       |  ⭐   |


- 参考：
    - [算法学习笔记(1) : 并查集](https://zhuanlan.zhihu.com/p/93647900)

 ## Others
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  169   |  Majority Element | 简单 |       |       |  ⭐   |

- 参考：
    - [摩尔投票算法（169题）](https://www.zhihu.com/question/49973163/answer/235921864)