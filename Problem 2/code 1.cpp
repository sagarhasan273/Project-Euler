#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long

int fib(int n){
    if(n==1) return 2;
    if(n==2) return 8;
    return 4 * fib(n-1) + fib(n-2);
}

int summation(int limit){
    int sum=0, a=1, b=1, c=a+b;
    while (c<limit){
        sum += c;
        a = b+c;
        b = a+c;
        c = a+b;
    }
    return sum;
}

int usingMod(int limit){
    int sum=0, a=1, b=1, c=a+b;
    while (c<limit){
        if (b%2==0) sum += c;
        c = a+b;
        a = b;
        b = c;
    }
    return sum;
}

int32_t main(){
    int p = fib(4);
    cout << summation(4000000) << endl;
    cout << usingMod(4000000) << endl;
    return 0;
}
