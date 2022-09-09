#include<iostream>
using namespace std;

#define int long long
#define nline << endl
#define space << " "
#define target 999

// *-.-* sagarhasan273 *-.-*
// *-.-* Happy Coding *-.-*

int sagarhasan273(int n){
    int p = target/n;
    return n * p * (p+1) / 2;
}

int32_t main(){
    cout << sagarhasan273(3) + sagarhasan273(5) - sagarhasan273(15);
    return 0;
}