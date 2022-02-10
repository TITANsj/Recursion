#include <iostream>

using namespace std;

int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int friendsProblem(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return friendsProblem(n-1) + (fact(n-1) /fact(n-2))*friendsProblem(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<friendsProblem(n);
}