# LeetCode by Cpp
[LeetCode Online Judge] (https://leetcode.com/) is a website containing many **algorithm questions**. Most of them are real interview questions of **Google, Facebook, LinkedIn, Apple**, etc. This repo shows my solutions by Cpp. Please feel free to reference and **STAR** to support this repo, thank you!

## Data Structures

> 标识了 ✅ 的专题是完成所有题目了的，没有标识的是还没有做完所有题目的

* [Array](#array)
* [String](#string)
* [Two Pointers](#two-pointers)
* [Linked List](#linked-list)
* [Stack](#stack)
* [Tree](#tree)
* [Dynamic programming](#dynamic-programming)
* [Backtracking](#backtracking)
* [Depth-first search](#depth-first-search)
* [Breadth-first Search](#breadth-first-search)
* [Binary Search](#binary-search)
* [Math](#math)
* [Hash Table](#hash-table)
* [Sort](#sort)
* [Bit Manipulation](#bit-manipulation)
* [Union Find](#union-find)
* [Sliding Window](#sliding-window)
* [Segment Tree](#segment-tree)

## 算法
## 一.目录
| #     |  Tile | Solution | Acceptance | Difficulty | Frequency | 
|:----: | :---: | :------: | :--------: | :--------: | :-------: | 
| 0001  | Two Sum | [GO]() | 44.5%      | Easy | # |
| 0002  | Add Two Numbers | [GO]() | 31.8%      | Medium	 | # |
| 0003  | Longest Substring Without Repeating Characters  | [GO]() | 28.9%      | Medium | # |
| 0006  | ZigZag Conversion | [GO]() | 33.3%      | Medium | # |
| 0007  | Reverse Integer  | [GO]() | 25.5%      | Easy | # |
| 0009  | Palindrome Number  | [GO]() | 45.0%      | Easy | # |
| 0011  | Container With Most Water | [GO]() | 46.8%      | Medium | # |
| 0013  | Roman to Integer | [GO]() | 53.3%      | Easy | # |
| 0020  | Valid Parentheses | [GO]() | 37.3%      | Easy | # |
| 0021  | Merge Two Sorted Lists  | [GO]() | 49.0%      | Easy | # |
| 0026  | Remove Duplicates from Sorted Array | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0026) | 42.0%      | Easy | # |
| 0027  | Remove Element    | [GO]() | 45.6%      | Easy | # |
| 0031  | Next Permutation  | [GO]() | 31.1%      | Medium | # |
| 0033  | Search in Rotated Sorted Array      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0033) | 33.2%      | Medium | # |
| 0035  | Search Insert Position    | [GO]() | 41.2%      | Easy | # |
| 0048  | Rotate Image     | [GO]() | 50.7%      | Medium	 | # |
| 0054  | Spiral Matrix    | [GO]() | 31.5%      | Medium	 | # |
| 0056  | Merge Intervals     | [GO]() | 36.7%      | Medium	 | # |
| 0057  | Insert Interval      | [GO]() | 31.8%      | Hard	 | # |
| 0059  | Spiral Matrix II      | [GO]() | 48.5%      | Medium	 | # |
| 0066  | Plus One       | [GO]() | 41.7%      | Easy	 | # |
| 0073  | Set Matrix Zeroes     | [GO]() | 40.9%      | Medium	 | # |
| 0074  | Search a 2D Matrix      | [GO]() | 35.3%      | Medium	 | # |
| 0078  | Subsets      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0078) | 55.2%     | Medium	 | # |
| 0080  | 	Remove Duplicates from Sorted Array II | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0080) | 41.4% | Medium	 | # |
| 0151  | Reverse Words in a String  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0151) | 18.5%  | Medium	 | # |
| 0152  | Maximum Product Subarray  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0152) | 30.4% | Medium	 | # |
| 0155  | Min Stack    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0155) | 39.7% | Easy	 | # |
| 0166  | Fraction to Recurring Decimal  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0155) | 25.3%  | Medium	 | # |
| 0167  | Two Sum II - Input array is sorted  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0167) | 51.9%  | 	Easy	 | # |
| 0168  | Excel Sheet Column Title  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0168) | 29.9%  | 	Easy	 | # |
| 0169  | Majority Element  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0169) | 54.9%  | 	Easy	 | # |
| 0171  | Majority Element  | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0171) | 52.8%  | 	Easy	 | # |
| 0187  | Repeated DNA Sequences | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0187) | 37.4%  | 	Medium	 | # |
| 0190  | Reverse Bits      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0190) | 41.4%     | Easy	 | # |
| 0191  | Number of 1 Bits      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0191) | 45.8%     | Easy	 | # |
| 0198  | SuHouse Robberbsets      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0198) | 41.4%     | Easy	 | # |
| 0201  | Bitwise AND of Numbers Range      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0201) | 36.8%     | Medium		 | # |
| 0231  | Power of Two      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0231) | 42.6%    | Easy		 | # |
| 0260  | Single Number III      | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0260) | 58.9%    | Medium		 | # |
| 0268  | Missing Number     | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0268) | 49.7%    | Easy		 | # |
| 0318  | Maximum Product of Word Lengths    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0318) | 49.7%    | Medium		 | # |
| 0338  | Counting Bits    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0338) | 66.2%    | Medium		 | # |
| 0342  | Power of Four    | [GO](https://github.com/JMing15/LeetCode-Cpp/tree/master/Algorithm/0342) | 40.9%    | Easy		 | # |
| ----  | ------------------------| ------ | ---------- | ---------- | ---- |

## 分类
## 

## Array
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  167   |  Two Sum II - Input array is sorted | Easy |       |        |         |

## String
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  151    |  Reverse Words in a String  |   Medium   |       |        |         |
|  166    |  Fraction to Recurring Decimal  |   Medium   |       |        |         |
|  187   |  Repeated DNA Sequences | Medium |       |       |     |

## Stack
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  155 | Min Stack |  Easy  |       |        |         |

## Bit Manipulation
- 异或的特性。第136题。
```
x ^ 0 = x（136题）
x ^ x = 0（136题） 
a ^ b ^ c = a ^ (b ^ c) = (a ^ b) ^ c（结合律）（136题）
```

- 有特殊意义的&位操作运算
```
x & 1 == 1or==0判断x的奇偶性，x&1>0为奇数
x &= (x-1) 将最低位（LSB）的1清零 (201题、231题、338题)
x & -x 得到最低位(LSB)的1
```

| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  78   |  Subsets | Medium |       |       |  ⭐   |
|  136   |  Single Number | Easy |       |       |  ⭐   |
|  187   |  Repeated DNA Sequences | Medium |       |       |     |
|  190   |  Reverse Bits | Easy |       |       |  ⭐    |
|  191   |  Number of 1 Bits | Easy |       |       |  ⭐    |
|  201   |  Bitwise AND of Numbers Range | Medium |       |       |  ⭐    |
|  232   |  Power of Two | Easy |       |       |  ⭐    |
|  260   |  Single Number III | Medium |       |       |  ⭐    |
|  268   |  Missing Number | Easy |       |       |  ⭐    |
|  318   |  Maximum Product of Word Lengths | Medium |       |       |      |
|  338   |  Counting Bits | Medium |       |       |    ⭐  |
|  342   |  Power of Four | Easy |       |       |      |

- 参考：
    - [A summary: how to use bit manipulation to solve problems easily and efficiently](https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary:-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently)

## Bactracking
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  78   |  Subsets | Medium |       |       |  ⭐   |

- 参考：
    - [回溯算法详解](https://mp.weixin.qq.com/s/nMUHqvwzG2LmWA9jMIHwQQ)

## DP
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  78   |  Subsets | Medium |       |       |  ⭐   |
|  152  |  Maximum Product Subarray | Medium |       |       |     |
|  198  |  House Robber | Medium |       |       |  ⭐   |

- 参考：
    - [台阶问题](https://www.jianshu.com/p/0b1a3cf4442a)
    - [程序员小灰DP问题：台阶问题和金矿问题](https://mp.weixin.qq.com/s/3h9iqU4rdH3EIy5m6AzXsg)
    - [leetcode强盗问题](https://leetcode.com/problems/house-robber/discuss/156523/From-good-to-great.-How-to-approach-most-of-DP-problems)
    - [告别动态规划，连刷 40 道题，我总结了这些套路，看不懂你打我（万字长文） - 帅地的文章 - 知乎](https://zhuanlan.zhihu.com/p/91582909)

 ## Others
| #     |  Tile | Difficulty | Time  | Space | 收藏  |
|:----: | :---: | :--------: | :---: | :---: | :---: |
|  169   |  Majority Element | Easy |       |       |  ⭐   |

- 参考：
    - [摩尔投票算法（169题）](https://www.zhihu.com/question/49973163/answer/235921864)