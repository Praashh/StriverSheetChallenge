#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
        int low  = 0;
        int mid = 0;
        int high = n-1;

        for(int i=0; i<n; i++){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }else{
                mid++;
            }
        }
}

// T.C->O(N)
//S.C->O(1)