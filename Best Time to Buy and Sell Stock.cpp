#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
        int price = INT_MAX;
        int profit = INT_MIN;

        for(int i=0; i<arr.size(); i++){
            price = min(price, arr[i]);
            profit = max(profit, arr[i]-price);
        }
        return profit;
}

//T.C->O(N)
//S.C->O(1)