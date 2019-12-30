# [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)

## 题目

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.

Each number in candidates may only be used once in the combination.

Note:
- All numbers (including target) will be positive integers.
- The solution set must not contain duplicate combinations.

Example 1:
```
Input: candidates = [10,1,2,7,6,1,5], target = 8,
A solution set is:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]

Example 2:
```
Input: candidates = [2,5,2,1,2], target = 5,
A solution set is:
[
  [1,2,2],
  [5]
]


## 题目大意
给定数组candidates和一个目标元素target，找出candidates中所有可以使元素和为target的组合，其中candidates中的元素只能被选取一次。

## 解题思路
- 这题是39题的加强版，与39题不同的是本题的candidates含有重复元素，且结果中不允许重复选取candidates中的元素，因此首先需要对candidates排序

