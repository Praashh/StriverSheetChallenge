#include <bits/stdc++.h>


// T-C --> O(N^2)
// as we are having a loop as well as we are erasing items
// erasing a elem from a vector takes O(N)
string kthPermutation(int n, int k) {
    // Write your code here.
    // we have to calculate factorial for n-1 elemetns each time;
    int fact = 1;
    // in numbers array we will sotre and pick the numbers
    // if arr is [1, 2, 3, 4] --> 1 + [2, 3, 4] ]-> 6  (3! = 3*2)
    // if arr is [1, 2, 3, 4] --> 2 + [1, 3, 4] ]-> 6  (3! = 3*2)
    // if arr is [1, 2, 3, 4] --> 3 + [1, 2, 4] ]-> 6  (3! = 3*2)
    
    vector<int> numbers;
    for(int i = 1; i < n; i++){
        fact = fact * i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    // for 0 base indexing
    k = k-1;
    string ans = "";
    while(true){
        ans += to_string(numbers[k/fact]);
        // erasing the picked number
        numbers.erase(numbers.begin() + k/fact);

        if(numbers.size() == 0){
            break;
        }

        // re calculating k
        k = k % fact;
        fact = fact / numbers.size();
    }

    return ans;
}