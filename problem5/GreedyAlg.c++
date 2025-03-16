#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
Algorithm flow: 
1- sort the coins descending
2- initialize count = 0
3- For each coin: 
    a- while remaining amount >= coin
        i- subtract the coin from the remaining amount
        ii- increment coin
4- Return Count if amount == 0, else -1
*/
int greedyCoinChange(vector <int> coins, int amount){
    sort(coins.rbegin(), coins.rend()); // Sort descending
    int count =0;
    for (int coin: coins){
        while (amount >= coin){
            amount -= coin;
            count ++;

        }
    return (amount == 0)? count: -1;
    }

}