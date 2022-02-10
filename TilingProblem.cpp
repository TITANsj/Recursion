#include <iostream>

using namespace std;

int countWays(int n){
    if(n==0)
        return 0;
    if(n<=3)
        return 1;
    if(n==4)
        return 2;
    return countWays(n-1)+countWays(n-4);
}

int main() {
    int n;
    cin>>n;
    cout<<countWays(n);
}