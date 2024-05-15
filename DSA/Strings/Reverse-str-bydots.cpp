#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string reverseWords(string S) 
    { 
       string s2;
       int len = S.length();
       
       for(int i=len-1; i>=0; i--){
           if(S[i] == '.'){
               int r = len - i;
               len = i-1;
               
               s2.append(S.substr(i+1, r));
               s2.append(".");
           }
       }
       s2.append(S.substr(0,len+1));
    
    return s2;
        
} 

int main(){

    string str;
    cout<<"Enter string to reverse, separated by dot "<<endl;
    cin>>str;
    cout<<"String is: "<<str<<endl;

    cout<<"Reversed string is : "<<reverseWords(str);

    return 0;
}
