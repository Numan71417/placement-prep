#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string str){
    string newstr;
    
    int k =0;
    for(int i=1; i<str.length(); i++){
        if(str[i] != str[i-1]){
            newstr.append(str[i-1]);
        }
    }
    return newstr;
}

int main(){

    string str;
    cout<<"Enter string: ";
    cin>>str;
    cout<<"Result: "<<removeDuplicate(str);

    return 0;
}