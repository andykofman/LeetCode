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

    }
    return (amount == 0)? count: -1;
}

int main (){

    int n, target;
    cout << "Enter Number of Coins:" ;
    cin >> n;

    vector <int> coins(n);
    cout << "Enter the coin Values: ";
    for (int i =0; i< n; i++){
        cin >> coins[i];
    }

    cout << "Enter the target amount: " ;
    cin >> target;

    int result = greedyCoinChange(coins, target);
    if (result !=-1){
        cout << "Minimum no. of coins needed: " <<
        result <<endl;
        
    }

   return 0; 
}