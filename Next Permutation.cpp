//The brute-force is Generate all the Permutation and strore them and return the next permutation but it will take very high amount of time.

// Better Approach -> Using STL 

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &A, int n)
{
   next_permutation(A.begin(), A.end());
   return A;
}

// Optimal Approach 

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &A, int n)
{
   int ind = -1;
   // Step -1 Find Break-Point
   for(int i=n-2; i>=0; i--){
       if(A[i] < A[i+1]){
           ind = i;
           break;
       }
   }
   //Edge Case
   if(ind == -1){
       reverse(A.begin(), A.end());
       return A;
   }
   // Step-2 Find the Smallest element which is greater than A[ind]
   for(int i=n-1; i>=ind; i--){
       if(A[i] > A[ind]){
           swap(A[i], A[ind]);
           break;
       }
   }
   // Step-3 Reverse Rest of the array
   reverse(A.begin()+ind+1, A.end());

   return A;
}

// T.C-> O(n) + O(n) + O(n)[in worst case];

// S.C-> O(1)