#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// TODO: need to correct for few test cases like no palindrome
string longestPalin (string S) {
       string LPS;
       int len = S.length();
       int maxlen;
       int start=0,end=0;
       if(len <=1 )
            return S;
       
       for(int i= 1; i<len; i++){
           
           //for odd palindrome
           int low = i;
           int high = i;
           while(low >= 0 && high < len && S[low] == S[high]){
               low--; 
               high++;   
           }
            int len1 = high - low -1 ;
          
           //for even palindrome
           low = i-1;
           high = i;
            while(low >= 0 && high < len && S[low] == S[high]){
               low--; 
               high++;
              
           }
            int len2 = high - low - 1;

            maxlen = max(len1, len2);
            if(end-start < maxlen){
                start = i - (maxlen-1)/2;
                end = i + maxlen/2;
            }

           
       }
       LPS = S.substr(start-1, end+1);
       return LPS;
       
    }


int main(){
    int t;
    cout<<"Test cases: ";
    cin>>t;

    while(t--){

    string str;
    cout<<"\nEnter string to find longest palindrome: ";
    cin>>str;
    cout<<"\nThe longest Palindrom is: "<<longestPalin(str);

    }
    return 0;
}