

class Solution {
public:
/*
Problem: N-Repeated Element in Size 2N Array — 961
Date: 2026-01-02
Link: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
                return nums[i];
        }
        return nums.back();
    }
    
    // Alternative: hash set method
    int repeatedNTimes_set(vector<int>& nums) {
        unordered_set<int> seen;
        for (int x : nums) {
            if (seen.count(x)) return x;
            seen.insert(x);
        }
        return -1; // should not happen per problem constraints
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> example = {1,2,3,3};
    cout << sol.repeatedNTimes(example) << '\n';
    return 0;
}