#include <bits/stdc++.h>
int BinExpRecur(int a, int b, int m){
	if(b==0)return 1;
	long long res = BinExpRecur(a, b/2, m);
	if(b&1){
		return (a *((res*res)%m) %m);
	}else{
		return (res*res)%m;
	}
}
int modularExponentiation(int x, int n, int m) {
	return BinExpRecur(x, n, m);
}

// T.C->O(log(n))
// S.C->O(n)