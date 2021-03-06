/*
In a array nums of size 2 * n, there are n + 1 unique elements, and exactly one of these elements is repeated n times.

Return the element repeated n times.

 

Example 1:

Input: nums[1,2,3,3]
Output: 3
Example 2:

Input: nums[2,1,2,5,3,2]
Output: 2
Example 3:

Input: nums[5,1,5,2,5,3,5,4]
Output: 5
 

Note:

4 <= nums.length <= 10000
0 <= nums[i] < 10000
nums.length is even
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){return nums[i];}
        }
        return -1;
    }
};
