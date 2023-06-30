int INT_number(char s){

    if(s=='I')return 1;

    else if(s=='V')return 5;

    else if(s=='X')return 10;

    else if(s=='L')return 50;

    else if(s=='C')return 100;

    else if(s=='D')return 500;

    else if(s=='M')return 1000;

    

}

 

int romanToInt(string s) {

    // Write your code here

    int n=s.length();

    if(n==1){

        return INT_number(s[0]);

    }

    int ans= 0;

    for(int i=0; i<n-1; i++){

        int x = INT_number(s[i]);

        int y = INT_number(s[i+1]);

        if(x>=y){

            ans=ans+x;

        }

        else{

            ans=ans-x;

        }

    }

    ans = ans+INT_number(s[n-1]);

 

    return ans;

}