#use python to implement the greedy algorithm to solve the set-covering problem. 
""" 
easier implementation in python

"""

"""
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

"""


states_needed = set(["mt", "wa", "or", "id", "nv", "ut", "ca", "az"]) # you pass an array of states and it gets covered to a set

stations = {} #here the keys are station names, and the values are the states they cover.
stations ["Kone"] = set(["id", "nv", "ut"])
stations ["Ktwo"] = set(["id", "wa", "mt"])
stations ["Kthree"] = set(["or", "nv", "ca"])
stations ["Kfour"] = set(["ut", "nv"])
stations ["Kfive"] = set(["ca", "az"])

#something to hold the final answer
final_station = set ()


#Step 2: Calculate what stations you will use
# there can be more than one correct ans

# go through each station and find
#the one that covers the most uncovered states
while states_needed:
    best_station = None
    states_covered = set()
    for station, states_for_stations in stations.items():
        covered = states_needed & states_for_stations
        if len(covered) > len(states_covered):
            best_station = station
            states_covered = covered

    states_needed -= states_covered
    final_station.add(best_station)

# Print the final result after the loop
print(final_station)
