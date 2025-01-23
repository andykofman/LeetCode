/*


Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/


////////////////////////////////////////////////////////

/*
initialize empty hashmap
*/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
        /*
        initialize a function that will return a vector of indices for the target        */
    // the function take two parameters:
    // 1- a reference to a vector of integers
    
    // 2- an integer representing the target
       vector <int> twoSum(vector <int> &nums, int target)    
       {
        /*
            initialize empty hashmap
            */
            unordered_map <int, int> seen;
            for (int i =0; i<nums.size(); i++){
                int complaiment = target - nums [i];
                if (seen.find(complaiment) != seen.end()){
                    return {seen[complaiment],i};
                }
            seen[nums[i]] =i;
            }


    }
};

