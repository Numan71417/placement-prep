#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int i){
    if(i<=0){
        return;
    }

    print(i-1);
    cout<<i<<" ";
}

int main(){

    int n = 10;
    print(n);

    return 0;
}