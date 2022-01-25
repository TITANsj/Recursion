#include <iostream>

using namespace std;

int fastPower(int a, int n){
    if(n==0)
        return 1;
    int ans = fastPower(a, n/2);
    if(n&1)
        return a*ans*ans;
    return ans*ans;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<fastPower(a,b);
    return 0;
}