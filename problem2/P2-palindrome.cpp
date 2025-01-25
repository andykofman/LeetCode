/*
Given an integer x, return true if x is a 
palindrome, and false otherwise.

palindrome is when the integer is read the same forward and backward

Example : 
. 121 ----> palindrome
. 122 ----> Not palindrome

Constraints:

Negative numbers are not palindromes.

Numbers ending with 0 (except 0 itself) are not palindromes.
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {

public: 
    bool isPalindrome (int x) {
        // Handle edge casses
        // negative number ----> false
        if (x < 0 ) return false;
        //  ends with zero ----> false
        // if (x % 10 == 0 ) return false;              removed because it will be included in the loop

        string s = to_string (x);
        int n = s.length();

        //you only need to compare the first half of the string with 
        //the second half to check for symmetry

        for (int i= 0; i < n/2; i++) {
            if (s[i] != s[n-1-i] ) {
                return false;

            }
           
        }

    return true;
    }



};