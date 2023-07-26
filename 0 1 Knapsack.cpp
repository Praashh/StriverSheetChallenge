int solve(int n, int w, vector<int> &values, vector<int> &weights){
	
	vector<vector<int>> dp(n, vector<int> (w+1, 0));
	for(int i = weights[0]; i <= w; i++){
		if(weights[0] <= w){
			dp[0][i] = values[0];
		}
	}

	for(int i = 1; i < n; i++){
		for(int j = 0; j <= w; j++){
			int include = 0;
			if(weights[i] <= j){
				include = values[i] + dp[i-1][j - weights[i]];
			}

			int exclude = dp[i-1][j];

			dp[i][j] = max(include, exclude);
		}
	}

	

	return dp[n-1][w];
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) {
	return solve(n, w, values, weights);
}