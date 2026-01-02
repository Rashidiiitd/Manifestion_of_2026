# 2026-01-02 — N-Repeated Element in Size 2N Array

- LeetCode: [N-Repeated Element in Size 2N Array](https://leetcode.com/problems/n-repeated-element-in-size-2n-array/) — 961, Easy
- Tags: array, hashing, math

## Problem statement
Given an array `nums` with `2n` elements, there is one element that is repeated `n` times and the rest are distinct. Find the element repeated `n` times.

## Example
Input: [1,2,3,3]
Output: 3

## Approaches

1) Window check (O(n), O(1)) — Observes that in a size-2n array the repeated element must appear close to another occurrence. Check if any `nums[i] == nums[i+1]` or `nums[i] == nums[i+2]` while scanning.

2) Hash set (O(n), O(n)) — Insert elements into a set; the first element already in the set is the repeated one.

## Pseudocode (window check)
```
for i from 0 to n*2 - 3:
	if nums[i] == nums[i+1] or nums[i] == nums[i+2]:
		return nums[i]
return nums.back()
```

## Complexity
- Time: O(n)
- Space: O(1) (window method) or O(n) for the hash-set method

## Code
- See `LeetCode_POTD/January/jan_02_.cpp`

## Notes
- This problem is easy to implement and useful as a pattern: look for local repeats or use hashing for a simpler implementation.

---

Use the template `LeetCode_POTD/templates/leetcode_template.md` when adding future problem write-ups.

