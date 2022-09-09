#include<iostream>
using namespace std;

#define int long long
#define nline << endl
#define space << " "
#define target 999

// *-.-* sagarhasan273 *-.-*
// *-.-* Happy Coding *-.-*

int sagarhasan273(){
    int sum;
    for (int i = 1; i<=target; i++){
        if (i%3 == 0 || i%5==0){
            sum += i;
        }
    }
    return sum;
}

int32_t main(){
    cout << sagarhasan273();
    return 0;
}
