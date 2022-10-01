## Max Consecutive Ones

<p align="center">
    https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/
</P>

Given a binary array nums, return the maximum number of consecutive 1's in the array.

A **valid BST** is defined as follows:
- The left subtree of a node contains only nodes with keys **less than** the node's key.
- The right subtree of a node contains only nodes with keys **greater than** the node's key.
- Both the left and right subtrees must also be binary search trees.


**Constraints:**
- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

<h4>EXAMPLES</h4>

```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
```

```Input: nums = [1,0,1,1,0,1]
Output: 2
```

<h4>SOLUTION</h4>

```
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_occur=0;
        int curr_occur=0;
        
        for(auto i:nums)
        {
            if(i==1)
                curr_occur++;
            max_occur=max(max_occur,curr_occur);
            if(i!=1)
                curr_occur=0;
        }
        return max_occur;
    }
};
```
