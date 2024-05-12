#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n = 10;

void print(int i){
    if(i>n){
        return;
    } 
    print(i+1);
    cout<<i<<" ";
}

int main(){

    print(1);

    return 0;
}