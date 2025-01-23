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
            // iterate through each element in the nums array
            for (int i =0; i<nums.size(); i++)
            {
                // Calaculate the complement needed to reach the target
                //compliment = target - current value
                int complement = target - nums [i];

                //Check if the complement value exists in the seen hashmap
                //seen.find(complement) returns an iterator to the element if found
                //seen.end() reurns an iterator to the end of the container if not found

                if (seen.find(complement) != seen.end())
                {
                    // IF complement is found, return the indices:
                    //1- the index of the complement stored in the hashtable
                    //2- the current index (i)
                    return {seen[complement],i};
                }
                // if complement is Not found, store the number and its index in the hashtable
                // Key: current number (nums[i])
                // value: current index
            seen[nums[i]] =i;
            }


    }
};

