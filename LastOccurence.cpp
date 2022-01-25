#include <iostream>

using namespace std;

int lastOcc(int a[], int n, int x){
    if(n==0)
        return -1;
    int i=lastOcc(a+1, n-1, x);
    if(i==-1){
        if(a[0]==x)
            return 0;
        else   
            return -1;
    }
    return i+1;
    
    
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<lastOcc(a,n,x);
}