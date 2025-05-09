/*
https://leetcode.com/problems/majority-element/
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
*/
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n =(nums.size())/2;
            auto it = nums.begin();
            int counter = 0;
            for(; it != nums.end()-1; it++){
                if(*it == *(it+1)){
                    counter++;
                    if(counter == n) return *it;
                }
                else{
                    counter = 0;
                }
            }
            return nums[0];
        }
    };