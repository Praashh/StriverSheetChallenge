#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	    unordered_map<int,int>mp;

        for(int i=0; i<n; i++){
			mp[arr[i]]++;
		}
        int ans  = -1;
        for(int i=0; i<n; i++){
            if(mp[arr[i]] > n/2){
                ans = arr[i];
            }
        }
        return ans;
}

// T.C->O(N)
// S.C->O(N)