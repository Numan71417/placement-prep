#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	
		set<string> ans;
	    void permutations(string S, int i, int len){
	        if(i>=len){
	            return;
	        }
	        for(int j=i; j<len; j++){
	            swap(S[i], S[j]);
	            if(i == (len-1)){
	                ans.insert(S);
	            }
	            permutations(S, i+1, len);
	        }
	        
	    }
	
		vector<string>find_permutation(string S)
		{
		   permutations(S, 0, S.length());
		   	vector<string> vec(ans.begin(), ans.end() );
		   return vec;
		}
};



int main(){
    int t;
    cout<<"Enter no of test cases: ";
    cin >> t;
    while(t--)
    {
        
        string S;
        cout<<t<<" ";
        cout<<"enter String: ";
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

