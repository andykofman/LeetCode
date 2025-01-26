/*
Greedy Algorithm
Implementing a greedy algorithm to solve the set-covering problem.
using a brute force approach.
*/


/* 

Problem setup:
1- Define a list of radio stations, each with a set of states they cover.
2- Gnerate all subsets of radio stations.
3- Check if each subset covers all the states.
4- Return the smallest subset that covers all the states.

*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <math.h>
#include <cmath>
#include <set>

using namespace std;

// Function to check if a subset of stations cover all sets

bool coversAllStates (const unordered_set <string> &coveredStates, const unordered_set <string> & allStates) {
    for (const auto & state : allStates) /* a range-based for loop,
     which iterates over each element (state) in the allStates set.
    */ {
        /* The main idea is to check if a value is not found */
        /*Does the search failed to find any "state"*/
        if (coveredStates.find(state)  == coveredStates.end() /*Loop Termination*/ ) /*The find method checks if state exists
         in the coveredStates*/ {
            return false;  // return false if any state is not covered
        }
    }

    return true; // All states are covered
}

// main function    
int main() {

    // Input: List of station and states they cover
    //declare a vector () that stores a collection of pairs consists of:
    // 1- A String (stations) 2- An unordered_set<string> (states)
    // Pair contains the two related values
    vector < pair < string, unordered_set<string>>> stations = {
        {"KONE", {"ID", "NV", "UT"}},
        {"KTWO", {"WA", "ID", "MT"}},
        {"KTHREE", {"OR", "NV", "CA"}},
        {"KFOUR", {"NV", "UT"}},
        {"KFIVE", {"CA", "AZ"}}
    };

    //set of all states that needs to be covered
    unordered_set<string> allStates = {"WA", "ID", "OR", "NV", "UT", "CA", "AZ"};

    int n = stations.size();
    // Start with an impossible size (larger than all stations)
    int smallestSubSize = n +1;
    //store the best solution
    vector <string> bestSubset;
    //Iterate over all subsets of stations (2^n subset)
    int totalSubsets = pow(2, n);
    for (int subSetMask =0; subSetMask <totalSubsets; ++subSetMask){
        unordered_set <string> coveredStates; //States covered by the current subset
        vector <string> currentSubset;    // Stations in the current subset
                                        //   build a subset based on  subSetMask(binary representation) 
        for (int i =0; i < n; i++) {
            if (subSetMask & (1 << i)){
                // Check if the i-th station is included in the subset
                currentSubset.push_back(stations[i].first);
                coveredStates.insert(stations[i].second.begin(), stations[i].second.end());
            }
        }

        // Check if current subset cover all the states
        if (coversAllStates (coveredStates, allStates)){
            // check if it is the smallest subset so far
            if (currentSubset.size() < smallestSubSize){
                smallestSubSize = currentSubset.size();
                bestSubset = currentSubset;
            }
        }
    } 

    // output the result
    if (!bestSubset.empty()){
        cout << "smallest Subset of all stations that covers all the nation:\n";
        for (const auto & station :bestSubset) {
            cout << station << " ";
        }
        cout << endl;


    }
    else {
        cout << "No subset found" << endl;
        
    }

return 0;
}