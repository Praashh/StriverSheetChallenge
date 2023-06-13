int calculateMinPatforms(int at[], int dt[], int n)
{ // Write your code here.
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({at[i], dt[i]});
    sort(v.begin(), v.end());
    int ans = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(v[0].second);
    for (int i = 1; i < n; i++)
    {
        if (pq.top() < v[i].first)
        {
            pq.pop();
            pq.push(v[i].second);
        }
        else
        {
            pq.push(v[i].second);
            ans++;
        }
    }
    return ans;
}