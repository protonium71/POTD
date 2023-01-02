class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string ans;
	    int i;
	    for(i=0;i<S.length();i++){
	        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')ans+="";
	        else ans+=S[i];
	    }
	    return ans;
	}
};