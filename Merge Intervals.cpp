#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
     vector<vector<int>>res;
       if(intervals.size()==0){
           return res;
       } 

       // Sort the List

       sort(intervals.begin(),intervals.end());

       vector<int>curr=intervals[0];

       for(int i=1;i<intervals.size();i++){

           if(curr[1]>=intervals[i][0]){
               curr[1]=max(curr[1],intervals[i][1]);
           }
           else{
            res.push_back(curr);
            curr =intervals[i];
            }
       }
       res.push_back(curr);
       return res;
    
}
