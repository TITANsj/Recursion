#include <iostream>

using namespace std;

int storeOcc(int a[], int i, int n, int x, int out[], int j){
    if(i==n)
        return j;
    if(a[i]==x){
        out[j]=i;
        return storeOcc(a, i+1,n,x,out,j+1);
    }
    return storeOcc(a,i+1,n,x,out,j);
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int out[100];
    int count=storeOcc(a,0,n,x,out,0);
    for(int i=0;i<count;i++)
        cout<<out[i]<<" ";
}