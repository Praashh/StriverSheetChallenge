#include<queue>

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

  // Write your code here.

  int indeg[n+1]={0};

  vector<int>adjl[n+1];

  for(int i=0;i<edges.size();i++){

    int u=edges[i].first;

    int v=edges[i].second;

    adjl[u].push_back(v);

  }

  for(int i=1;i<=n;i++){

    for(auto x:adjl[i]){

      indeg[x]++;

    }

  }

  queue<int>q;

  for(int i=1;i<=n;i++){

    if(indeg[i]==0){

      q.push(i);

    }

  }

  int count=0;

  while(!q.empty()){

    int node=q.front();

    q.pop();

    count++;

    for(auto x:adjl[node]){

      indeg[x]--;

      if(indeg[x]==0){

        q.push(x);

      }

    }

    

  }

  if(count==n){

    return false;

  }

  return true;

}

