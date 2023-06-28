#include<stack>
stack<string>ss;
void pushing(int ind,string &s){
	int i;
    for( i=ind;i<s.size();i++){
		if(s[i]!=' ')//till we get a character to include in string w 
			break;
	}
	string w="";//word
	int j;
	for( j=i;j<s.size();j++){
		if(s[j]==' ')//we include characters till we encounter a space
			break;
		w+=s[j];
	}
	//cout<<w<<endl;
	if(w!=" ")ss.push(w);//if its not space just in case
	if(j<s.size()) pushing(j,s);//till j moves to the end we do the same thing 
	else return;
}
string reverseString(string &s){
	string ans="";
	pushing(0,s);
	while(!ss.empty()){
		//cout<<ss.top()<<endl;
        ans+=ss.top();
		ans+=' ';//adding space between two words
		ss.pop();
	}
	if(ans[0]==' ') ans=ans.substr(1,ans.length());//removing spaces in the front
	ans.pop_back();//removes space at the end
	return ans;
	
}