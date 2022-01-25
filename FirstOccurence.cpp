#include <iostream>

using namespace std;

int firstOcc(int a[], int n, int x){
    if(n==0)
        return -1;
    if(a[0]==x)
        return 0;
    int i=firstOcc(a+1, n-1, x);
    if(i==-1)
        return -1;
    return i+1;
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<firstOcc(a,n,x);
}